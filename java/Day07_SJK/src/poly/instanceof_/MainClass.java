package poly.instanceof_;

public class MainClass {
	
	static void method1(Parent p) {//부모타입의 객체를 받은 메서드
		Child c = (Child) p;
		System.out.println("강제 형 변환 성공");
	}
	
	static void method2(Parent p) {
		if(p instanceof Child) {
			Child c = (Child) p;
			System.out.println("강제 형 변환 성공");
		}
		else {
		System.out.println("Child타입을 가질 수 없는 객체입니다.");
		}
	}
	
	public static void main(String[] args) {
		
		Parent p1 = new Child();//부모타입의 자식객체
		method1(p1);//호출가능
		
		Parent p2 = new Parent();//부모타입의 부모객체
		//method1(p2);//호출불가능 부모객체가 자식타입을 가질 수 없음
		
		
		method2(p1);//판별식을 통해 판단을 해서 넣음
		
		
		method2(p2);
		
	}
	
}
