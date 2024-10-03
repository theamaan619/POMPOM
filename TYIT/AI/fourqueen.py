def is_safe(board, row, col):
    # Check the row on the left side
    for i in range(col):
        if board[row][i] == 1:
            return False

    # Check the upper diagonal on the left side
    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    # Check the lower diagonal on the left side
    for i, j in zip(range(row, len(board)), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    return True


def solve_n_queens(board, col):
    # Base case: If all queens are placed, return True
    if col >= len(board):
        return True

    # Try placing this queen in all rows one by one
    for i in range(len(board)):
        if is_safe(board, i, col):
            # Place this queen
            board[i][col] = 1

            # Recur to place the rest of the queens
            if solve_n_queens(board, col + 1):
                return True

            # If placing queen in board[i][col] doesn't lead to a solution
            board[i][col] = 0  # Backtrack

    # If the queen cannot be placed in any row in this column, return False
    return False


def print_board(board):
    for row in board:
        print(" ".join("Q" if x == 1 else "." for x in row))


def solve_4_queens():
    n = 4  # Size of the board
    board = [[0] * n for _ in range(n)]

    if not solve_n_queens(board, 0):
        print("Solution does not exist")
    else:
        print_board(board)

def solve_8_queens():
    n = 8  # Size of the board
    board = [[0] * n for _ in range(n)]

    if not solve_n_queens(board, 0):
        print("Solution does not exist")
    else:
        print_board(board)

# Run the 4-queen solver
solve_4_queens()
print()
# Run the 8-queen solver
solve_8_queens()
