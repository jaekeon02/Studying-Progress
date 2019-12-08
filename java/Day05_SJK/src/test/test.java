package test;

import car.sedan.Sonata;

/*import fruit.Apple; //각각 호출 할수 있지만 모두 호출할 수 도 있다.
import fruit.Banana;
import fruit.Melon;
*/

import fruit.*; //fruit 패키지의 모든 클래스를 import시킴
import juice.*; // Apple에 에러발생 -> 둘다 존재하기 때문
public class test {
	
	public static void main(String[] args) {
		
		//Apple a1 = new Apple();//Apple에 대한 정보가 없음 -> import를 써야됨(Scanner와 비슷)
		/*
			서로 다른 패키지 내의 같은 이름의 클래스 객체를 생성할때는 반드시 패키지 경로를 지정해주셔야 합니다
		 */
		juice.Apple a1 = new juice.Apple();
		fruit.Apple a2 = new fruit.Apple();
		Banana b1 = new Banana();
		Melon m1 = new Melon();
		
		Sonata c1 = new Sonata();
		
	}
}
