package exception.basic;

public class finallyExample {

	
	
	public static void main(String[] args) {
		
		
		
		String[] pets = {"멍멍이","야옹이","짹짹이"};
		
		for(int i=0; i<4; i++) {
			try {
				System.out.println(pets[i]+" 키우고 싶다~");
			} catch (Exception e) {
				System.out.println("애완동물의 정보가 없습니다");
			}finally {//예외발생유무에 관련없이 실행됨, 객체를 반납할때 많이 쓰임
				System.out.println("아무튼 실행되는 문장입니다.");
				System.out.println("---------------------");
			}
			
		}
		
		
		
	}
	
	
	
}
