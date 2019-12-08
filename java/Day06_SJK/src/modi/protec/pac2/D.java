package modi.protec.pac2;

import modi.protec.pac1.A;

public class D extends A {
	
	public D() {
		// TODO Auto-generated constructor stub
		
				// A a1= newA(30); //protec (x)
		
		/*
			protected제한자는 패키지가 다른경우 두 클래스 사이에 상속관계가 있다면 super키워드를 통해
			참조를 허용합니다.
		 */
		super(30);
		super.x=1;//protected -> super로 상속함
		//super.y=2; package friendly
		super.method1();// protected
		//super.method2(); // package friendly로 사용 불가
		
		//상속을 해야하는 경우만 상속할 수 있게 만드는것이 protected
	}
	
}
