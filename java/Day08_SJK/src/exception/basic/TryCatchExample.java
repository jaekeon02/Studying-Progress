package exception.basic;

public class TryCatchExample {
	
	public static void main(String[] args) {
	
		
		
		
		int n1 = 10;
		int n2= 0;
		
		
		
		System.out.println("나눗셈 시작!");
		
		
		
		
		try {//try블록 내에는 예외 발생가능성이 있는 코드를 작성
			int result = n1/n2;
			System.out.printf("%d / %d = %d\n",n1,n2,result);
		} catch (Exception e) {//Exception은 에러 클래스 그리고 예외가 발생한 것을 객체화하여 받아줄수 있는 변수 e
			//catch블록에는 try에서 예외가 발생했을 시 예외를 처리하는 출력문이나 동작을 지정
			System.out.println("0으로 나누지 마세요");
		}
		
		System.out.println("프로그램 정상 종료");
		
	}
	
	
	
	
	
}
