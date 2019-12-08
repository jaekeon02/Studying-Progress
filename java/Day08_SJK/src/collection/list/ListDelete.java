package collection.list;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ListDelete {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		List<String> pokemon = new ArrayList<>();
		pokemon.add("피카츄");
		pokemon.add("라이츄");
		pokemon.add("꼬북이");
		pokemon.add("버터플");
		pokemon.add("야도란");
		
		System.out.println("# 우리반 학생들의 별명 : " + pokemon);
		
		/*
			삭제할 별명을 입력받아서 해당별명이 리스트에 존재한다면 삭제를 진행해 주시고
			해당별명이 리스트에 존재하지 않는다면 "없는 별명입니다"라고 출력해주세요
		 */
		
		System.out.println("삭제할 별명을 입력하세요");
		
		try {
			String name = sc.next();
			if(pokemon.contains(name)) {
				pokemon.remove(name);
				System.out.println(pokemon);
				System.out.println(name+" 해당별명이 삭제되었습니다.");}
			else {
				System.out.println(name+ " 해당별명은 존재하지 않습니다.");}
		}
			catch (Exception e) {
			System.out.println("잘못된 입력입니다.");}
			finally {
				sc.close();}
		
		
		
		
		
		
		
		
		
		
	}
}
