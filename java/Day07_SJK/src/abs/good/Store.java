package abs.good;

public class Store extends HeadStore {

	@Override
	public void orderApple() {
		System.out.println("사과 쥬스의 가격은 3200원입니다");
		
	}

	@Override//하나라도 빠지면 에러발생 반드시 실체화 시켜줘야함
	public void orderBanana() {
		System.out.println("바나나 쥬스의 가격은 3500원입니다");
		
	}

	@Override
	public void orderMelon() {
		System.out.println("멜론 쥬스의 가격은 3000원입니다");
		
	}

}
