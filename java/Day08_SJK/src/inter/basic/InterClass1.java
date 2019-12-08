package inter.basic;

public class InterClass1 implements inter1,inter2 {

	
	
	/*
		1. 인터페이스에 명세된 기능들을 사용하기 위해서는 클래스에서 해당 인터페이스를 구현시켜야 합니다.
		
		2. 인터페이스를 구현하는 키워드는 implements입니다.
		
		3. 인터페이스는 상속과 달리 여러개의 인터페이스들을 동시에 다중 구현할 수 있습니다.
		
		4. 클래스와 인터페이스의 관계는 구현관계, 인터페이스들끼리 서로 상속 가능하며, 이경우에는 다중상속도 가능하다.
		
		5. 인터페이스를 구현할때 인터페이스내부에 선언된 추상 메서드들을 반드시 전부 오버라이딩해야합니다.
	 */
	
	@Override
	public void method1() {
		System.out.println("인터페이스 1의 메서드 구현");
		
	}

	@Override
	public void method2() {
		System.out.println("인터페이스2의 메서드 구현");
		
	}
	
	
}
