package bean;

import java.io.FileWriter;
import java.io.IOException;

public class httptest {
	//�ܺ��ڿ� �����Ҷ��� ���� ó���� ���־���Ѵ�
	public static void main(String[] args) {
		try {
			FileWriter file = new FileWriter("http.txt");
			file.write("http://www.naver.com\n");
			file.write("\n");
			file.write("�ڵ���");
			file.close();
		} catch (IOException e) {
			System.out.println("���� �߻�!! ���� �߻�!!");
		}
	}
	
}
