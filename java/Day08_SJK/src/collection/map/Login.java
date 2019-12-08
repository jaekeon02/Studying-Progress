package collection.map;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Login {
	
	
	public static void main(String[] args) {
		
		Map<String, String> users = new HashMap<>();
		
		//key : userID, value : user PW
		
		users.put("kim1234", "kkk1234");
		users.put("lee5678", "lll5678");
		users.put("park4321", "ppp4321");
		
		Scanner sc = new Scanner(System.in);
		
		while(true) {
			System.out.println("=========================");
			System.out.println("ID : ");
			String id = sc.next();
			if(users.containsKey(id)) {
				System.out.println("PW : ");
				String pw = sc.next();
				if(pw.equals(users.get(id))) {
					System.out.println("로그인 성공!");
				}else {
					System.out.println("비밀번호가 틀렸습니다.");
				}
			}else {
				System.out.println("아이디가 존재하지 않습니다.");
			}
		}
		
		
		
		
		
		
		
		
		
	}
	
	
}
