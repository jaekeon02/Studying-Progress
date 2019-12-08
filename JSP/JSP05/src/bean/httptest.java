package bean;

import java.io.FileWriter;
import java.io.IOException;

public class httptest {
	//외부자원 연결할때는 예외 처리를 해주어야한다
	public static void main(String[] args) {
		try {
			FileWriter file = new FileWriter("http.txt");
			file.write("http://www.naver.com\n");
			file.write("\n");
			file.write("자동차");
			file.close();
		} catch (IOException e) {
			System.out.println("에러 발생!! 에러 발생!!");
		}
	}
	
}
