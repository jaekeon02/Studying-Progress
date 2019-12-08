package poly.basic;

/*
	자바에서는 하나의 클래스 파일안에 여러 클래스들을 선언할 수 있습니다
	단, 파일명과 동일한 이름을 가진 클래스가 반드시 존재해야 하며, 해당 클래스만 public클래스로
	선언 해야 합니다.
 */
class A{}
class B extends A{}
class C extends A{}
class D extends B{}
class E extends C{}
// 부모 자식간 관계에서 자식은 부모의 것을 모두 취해올수 있지만 부모는 자식의 것을 취할 수 없다
// 즉 , 일방적 관계이기에 B와 C, D와E는 아무런 관련이 없고, 다중상속(부모가 여러명)이 불가능하다
// 생략되어 있지만 A는 Object를 상속하고 있는 상태
public class Basic {

	
	A a = new A();
	B b = new B();
	C c = new C();
	D d = new D();
	E e = new E(); 
	/*
		다형성이란 자식 객체가 모든 부모타입을 가질 수 있는 특성을 의미합니다
		즉, 부모 타입변수에 자식 객체의 주소값이 언제든지 저장될 수 있다는 것입니다.
	 */
	
	A x1 = new B(); //부모타입 = new 자식객체
	//상위 데이터 타입 값에 하위 데이터값이 자동으로 들어감(형변화와 비슷)
	// 클래스 타입 B - > A로 자동 형변환(promotion)
	
	A x2 = new C();
	A x3 = new D();
	A x4 = new E();
	A x5 = b;
	
	B x6 = new D();// B와 D는 부모 자식 관계
	C x7 = new E();// C와 E는 부모 자식 관계
	
	//상속 관계가 없다면 다형성 적용이 불가능합니다
	// 즉, 다형성은 무조건 상속관계라는 전제하에서만 발생합니다
	
	//B x8 = new E();//관계가 없기 때문에 발생하지 않음
	//C x9 = new D();//관계가 없기 때문에 발생하지 않음
	//B x10 = new C();//관계가 없기 때문에 발생하지 않음(형제관계같은 것 없음 오직 부모 자식)
	
	//Object는 자바의 최상위 타입입니다. 모든 클래스는 Object를 상속받습니다.
	
	Object o1 = new A();
	Object o2 = new B();
	Object o3 = new C();
	Object o4 = new D();
	Object o5 = new E();
	Object o6 = new String("안녕하세요~");
	Object o7 = new Basic(); 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
