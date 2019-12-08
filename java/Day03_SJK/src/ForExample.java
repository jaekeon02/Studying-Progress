
public class ForExample {
	public static void main(String[] args) {
		//1부터 10까지의 누적합을 구하는 로직
		
		int total = 0;
		int n =1;
		
		while(n<=10) {
			total+=n;
			n++;
		}
	int result = 0;
		
	for(int i=0; i<=10; i++ )
	{
		result += i;
	}
	
//48~150사이의 정수중 8의 배수를 가로로 출력해보세요
	for(int num=48; num<=150; num+=8) {
		System.out.printf("%d ",num);
	}
	System.out.println();
		//1~30000까지의 정수중 258의 배수의 갯수를 구하여 출럭
	int count=0;
	for(int num1=1; num1<=30000; num1++) {
		if(num1%258==0) {
			count++;
		}
	}
	System.out.printf("%d",count);
	
	
	
	
	
	
	}
}
