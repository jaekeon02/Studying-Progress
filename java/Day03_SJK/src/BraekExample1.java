
public class BraekExample1 {
	public static void main(String[] args) {
		
		for(int i=1;i<=10;i++) {
			if(i>7) {
				break;}
			System.out.printf("%d ",i);
			
		}
		
		System.out.println("\n반복문 종료\n");
		
		
		System.out.println("---------------------------------------\n\n");
		
		outer : for(int n=0;n<3;n++) {
			for(int j=0;j<2;j++) {
				if(n == j) break outer;
				System.out.printf("%d - %d\n");
			}
			/* 내부 반복문에서 break를 사용하여 외부반복문까지 한번에 탈출하고 싶은 반복문 앞에
			 * label(이름)을 붙입니다
			 * 그리고 break를 선언할 때 label을 함께 선언합니다
			 */
		}
	}
}
