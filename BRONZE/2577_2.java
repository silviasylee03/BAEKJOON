//2577
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		String str = Integer.toString(A * B * C);
		int[] m = new int[10];
		
		for (int i = 0; i < str.length(); i++) {
			m[(str.charAt(i) - 48)]++;
		}
		
		for (int i = 0; i < 10; i++) {
			System.out.println(m[i]);
		}
		
		sc.close();
	}
}
