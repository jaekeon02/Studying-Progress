
public class VariableExample {
	public static void main(String[] args) {
		
		/*
		 # 변수(variable)
		 1. 변수란 데이터가 저장되는 공간에 이름을 붙여놓은 것입니다.
		 2. 변수를 생성할 때는 변수에 저장되는 데이터의 크기와 모양에 따라 적당한 데이터 타입을 설정해야합니다.
		 ex) int : 4byte의 정수, String : 문자열(문장)
		 3. 변수는 동일한 이름으로 중복해서 선언할 수 없습니다.
		 하나의 변수에는 단 하나의 데이터만 저장이 가능합니다.
		 4. 변수 내부의 값은 언제든지 변경이 가능합니다.
		 */
		
		//변수의 선언 : [자료형] [변수이름];
		int score;
		//변수의 초기화 : [변수이름] = [값];
		score = 90;
		// 영역명 [대입연산자 = ] 값
		System.out.println(score);
		
		int num = 2;
		//int num = 4; 중복해서 선언 불가능
		num = 4;//값을 다시 대입가능(재초기화) 자료형은 쓰지 않음!! -> 가장 나중값 출력
		System.out.println(num);
		
		//변수에는 다른 변수의 값도 저장할 수 있다.
		int doublescore = score*2;
		System.out.println(doublescore);

		//변수의 자료형에 맞지않는 데이터는 저장이 불가능 합니다.
		//int age = 23.53; -> 정수형 데이터 선언을 했기에 실수형 값을 넣을 수 없다
		String name = "홍길동"; //문자형 변수명 = "문자열"
		System.out.println(name);
		
		//변수는 자료형이 달라도 동일한 이름으로 중복 선언 할 수 없습니다.
		//int name = 572; 이미 사용중이므로 선언 불가
		
		//선언 및 초기화 되지 않은 변수는 참조할 수 없습니다.
		//int result = score + number; -> number에 값이 없음
		//System.out.println(result); result 선언 이 안되있기에 실행 불가
	}
}
