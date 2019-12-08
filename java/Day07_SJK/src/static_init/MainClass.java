package static_init;

public class MainClass {
	
	public static void main(String[] args) {
	
		
		
		/*LapTop l1 = new LapTop();
		System.out.println("노트북의 정보 : "+l1.info);//정적임으로 굳이 객체 부를 필요가 없음
		*/
		System.out.println("노트북의 정보 : "+LapTop.info);//하지만 생성자 안에서 객체를 이용하고 있기 때문에 null호출됨
		//그렇기에 정적초기화자를 사용하여 초기화 해야함
		
		/*
			정적 초기화자를 호출하려면 클래스를 로딩하여야 합니다.
			
			클래스 로딩방법
			1. 클래스 이름을 참조하여 정적 멤버를 호출
			2. 객체를 생성함
			 - 정적 초기화자는 클래스 로딩시 최초 1회만 호출 됩니다. 
		 */
		
		LapTop l1 = new LapTop();
		LapTop l2 = new LapTop();
		LapTop l3 = new LapTop();
		LapTop l4 = new LapTop();//객체를 생성해도 정적초기화자는 한번만 호출됨
		
	}
}
