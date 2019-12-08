package final_.field;

public class MainClass {
	
	public static void main(String[] args) {
		Person kim = new Person("김철수");
		System.out.println(kim.name);
		
		//kim.nation="미국";//final로 확정되어 있는 값이기 때문에 미국으로 바꿀 수 있음
		//kim.name="김마이클"
		kim.age=30;
	}
}
