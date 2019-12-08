package obj_array;

import java.util.Scanner;

public class ArrayInsert {
	
	public static void main(String[] args) {
		
		int count = 0;
		Scanner sc = new Scanner(System.in);
		person[] people = new person[3];
		
		while(count<3) {
		System.out.println("*** 회원 정보 입력 ***");
		System.out.println("이름을 입력하세요");
		String name = sc.next();
		System.out.println("나이를 입력하세요");
		int year = sc.nextInt();
		System.out.println("성별을 입력하세요");
		String gender = sc.next();
		
		people[count]= new person(name,year,gender);
		count++;
		}
		
		System.out.println("# 정보 입력 성공");
		for(person p : people) {
			p.personInfo();
		}
	}
}
