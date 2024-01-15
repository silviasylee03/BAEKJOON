//2338
import java.util.Scanner;
import java.math.*;

public class N2338 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		BigInteger A = sc.nextBigInteger();
		BigInteger B = sc.nextBigInteger();
		
		System.out.print(A.add(B) + "\n" + A.subtract(B) + "\n" + A.multiply(B));
		
		sc.close();
	}
}
