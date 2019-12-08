import java.util.Scanner;

public class BreakQuiz {
	
	public static void main(String[] args) {
	/*
	 1. 두수의 더하기를 맞추는 문제를 지속적으로 출제하는 프로그램
	 2. 2가지의 정수를 1~100사이의 난수를 발생시켜서 지속적으로 문제를 출제한 후 0을 입력하면 탈출
	 3. 종료이후 정답횟수와 오답횟수를 각각 출력	
	 */
		Scanner sc=new Scanner(System.in);
		
		
		int pcount = 0;
		int fcount = 0;
		System.out.println("문제를 시작합니다 종료하시려면 0을 입력하세요");
		while(true) {
			int num1 = (int)((Math.random())*100+1);
			int num2 = (int)((Math.random())*100+1);
			
			System.out.printf("%d + %d 의 답은 ?",num1,num2);
			int answer = sc.nextInt();
			if(answer==num1+num2) {
				System.out.println("정답입니다");
				pcount++;
				}
			else if(answer==0) {
				System.out.println("정지합니다");
				break;}
			
			else {
					System.out.println("오답입니다");
					fcount++;
				}
			
			}
		System.out.printf("정답횟수 : %d 오답횟수 : %d",pcount,fcount);
			
		}
		
	

}
