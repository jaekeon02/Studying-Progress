package final_.field;

public class Person {
	
	public final String nation="대한민국";//초기화 값이 없기때문에(불변값으로 지정할 값이 없기때문에) 초기화를 해줘야함
	public final String name;//생성자를 통해 초기화도 가능
	public int age;
	
	public Person(String name) {
		this.name = name;
	}
	
	
	
}
