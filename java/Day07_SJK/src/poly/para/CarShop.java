package poly.para;

public class CarShop {
	
	public void carPrice(Car c) {//모두 Car타입으로 들어오기에 들어오는것을 판단해야함(instanceof)이용)
		if(c instanceof Sonata) {
			System.out.println("소나타의 가격은 2800만원 입니다.");
		}
		else if(c instanceof K5) {
			System.out.println("K5의 가격은 2600만원 입니다.");
		}
		else if(c instanceof Malibu) {
			System.out.println("말리부의 가격은 3000만원 입니다.");
		}
		
	}
}
