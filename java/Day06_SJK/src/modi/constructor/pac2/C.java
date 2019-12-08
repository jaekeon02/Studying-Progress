
package modi.constructor.pac2;
import modi.constructor.pac1.*;

public class C {
	
	A a1 = new A(true);//public임으로 접근 가능
	/*
	A a2 = new A(33);// package friendly라 패키지가 달라지면 불가능
	A a3 = new A(3.14);//private임으로 불가능
	*/
}
