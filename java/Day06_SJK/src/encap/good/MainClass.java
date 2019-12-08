package encap.good;

public class MainClass {
	
	public static void main(String[] args) {
		
		MyBirth my = new MyBirth();
		
		//my.year = 1992;(x)직접 접근 불가
		//my.setDay(156165);//값을 잘못넣으면 검증을 통해 오류값을 출력
		my.setDay(30);
		my.setMonth(3);
		my.setYear(1992);
		System.out.printf("내 생일은%d년 %d월 %d일입니다.",my.getYear(),my.getMonth(),my.getDay("abc1234"));
		
		
	}
}
