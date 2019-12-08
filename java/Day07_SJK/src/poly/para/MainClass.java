package poly.para;

public class MainClass {
	
	
	
	public static void main(String[] args) {
		
		Driver kim = new Driver();
		Car s = kim.buySonata();
		s.run();
		//s.enterMembership();//부모타입의 자식객체임으로 실행 불가능함
		Sonata c = (Sonata) s;//자식타입의 변수를 선언하여 다운캐스팅 실행, 접근방법을 바꿀때만 사용할 뿐
		c.enterMembership();
		s.run();//그대로 사용가능함
		s.run();
	
		

		
		
		System.out.println("----------------------------------------------------");
		CarShop shop = new CarShop();
		
		shop.carPrice(c);
		shop.carPrice(new K5());
		shop.carPrice(new Malibu());
		shop.carPrice(kim.buyCar("말리부"));
		
		
		
		
		
		
		
		
	}
}