
public class PhoneMain {
	
	
	public static void main(String[] args) {
	
		/*
		Phone basic = new Phone();
		basic.model = "핸드폰";
		basic.color = "회색";
		basic.price = 200000;
		basic.showSpec();
		*/
		Phone basic = new Phone();//생성자를 호출하기위한 호출
		basic.showSpec();
		
		Phone galaxyNote10 = new Phone();//생성자는 중복선언 가능
		galaxyNote10.showSpec();
		
		Phone galaxyFolder = new Phone("갤럭시 폴더");//생성자는 중복선언 가능
		galaxyFolder.showSpec();
		
		Phone iPhone11=new Phone("아이폰 11","화이트");
		iPhone11.showSpec();
	}
	
	
	
}
