import java.util.Scanner;

public class ContinueExmaple {
	
	public static void main(String[] args) {
	
		
			for(int i=1;i<=10;i++) {
				if(i==5)continue;
				System.out.printf(i +" ");
			}
			System.out.println("\n반복문 종료");
			
			//continue 키워드를 이용해서 1~30까지 정수중
			//홀수만 가로로 출력
			for(int num=1;num<=30;num++) {
				if(num%2==0) continue;
				System.out.printf("%d ",num);
			}
			System.out.println("\n\n");
			
			Scanner sc= new Scanner(System.in);
			
			
			while(true) {
				System.out.printf("정수를 입력하세요");	
				int num1=sc.nextInt();
				if(num1==1) break;
				else if(num1==0)
				{System.out.println("다른 정수를 입력해주세요");
				continue;
				}
				System.out.println(10/num1);
			}
	}
	
}
