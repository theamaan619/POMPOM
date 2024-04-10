#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

// Stack definition
struct Stack {
    int top;
    char items[MAX_STACK_SIZE];
};

// Function prototypes
void push(struct Stack* stack, char item);
char pop(struct Stack* stack);
int is_operator(char symbol);
int precedence(char symbol);
void infix_to_postfix(char infix[], char postfix[]);
void reverse_string(char str[]);

int main() {
    char infix[MAX_STACK_SIZE];
    char postfix[MAX_STACK_SIZE];
    char prefix[MAX_STACK_SIZE];

    printf("Enter the infix expression: ");
    scanf("%s", infix);

    infix_to_postfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);

    // To convert to prefix, we need to reverse the infix expression,
    // convert it to postfix, and then reverse the postfix result.
    reverse_string(infix);
    infix_to_postfix(infix, prefix);
    reverse_string(prefix);
    printf("Prefix expression: %s\n", prefix);

    return 0;
}

// Function to push an element onto the stack
void push(struct Stack* stack, char item) {
    if (stack->top == MAX_STACK_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack->items[++stack->top] = item;
}

// Function to pop an element from the stack
char pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack->items[stack->top--];
}

// Function to check if a character is an operator
int is_operator(char symbol) {
    return (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/');
}

// Function to determine the precedence of an operator
int precedence(char symbol) {
    switch (symbol) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    }
}

// Function to convert infix expression to postfix expression
void infix_to_postfix(char infix[], char postfix[]) {
    struct Stack stack;
    stack.top = -1;
    int i, j;

    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        char symbol = infix[i];

        if (isalnum(symbol)) {
            postfix[j++] = symbol;  // Output operands directly to postfix
        } else if (symbol == '(') {
            push(&stack, symbol);
        } else if (symbol == ')') {
            while (stack.top != -1 && stack.items[stack.top] != '(') {
                postfix[j++] = pop(&stack);
            }
            if (stack.top == -1) {
                printf("Invalid infix expression: Unmatched parenthesis\n");
                exit(1);
            }
            pop(&stack); // Pop '(' from the stack
        } else if (is_operator(symbol)) {
            while (stack.top != -1 && precedence(stack.items[stack.top]) >= precedence(symbol)) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, symbol);
        } else {
            printf("Invalid character in the infix expression\n");
            exit(1);
        }
    }

    // Pop any remaining operators from the stack to postfix
    while (stack.top != -1) {
        if (stack.items[stack.top] == '(') {
            printf("Invalid infix expression: Unmatched parenthesis\n");
            exit(1);
        }
        postfix[j++] = pop(&stack);
    }

    postfix[j] = '\0'; // Null-terminate the postfix expression
}

// Function to reverse a string in place
void reverse_string(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

