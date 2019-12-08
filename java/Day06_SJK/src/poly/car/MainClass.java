package poly.car;

public class MainClass {
	
	public static void main(String[] args) {
		
		Sonata s1 = new Sonata();
		Sonata s2 = new Sonata();
		Sonata s3 = new Sonata();
		
		K5 k1 = new K5();
		K5 k2 = new K5();
		K5 k3 = new K5();
		
		Malibu m1 = new Malibu();
		Malibu m2 = new Malibu();
		Malibu m3 = new Malibu();
		Malibu m4 = new Malibu();
		
		//s1.run();s2.run();...... //너무 길어짐
		
		/*Sonata[] sonatas = {s1,s2,s3}; //이렇게 하면 편해지긴 하지만 다른타입을 불러오지 못함
		for(Sonata s : sonatas) {
			s.run();}*/
		//위의 상황에서 사용하는것이 다형성
		
		Car[] cars = {s1,s2,s3,k1,k2,k3,m1,m2,m3,m4};//타입이 다르더라도 부모의 타입으로 형변환이됨
		for(Car c: cars) { c.run();}
		
		System.out.println("----------------------------------------------------");
		
		System.out.println("타이어 교체 작업!!!!");
		
		s1.frontLeft = new Ntire();//타입을 규격화를 시켜놓으면 어떤 개체든 들어갈수 있음
		s1.frontRight = new Ntire();
		s1.rearLeft = new Htire();
		s1.rearRight = new Htire();
		
		System.out.println("----------------------------------------------------");
		
		Driver kim = new Driver();
		kim.drive(s1);
		//kim.drive(k1); 소나타 타입 을 보내야되는데 k5가 들어와서 작동불가 수정 필요
		kim.drive(k2);
		kim.drive(m3);
		
		
		
		
		
		
		
		
		
		
		
	}
}
