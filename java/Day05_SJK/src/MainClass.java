
public class MainClass {

	
	public static void main(String[] args) {
		Bread ChocolateCake = new Bread("초코케이크",1500);
		ChocolateCake.showspec();
		
		Bread basic = new Bread();
		basic.showspec();
		
		Bread Pizza = new Bread("피자빵",500);
		Pizza.showspec();
	}
	
	
}
