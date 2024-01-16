//10808
import java.util.*;
import java.math.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String str = sc.next();
		int[] n = new int[26];
		
		for (int i = 0; i < str.length(); i++) {
			n[str.charAt(i) - 97]++;
		}
		
		for (int i = 0; i < 26; i++) {
			System.out.print(n[i] + " ");
		}
		
		sc.close();
	}
}
