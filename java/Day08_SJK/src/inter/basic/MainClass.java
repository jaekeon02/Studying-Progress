package inter.basic;

public class MainClass {
	
	public static void main(String[] args) {
		
		//인터페이스는 객체를 생성 할 수 없다.
		//inter i1 = new inter1();
		
		System.out.println("1인치는 "+inter1.inch);
		
		InterClass1 i1 = new InterClass1();
		i1.method1();
		i1.method2();
		
		//다형성을 적용시키려면 상속이 전제되어야 하지만 추가로 인터페이스 구현관계가 있는 경우에도
		//다형성 적용이 가능하다.
		//부모타입 = 자식객체 <-> 인터페이스타입 = 구현객체
		
		inter1 it1 = new InterClass1();
		it1.method1();
		((InterClass1)it1).method2();
		//연산순위때문에  괄호
		//연선자의 연산 우선 순위
		//괄호()>>참조(.)>>단항>>2항>>3항>>대입
		inter2 it2 = new InterClass1();
		
		inter1 it3 = new InterClass2();
		
		//inter2 it4 = new InterClass2();//관계가 없다면 다형성 구현 불가능
		//inter1 it4 = new InterClass3();
		
		inter2 it6 = new InterClass3();
		
		
		Inter[] inters = {it1,it2,it3,it6};
	}
}
