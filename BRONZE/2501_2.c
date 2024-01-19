//2501
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		int N = Integer.parseInt(st.nextToken());
		int K = Integer.parseInt(st.nextToken());
		int count = 0;
		int kMin = 0;
		
		for (int i = 1; i <= N; i++) {
			if (N % i == 0) {
				count++;
			}
			
			if (count == K) {
				kMin = i;
				break;
			}
		}
		
		System.out.println(kMin);
	}
}
