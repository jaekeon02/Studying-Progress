package static_field;

public class MainClass {
	
	public static void main(String[] args) {
	
		Count c1 = new Count();
		//멤버변수 초기값이 없을 경우 초기값(0)으로 지정
		c1.a +=5;
		c1.b +=5;
		
		System.out.println("인스턴스 c1.a: " +c1.a);
		System.out.println("정적 c1.b: " +c1.b);
				
		System.out.println("---------------------------------------------");
		Count c2 = new Count();
		
		c2.a+=7;
		c2.b+=7;
		
		System.out.println("인스턴스 c2.a: " +c2.a);
		System.out.println("정적 c2.b: " +c2.b);
		//노란줄이 생기는 이유 static이 생기는 공간은 주소와 상관없이 생김(객체생성 필요하지 않음)
		
		System.out.println("---------------------------------------------");
		
		Count c3 = new Count();
		
		c3.a+=8;
		c3.b+=8;
		
		System.out.println("인스턴스 c2.a: " +c3.a);
		System.out.println("정적 c2.b: " +c3.b);
		System.out.println("정적 변수 c1.b : " + c1.b);
		//정적(스태틱)은 모든값이 값을 공유함 -> 객체와는 무관
		
		
		/*
			static이 붙은 데이터는 클래스 이름으로 바로 참조 할 수 있습니다(객체생성 불필요)
		 */
		
		Count.b+=200;
		System.out.println("정적 c2.b: " +c3.b);
		System.out.println("정적 변수 c1.b : " + c1.b);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
}
