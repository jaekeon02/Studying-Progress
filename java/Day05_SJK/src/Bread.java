
public class Bread {
	String breadname;
	int price;
	
	Bread(){
		System.out.println("1번 생성자 호출");
		breadname = "야채고로케";
		price = 2000;
	}
	
	Bread(String BName,int BPrice){
		breadname=BName;
		price=BPrice;
	}
	
	void showspec() {
		System.out.println("빵이름 : " + breadname);
		System.out.println("빵가격 : " + price);
		System.out.println("");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
