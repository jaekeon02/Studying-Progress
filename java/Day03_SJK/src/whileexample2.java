
public class whileexample2 {

	public static void main(String[] args) {
		//48~150사이의 정수 중에 8의 배수 가로로 출력하기
		int n = 48;
		
		while(n<=150) {
			
			if(n%8==0) {
				System.out.printf("%d ",n);}
			
			n++;
		}
		System.out.println();//단술 줄 개행
		
		int m=48;
		while(m<=150) {
		System.out.printf("%d ",m);
		m+=8;
		}
		
		System.out.println();
		
		//13~200까지 정수중에 4의 배수이면서 8의배수는 아닌 수만 가로로 출력
		int j = 13;
		while(j<=200) {
			if(j%4==0 && j%8!=0) {
			System.out.printf("%d ",j);
			}
			j+=1;
		}
		System.out.println();
		
		//1~20000까지의 정수중 248의 배수의 갯수를 출력
		int num1=1;
		int count=0;
		while(num1<=20000)
		{
			if(num1%248==0)
				{count+=1;}
			num1++;
		}
		
		System.out.printf("%d",count);
		
		
		
	}
}
