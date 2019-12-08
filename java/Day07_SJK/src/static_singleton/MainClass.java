package static_singleton;

public class MainClass {
	
	
	public static void main(String[] args) {
	
		
		
		//Singleton s1 = new Singleton(); // private으로 막혀있음
		
		Singleton s1 = Singleton.getInstance();
		Singleton s2 = Singleton.getInstance();
		Singleton s3 = Singleton.getInstance();
		Singleton s4 = Singleton.getInstance();
		
		s1.method1();
		s1.method2();
		
		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s3);
		System.out.println(s4);//객체는 하나만 생성 -> 주소값이 다 동일함
	}
	
	
	
}
