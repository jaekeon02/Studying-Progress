package static_method;

public class Count {
	
	public int a;//인스턴스 변수
	public static int b;//정적 변수
	
	
	//인스턴스 메서드 : 인스턴스메서드 안에서는 정적(static)변수와 인스턴스 변수를 모두 참조할 수 있습니다.
	public int method1() {
		return this.a +this.b;
	}
	/*
		정적 메서드
		static 블록(메서드, 정적초기화자) 내부에서는 static이 붙은 변수나 메서드만 참조 할 수 있습니다
		static블록 내부에서 non-static멤버를 참조하려면반드시 객체를 통해 참조해야합니다.
		왜냐하면 객체가 없이도 부를수 있어야 하기 때문에
	 */
	/*public static int method2() {//정적임으로 객체값을 생성을 하지 않음
		return this.a +this.b; //정적(static)안에서는 this(주소를 확인하기 때문에)를 쓰지 못함
								// 멤버변수는 특정조건하에서 사용할 수있음(안에서 생성)
	}*/
	
	public static int method2() {
		Count ccc = new Count();//한정적으로 밖에 쓸수 없음 -> 여기서만 사용가능
		return ccc.a + b;
	}
	
}
