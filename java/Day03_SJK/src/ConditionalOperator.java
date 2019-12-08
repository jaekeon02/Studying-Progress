
public class ConditionalOperator {

	public static void main(String[] args) {
		/* 3항 연산자
		 	피 연산자(연산을 당하는 값)가 3개인 연산자
		 	(조건식 ? 좌항 : 우항)
		 	논리형 조건식을 비교하여 참일때 좌항, 거짓일때 우항의 결과값이 도출
		 */
		
		System.out.println((5==4 ? "참입니다." : "거짓이에요."));
		System.out.printf((5==4 ? "참입니다." : "거짓이에요.\n"));
		
		String result = (5==4 ? "참입니다." : "거짓이에요.");
		
		/*
		 # 난수값을 발생시키는 메서드 Math.random()
		 - 0.0이상 1.0미만의 실수 난수를 반환 (double)
		 */
		//double rn = Math.random();
		//System.out.println(rn);
		
		//1~10까지의 정수 난수를 발생시키고 싶어요
		
		int rn = (int)((Math.random()*10)+1);
		System.out.println(rn);
		
		int rn2 = (int)((Math.random()*91)+10);
		System.out.println(rn2);
		
		//23~142
		int rn3 = (int)((Math.random()*120)+23);
		System.out.println(rn3);
		
		//앞자리에 맞춰서 곱하기는 지정수 미만임으로 지정수 +1 - 자리수
	}
}
