package poly.casting;

public class Main {
	
	public static void main(String[] args) {
		
		Parent p = new Parent();
		
		p.n1=1;//부모객체의 것
		//p.n2=1;//자식객체의 것이므로 쓸 수 없음
		
		p.method1();
		p.method2();
		
		//p.method3();//자식객체의것 쓸수 없음
		
		System.out.println("----------------------------------------------");
		
		Child c= new Child();
		
		c.n1=1;
		c.n2=1;
		
		c.method1();// 부모의 메서드가 호출
		c.method2();//재정의 된 메서드가 호출됨
		c.method3();// 자식의 메서드 3번호출
		
		System.out.println("---------------------------------------------");
		Parent p2 = new Child();//상속관계이기에 생성 가능(다형성)
		System.out.println(p2);
		p2.method1();
		p2.method2();
		//p2.method3();//호출 불가능
		//p2.ne=1;//호출 불가능
		//부모형으로 형변환되어 버렸기 때문에-> 즉 자식형에서 추가되거나 변형된거는 반영되지 않음
		
		/*
			promotion(다형성)이 적용되면 자식클래스의 본래의 멤버(필드,메서드)를 참조할 수 없는 문제가 생깁니다
			
			- 이 문제를 해결하기위해 강제 타입변환(DownCasting)을 사용합니다.
			
		 */
		
		System.out.println("--------------------------------------------------");
		
		Child c2=(Child) p2;// 자식 자식 = 자식 부모
		//p2에 대한 정보는 변형되거나 삭제되지 않음 그저 다운캐스팅으로 쓴것일뿐
		c2.n2 = 4;
		c2.method3();
		
		System.out.println("c2 "+c2);
		System.out.println("p2 "+p2);
		//같은 객체를 가르키고 있지만 타입만 다른 것일뿐
		//즉 p2는 부모형 c2는 자식것으로 계속 번갈아가면서 사용하는 것일뿐
		
		/*
			한번 promotion(다형성)이 일어난 객체만 대상으로 강제 타입변환을 사용할 수 있습니다.
		 */
		
		//Child c3 =(Child) p;//불가능(문법상으론 문제가 없지만 실행불가능)
		//p는 애초에 부모타입의 부모객체이기때문에 promotion이 일어나지 않았기에 실행 할 수없다.
		
		
		Object o = new Parent();
		//o.method1();// 자식의 메서드를 사용하지 못함
		Parent pp = (Parent) o;
		pp.method1();
		
		
		//객체는 하나(주소값이 같음) 하지만 접근방법을 2가지로 늘린것
		
		
		
		
		
		
		
		
		
		
	}
}
