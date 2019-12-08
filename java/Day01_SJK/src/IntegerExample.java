
public class IntegerExample {
	
	public static void main(String[] args) {
	
		byte a = 127;
		short b = 32767;
		int c = 2147483647;
		//위의 숫자들은 최대 범위까지 하나만 커지더라도 out of range가 뜸
		//long d = 2147483648; long자체는 범위가 크지만 자바의 기본이 int형이기 때문에 넣지 못함
		// -> 즉 2147483648(리터럴)자체의 타입이 정수형으로 선언되어 있는 상태 -> 즉 넣을 수 없음
		
		long d = 2147483648L;//그렇기에 그 자체에  롱타입으로 선언해야 넣을 수 있음
							//,소문자로 넣어도 되지만 1과 구별을 위해 대문자로 표현
	}
}
