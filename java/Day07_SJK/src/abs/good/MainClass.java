package abs.good;

public class MainClass {
	public static void main(String[] args) {
		
		
		
		//HeadStore h = new HeadStore(); //객체생성 불가(구체화 할 내용이 없기 때문)
		
		HeadStore s = new Store();
		
		s.orderApple();
		s.orderBanana();
		s.orderMelon();
		s.orderWaterMelon();
	}
}
