package Inherit.good;

public class Main {
	
	
	public static void main(String[] args) {
		
		Warrior w1 = new Warrior();
		w1.name="전사1";
		w1.level= 1;
		w1.atk=6;
		w1.hp = 50;
		w1.rage=10;
		w1.characterInfo();
		
		Hunter h1 = new Hunter();
		h1.name="사냥꾼1";
		h1.level= 5;
		h1.atk=10;
		h1.hp = 30;
		h1.pet="길냥이";
		h1.characterInfo();
		
		Magician m1 = new Magician();
		m1.name="법사1";
		m1.level= 3;
		m1.atk=3;
		m1.hp = 20;
		m1.mana=30;
		m1.characterInfo();
	}
	
	
}
