import java.util.Scanner;

public class LoopNesting {
	
	public static void main(String[] args) {
	
		/*
		 * 구구단 출력
		 * 
		 * 구구단 단수를 스캐너를 통해 입력받으세요
		 * 해당하는 단의 구구단을 1~9행까지 출력하세요
		 */
		
		Scanner sc = new Scanner(System.in);
		/*System.out.println("정수를 입력하세요 :");
		int dan = sc.nextInt();
		
		System.out.printf("***** 구구단 %d단 *****\n",dan);
		
			for(int hang=1; hang<=9; hang++) {
			System.out.printf("%d x %d = %d\n",dan,hang,dan*hang);
		}*/
		
			for(int dan1=2; dan1<=9; dan1++) {
				System.out.println();
				System.out.printf("***** 구구단 %d단 *****\n",dan1);
				for(int hang1=1; hang1<=9; hang1++) {
					System.out.printf("%d x %d = %d\n",dan1,hang1,dan1*hang1);}
			}
		sc.close();
	}
}
