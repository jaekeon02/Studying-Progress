package overloading;

public class Calculator {
	/*
		오버로딩 : 하나의 클래스 내부에서 같은 이름을 가진 메서드나 생성자를 여러개 선언할 수 있게 해주는 문법
		
		
		- 오버로딩 적용 조건
		1. 매개변수의 데이터 타입이 다를것 or 
		2. 매개변수의 전달 순서가 다를것or
		3. 매개 변수의 갯수가 다를것 or 3중 하나만 만족해도 됨
	 */
	
	void inputData(int a) {
		System.out.println("정수 1개가 전달됨!");
	}
	
	void inputData() {//매개변수 갯수가 다르므로 중복선언 가능
		System.out.println("정수 2개가 전달됨!");
	}
	
	void inputData(String s) {//매개변수 타입이 다르므로 중복선언 가능
		System.out.println("문자열 1개가 전달됨!");
	}
	
	void inputData(int a, double b) {//타입과 갯수가 다름
		System.out.println("정수와 실수가 전달됨!");
	}
	
	void inputData(double b,int a) {//순서가 다름
		System.out.println("정수와 실수가 전달됨!");
	}
	/*
	void inputData(int number) {
		System.out.println("정수 1개가 전달됨!"); 매개변수 이름이 다르더라도 같은 형식이 있기에 중복선언불가능
	}*/
	
	
	/*int inputData(int a) { --> 리턴값이나 데이터 타입은 중복선언에 영향못미침 -> 구분이 불가능함
		return 0;
	}*/
	
	int inputlength(int a) {
		System.out.printf("%d의 길이를 가진 정사각형의 넓이 %d\n",a,a*a);
		return a*a;
	}
	
	int inputlength(int a, int b) {
		System.out.printf("%d와 %d의 길이의 변을 가진 직사각형의 넓이 %d\n",a,b,a*b);
		return a*b;
	}
	
}
