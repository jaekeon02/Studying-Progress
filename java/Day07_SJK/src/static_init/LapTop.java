package static_init;

public class LapTop {
	
	static String company = "LG";
	static String model = "Gram";
	static String info;
	int price;

	//정적 변수를 자동으로 초기화 하려면 정적 초기화자를 사용합니다.
	
	static {
		System.out.println("정적 초기화자가 호출됨");
		info = company + "-" + model;
		//price = 10000000; non-static이기 때문에 부를 수 없음
	}
	
	public LapTop() {
		System.out.println("생성자가 호출됨!");
		price = 10000000;
		info = company + "-" + model;
	}
}
