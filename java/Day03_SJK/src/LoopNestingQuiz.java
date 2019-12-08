import java.util.Scanner;

public class LoopNestingQuiz {
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		System.out.println("정수를 입력하세요 : ");
		int num = sc.nextInt();
		int circle=0;
		for(int i=0;i<=num;i++) {
			int count=0;
			for(int d=2;d<=i;d++) {
				if(i%d==0){count++;}
			}
			if(count==1) {
				System.out.printf("%d ",i);
				circle++;
			}
		}
		System.out.printf("\n총 갯수 %d",circle);
		
		sc.close();
	}
}
