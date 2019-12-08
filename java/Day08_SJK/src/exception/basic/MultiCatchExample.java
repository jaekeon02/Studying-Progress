package exception.basic;

import java.util.InputMismatchException;
import java.util.Scanner;

public class MultiCatchExample {
	
	
	public static void main(String[] args) {
	
		
		Scanner sc = new Scanner(System.in);
		
		try {
			System.out.println("정수 입력하세요");
			int num = sc.nextInt();
			
			int result = 100/num;
			
			String s= null;
			s.equals("안녕");
			
		} catch (InputMismatchException e) {//catch내에 에러발생시 구분하기 위한 객체 생성
			//e.printStackTrace();//예외를 역추적하여 확인하는 문법
			System.out.println("입력값 정수로만 넣어주세요!");
			}
		catch (ArithmeticException | NullPointerException e) {//하나의 catch문에서 2개이상 처리가 가능
			System.out.println("0을 입력하지 마세요!");//단 서로 관련이 없어야함(Exception등 서로 관련이 있는것은 불가능)
		}
		/*catch (NullPointerException e) {
			System.out.println("null값을 입력하지마세요");
		}*/
		/*catch (Exception e) { 순서를 조심-> 모든에러가 Exception으로 처리될수 있음(switch case나 if else문과 동일)
			//제일 마지막에 넣어주는 것이 좋음(이유가 모르는 에러가 발생할 수 있으므로)
		}*/
	}
	
	
}
