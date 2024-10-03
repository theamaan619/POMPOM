import java.util.Scanner;

public class DistributiveLaw {
    public static void main(String[] args) {
		int a,b,c;
		System.out.println("Enter Numbers for Three Digits: ");
		Scanner obj = new Scanner(System.in);
		a=obj.nextInt();
		b=obj.nextInt();
		c=obj.nextInt();
		System.out.println("Distributive Law");
		System.out.println("A(B+C)->"+(a*(b+c)));
		System.out.println("(AB)+(AC)->"+((a*b)+(a*c)));
		obj.close();
	}
}
