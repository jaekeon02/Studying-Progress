package poly.player;

/*
	부모 클래스, 상위클래스(parent, super class)
	- 데이터를 다른 클래스에게 상속하는 클래스를 부모 클래스라고 부릅니다
	- 상속을 사용하면 데이터를 물려받는 클래스에게 부모 클래스의 멤버변수와 메서드가 상속됩니다
		단, 생성자는 상속되지 않습니다.
 */
public class Player {
	String name;
	int level;
	int atk;
	int hp;
	
	
	Player(){
		level =1;
		atk = 5;
		hp=50;
	}
	
	Player(String name){
		this.level =1;//원래는 this가 붙어있으나 생략되어있는 형태
		atk=5;
		hp=50;
		//name=name; 변수이름이 같기때문에 지역변수로 인식함 즉 받아오질 못함
		this.name = name;
		// this는 괄호안의 것을 같은 이름을가진 지역변수로 대입하게함
	}
	
	void characterInfo() {
		System.out.println("*** 캐릭터의 정보 ***");
		System.out.println("# 아이디 :" + name);
		System.out.println("# 레벨 : "+ level);
		System.out.println("# 공격력 : "+ atk);
		System.out.println("# 체력 : "+ hp);
		System.out.println("이 메서드를 부른 객체의 이름 :"+ this);
	}
		
	Player[] targets= {w1,w2,m2,h1,h2};
	
	m1.blzzard
	
}
