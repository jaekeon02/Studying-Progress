package final_method;

public class Child extends Parent {
	/*
		final클래스는 자식 클래스를 가질 수 없고, 오직 외부에서 객체생성을 통해서만 사용할 수 있습니다.
		
		상속을 받아 메서드를 재 정의하는 등 클래스의 확장을 막기위해 클래스에 final을 붙입니다
		대표적인 예) String(extends로 상속하려고 해도 상속이 불가능)
		
	 */
	@Override
	public void method1() {
		// TODO Auto-generated method stub
		super.method1();
	}

	@Override
	public void method2() {
		// TODO Auto-generated method stub
		super.method2();
	}

	/*
	 * public void method3() {//final로 정의 되어 있기 때문에 수정할 수 없음
	 * System.out.println("메서드 재정의"); }
	   final 메서드는 오버라이딩을 제한합니다. */ 
	
	
	
	
	
}
