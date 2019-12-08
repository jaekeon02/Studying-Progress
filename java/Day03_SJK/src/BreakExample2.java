import java.util.Scanner;

public class BreakExample2 {

	public static void main(String[] args) {
		/* 무한 루프
		 *  무한 루프는 반복문의 반복횟수를 개발자가 정확히 사전에 인지하지 못하는 상황에서 주로 사용
		 *  
		 *  특정 조건하에 반복문을 강제로 종료하는 형태로 구성
		 *  
		 *  무한 루프는 일반적으로 while문을 사용하며, while의 조건식 자리에 논리상수 true를 쓰면 무한 루프가 구성
		 */
		Scanner sc= new Scanner(System.in);
		while(true) {//값 자체를 논리값 true로 설정하여 무조건 무한 루프
			
			System.out.println("15 x 6 == ?????");
			System.out.printf(">...");
			int answer = sc.nextInt();
			
			if(answer==90)
				break;
			else {
				System.out.println("다시입력하세요");
			}
			
		}
	}
}
