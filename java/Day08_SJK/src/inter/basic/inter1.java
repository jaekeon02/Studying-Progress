package inter.basic;

public interface inter1 {
	
	//인터페이스는 변수를 선언하면 자동으로 상수 취급(static final을 붙일 필요가 없음)
	double inch = 2.54;
	//선언된 수는 상수취급되어 스태틱영역에 저장되고 인터페이스에선 아무 것도 저장하지 않음
	
	//인터페이스에서 메서드를 선언하면 자동으로 추상메서드 취급
	void method1();
	
	/*
	 public inter1() {
	  
	 }//인터페이스는 객체를 만들 수 없는 추상적인 개념, 틀 -> 객체생성 불가
	 */
	

}
