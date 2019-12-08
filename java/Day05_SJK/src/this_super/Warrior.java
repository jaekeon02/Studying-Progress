package this_super;
/*
	자식 클래스, 하위클래스(Child, Sub class)
	부모 클래스로부터 멤버변수와 메서드를 물려받는 클래스를 자식클래스라고 부릅니다
	
	상속을 적용시키려면 자식 클래스의 선언부의 클래스 이름뒤에 키워드 extends를 쓰고, 물려 받을 부모 클래스의 이름을 적어줍니다.
 */
public class Warrior extends Player {//아무것도 적지않아도 부모에 적혀있는 것을 그대로 사용할 수 있음
	int rage;
	
	/*void characterInfo() {
		System.out.println("# 분노 : "+ rage);  --> 메서드의 재정의(자식클래스에서 재정의가 되었다면 새롭게
																재정의된 메서드가 호출됨)
	}*/
	void characterInfo() {
		super.characterInfo();
		System.out.println("# 분노 : " + rage); //-> 재정의를 하되, 부모클래스의 메소드를 가져와 하나만 덧붙인것 
		
	}//이클립스 약자 alt shift s 누르고 override/implement method 오버라이딩 자동완성 지원
	
}
