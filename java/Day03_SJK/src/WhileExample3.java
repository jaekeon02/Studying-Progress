import java.util.Scanner;

public class WhileExample3 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("정수를 입력하세요 : ");
		int num = sc.nextInt();
		
		int i =2;
		int count = 0;
		
		while(i<=num) {
			if(num%i==0) {
				count++;
			}
			i++;
			
		}
		
		if(count==1)
		{System.out.println(num+ "입력값은 소수입니다");}
		else
		{System.out.println(num+"입력값은 소수가 아닙니다");}
		
		sc.close();
	}
}
