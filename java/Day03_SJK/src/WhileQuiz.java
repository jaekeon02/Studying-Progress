import java.util.Scanner;

public class WhileQuiz {
	public static void main(String[] args) {
		
		
		/* - 정수를 2개 (x,y)입력받아서 x부터 y까지의 누적합계를 while을 사용해서 구하는 코드를 만드세요
		 * ex) x부터 y까지의 합 : z"
		 */
		Scanner sc=new Scanner(System.in);
		System.out.println("시작 정수값을 입력하세요 : ");
		int x = sc.nextInt();
		
		System.out.println("끝 정수값을 입력하세요 : ");
		int y = sc.nextInt();
		
		if(x>y) {
			int temp = x;
			x=y;
			y=temp;
		}
		
		int g = x;
		int result=0;
		while(g<=y) {
			if(g<=y) {
			result+=g;
			g++;}
			
		}
		
		System.out.printf("%d부터 %d까지의  합은 %d 입니다",x,y,result);
		sc.close();
	}
}
