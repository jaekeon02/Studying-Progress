package static_method;

public class MainClass {
	
	public static void main(String[] args) {
		Count c1 = new Count();//인스턴스 메서드이기 때문에 객체를 생성해야 함
		c1.method1();
		
		Count.method2();//정적 메소드이기때문에 객체생성없이도 부를수 있음
		
		//정적은 모든 값을 공유해도 상관없을때, 인스턴스는 각각의 값을 가져야 할때
	}
}
