
public class Identifier {
	
	public static void main(String[] args) {
	/*꼭 지켜야할 규칙(안지킬경우 에러 발생)
	  1. 식별자 이름은 중복을 허용하지 않음, 대신 대 소문자를 철저하게 구분
	 */
		
		int age = 30;
		int Age = 35;
		System.out.printf("%d,%d",age,Age);// 서로 다른 존재로 인식
		
		//2. 식별자 이름은 숫자로만 지정하거나 숫자로 시작하면 안됨
		 //int 700 = 365;
		int number6 = 6;//시작과 숫자로만 이뤄지지 않아있으면 숫자가 어디있든 변수 생성가능
		int num6ber = 6;
		
		//3. 식별자 이름에 공백을 포함 할 수 없음
		//int my birth day = 19951125; 
		int mybirthday = 19951125;
		int myBirthDay = 19951125;//자바의 관례 : 연결단어의 첫글자를 대문자로
		
		//4. 식별자 이름에 쓸 수 있는 특수문자는 밑줄(_), 달러기호($)뿐, 사용을 권장하지 않음
		String $hello_ = "안녕";//이미 사용하는 곳이 있기 때문에 사용하면 혼란을 야기할 수 있음
		
		//5. 키워드(예약어)는 식별자 이름으로 지정이 불가능합니다.
		//String class = "클래스"; -> class는 키워드로서 사용되고 있음
		// 키워드란 -> 이미 어떠한 기능을 내포하고 있음
		//ex) class는 class선언하는 기능을 가지고 있음 -> 키워드(예약어)
		
		//6. 한글이나 한자 같은 식별자 이름도 지정 가능하지만 사용을 권장하지않음
		int 숫자 = 10;
		String 名 = "홍길동";
		System.out.printf("\n%d, %s",숫자,名);
	}
}
