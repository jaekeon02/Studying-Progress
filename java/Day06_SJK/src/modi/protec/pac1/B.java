package modi.protec.pac1;

public class B {//protected 와 PF둘다 허용 ->같은 패키지이기 때문에
	A a1= new A(30);//protected
	A a2= new A(3.15);// package friendly
	
	
	public B() {
		a1.x = 1;//protected
		a2.y = 2;//package friendly
		
		a1.method1();
		a1.method2();
	}
}
