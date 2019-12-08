package poly.casting;

public class Child extends Parent {

	public int n2;

	@Override
	public void method2() {
		System.out.println("제정의된 2번 메서드 호출!");
	}
	
	public void method3() {
		System.out.println("3번 메서드 호출!");
	}
	
	
}
