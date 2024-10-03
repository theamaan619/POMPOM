import java.util.*;

public class AssociativeLaw {
	public static void main(String[] args) {
		int a,b,c;
		System.out.println("Enter Numbers for Three Digits: ");
		Scanner obj = new Scanner(System.in);
		a=obj.nextInt();
		b=obj.nextInt();
		c=obj.nextInt();
		System.out.println("Associative Law");
		System.out.println("A+(B+C)->"+(a+(b+c)));
		System.out.println("(A+B)+C->"+((a+b)+c));
		obj.close();
	}
}
