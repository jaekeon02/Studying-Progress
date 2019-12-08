package obj_array;

import java.lang.reflect.Array;
import java.util.Arrays;

public class ArrayTest {
	
	public static void main(String[] args) {
		
		/*
		  person kim = new person("김철수",32,"남"); 
		  person choi = new person("최영희",25,"여");
		  person park = new person("박길동",45,"남");
		  
		  kim.personInfo(); 
		  choi.personInfo(); 
		  park.personInfo();
		 */
		
		
		//int[] arr = new int[5]; -> 이것을 응용해서 person클래스(정확히는 주소)의 집합을 만드는 것
		/*
		 person[] people = new person[3]; 
		 people[0] = new person("김철수",32,"남");
		 people[1] = new person("최영희",25,"여"); 
		 people[2] = new person("박길동",45,"남");
		 */
		
		
		//int[] arr= {1,3,5,7,9};
		person[] people = {
				new person("김철수",32,"남"),
				new person("최영희",25,"여"),
				new person("박길동",45,"남")
		};
		
		System.out.println(Arrays.toString(people));//주소값 출력
		
		/*for(int i=0; i<people.length;i++) {//반복문을 통해 배열안을 출력
			people[i].personInfo();
		}*/
		
		for(person p : people){//향상된 for문을 이용해 전부 출력
			p.personInfo();
		}
	
}
	
}
