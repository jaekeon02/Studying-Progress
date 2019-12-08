package exception.throws_;

public class ThrowsExample {
	
	
	public static String[] greetings = {"안녕","헬로","니하오"};
	
	
	public static void greet(int idx) throws Exception{//예외가 발생하면 던짐 호출한곳으로
		System.out.println(greetings[idx]);
	}
	
	/*
		- 예외의 원인이 메서드 선언부가 아니라 호출부에 있을 경우 예외처리를 메서드 호출부로
			떠 넘기는 방식을 throws라고 합니다
		- 메서드나 생성자 호출시 예외처리를 강요하는데 사용합니다
		- throws가 붙은 생성자나 메서드를 호출할 때는 반드시 try블록을 사용하며 예외처리를 해야합니다.
		- 예외가능성이 있는것을 몰아서 처리하기 위해서도 사용
	 */
	
	public static void main(String[] args) /*throws Exception*/  {//메인에서 던지면 JVM으로 던짐 -> 예외처리를 안하겠다는 의미
		
		try {
			greet(3);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			/*
				printStackTrace메서드는 예외발생 경로를 추적하여 예외 원인 메세지와 예외가 발생한
				코드의 위치를알려줍니다.
				
				주로 개발과정에서 예외의 원인을 찾을 때 유용하기 때문에 자주 사용합니다.
			 */
		}
	}
	
	
	
	
	
	}
