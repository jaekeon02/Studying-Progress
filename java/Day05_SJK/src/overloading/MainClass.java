package overloading;

public class MainClass {
	
	
	public static void main(String[] args) {
	
		/*
			Calculator 클래스에 calcRectArea()메서드를 선언하여, 길이를 하나만 전달하면 정사각형의 넓이를 리턴,
			길이를 두개 전달하면 직사각형의 넓이를 리턴하도록 오버로딩을 사용하여 메서드를 선언하세요
		 */
		Calculator a1 = new Calculator();
		int rec1=a1.inputlength(5);
		
		Calculator a2 = new Calculator();
		int rec2=a2.inputlength(4, 5);
		
		
		
		
		
		
		
		
		
	}
	
	
}
