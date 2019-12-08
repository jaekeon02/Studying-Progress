#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include <stdio.h> 
#include <math.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>
# define UP 72 
# define DOWN 80
# define LEFT 75
# define RIGHT 77
int MAP_HEIGHT = 5;
int MAP_WIDTH = 5;
int MAP_X = 23;
int MAP_Y = 23;
int x[100],y[100],obstacleX[100],obstacleY[100];
int key;
int rightD;
int life = 5, count=0,speed=200;
int _kbhit(void);
int dir;
int dirX[10], dirY[10]; 

int upAndDownGame(void)
{
	int com=0;
	int user = 0;
    int count=10;
	char reset=0;
	
	while(1)
	{
	printf("==============UP and DOWN GAME==============\n");
	srand(time(0));

	com=rand()%101;
	
	while(count)
	{
	printf("\t\t   %d번의 기회가 남았습니다.\n",count);
	printf("\t숫자를 맞춰보세요 : (범위는 1~100)\n");
	printf("--------------------------------------------\n");
	scanf("%d", &user);
	if(com==user)
	{
		printf("\t\t\t정답입니다!!\n");
		return 0;
	}
	else
	{
		printf("\t\t\t\t틀렸습니다.\n");
	count--;

	if(com>user)
	{
		printf("\t\t\t\tUP입니다.\n");
	}
	else
	{
		printf("\t\t\t\tDOWN입니다.\n");
	}
	}
	if(count==0)
	{
		printf("--------------------------------------------\n");
		printf("\t    주어진 기회를 모두 사용했습니다.\n");
		printf("\t\t\t정답은 %d입니다.\n",com);
		printf("--------------------------------------------\n");
		return 0;
	}
	}
	

}
}
int quizShow(void)
{
	int z = 0;
	printf("      \t===============================================================\n");
	printf("        |\t\t  퀴즈쇼에 오신것을 환영합니다\t\t      |\n");
	printf("      \t===============================================================\n");
	Sleep(1000);
	printf("     *  *  *                                                       *  *  *\n");
	Sleep(100);
	printf("      *  *                                                          *  *  \n");
	Sleep(100);
	printf("        *                                                             *  \n");
	Sleep(100);
	printf("     -------                                                       -------\n");
	printf("     (     )                                                       (     )\n");
	printf("      (   )                                                         (   )  \n");
	printf("       ( )                                                           ( )  \n");
	printf("        -                                                             -  \n\n\n");
	Sleep(1500);
	printf("\t\t여러분들은 총 4가지의 주제로 문제를 푸실겁니다.\n\n\t\t      각 주제에는 5문항씩 나올 예정이며\n\n\t\t   20문제중 총 15문제를 맞추셔야만 합격입니다.\n\n\t       각 문제는 띄어쓰기 없이 정답을 적어주시면 됩니다.\n\n\n");
	Sleep(3000);
	printf("\n\t\t\t    그럼 행운을 빌겠습니다.\n");
	Sleep(2000);
	system( "cls\n" );
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     문제를 불러오는중.\n\n\n");
	Sleep(1000);
	system( "cls\n" );
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     문제를 불러오는중..\n\n\n");
	Sleep(1000);
	system( "cls\n" );
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     문제를 불러오는중...\n\n\n");
	Sleep(1000);
	system( "cls\n" );
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     문제를 불러오는중....\n\n\n");
	Sleep(1000);
	system( "cls\n" );
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     문제를 불러오는중.....\n\n\n");
	Sleep(1000);
	system( "cls" );
	printf("\n\t\t    첫 번째 주제는 역사에 대한 문제입니다.\n\n");
	Sleep(2000);

	printf("\t\t\t  그럼 문제드리겠습니다.\n\n");
	Sleep(2000);
	{
	char a1[20];
	char b1[20]="을지문덕";
	printf("   1.살수대첩에서 수나라의 30만대군에 맞서 싸워\n     고구려를 지킨 장군의 이름은 무엇일까요?\n");
	scanf("   %s",&a1);
	if(!strcmp(a1,b1))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a2[20];
	char b2[20]="윤봉길";
	printf("   2.우리나라의 독립 운동가로써 홍커우 공원에서\n     일본군을 향해 도시락폭탄을 던진 사람은 누구일까요?\n");
	scanf("%s",&a2);
	if(!strcmp(a2,b2))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a3[20];
	char b3[20]="일제강점기";
	printf("   3.우리나라가 일본제국주의에 의하여 식민통치를 당한 35년간\n   (1910∼1945)의 시대를 부르는 말은?\n");
	scanf("%s",&a3);
	if(!strcmp(a3,b3))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a4[20];
	char b4[20]="신재호";
	printf("   4.역사를 잊은 민족에게 미래는 없다 라는 말씀을 하신 분은 누구일까요?\n");
	scanf("%s",&a4);
	if(!strcmp(a4,b4))
	{
	puts("  정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a5[20];
	char b5[20]="봉오동전투";
	printf("   5.홍범도가 일본군을 크게 무찌른 전투의 이름은?\n");
	scanf("%s",&a5);
	if(!strcmp(a5,b5))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.");
	}
	}
	Sleep(2000);
	system("cls");
	
	printf("\n\t\t    두 번째 주제는 상식에 관한 문제입니다.\n\n");
	Sleep(2000);

	printf("\t\t\t  그럼 문제드리겠습니다.\n\n");
	Sleep(2000);
	{
	char a6[20];
	char b6[20]="산업혁명";
	printf("   1. 1세기 중엽 영국에서 시작된 기술혁신과 이에 수반하여 일어난 \n      사회 · 경제 구조의 변혁을 무엇이라 할까요?\n");
	scanf("%s",&a6);
	if(!strcmp(a6,b6))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a7[20];
	char b7[20]="적조현상";
	printf("   2.플랑크톤의 이상증식으로 바닷물이 붉게 보이는 현상은??!\n");
	scanf("%s",&a7);
	if(!strcmp(a7,b7))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a8[20];
	char b8[20]="코스모스";
	printf("   3.멕시코가 원산지인 가을하면 떠로으는 대표적인 보라색 꽃은??!\n");
	scanf("%s",&a8);
	if(!strcmp(a8,b8))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a9[30];
	char b9[30]="피그말리온효과";
	printf("   4.타인의 기대나 관심으로 인하여 능률이 오르거나 결과가 좋아지는\n      현상인 이 효과는 무엇일까요?\n");
	scanf("%s",&a9);
	if(!strcmp(a9,b9))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a10[20];
	char b10[20]="앤설리번";
	printf("   5.시각과 청각을 잃은 위인 '헬렌 켈러'에게 큰 영향을 준 교육가인\n     이 선생님의 이름은 무엇일까요?\n");
	scanf("%s",&a10);
	if(!strcmp(a10,b10))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.");
	}
	}
	Sleep(2000);
	system("cls");
	printf("\n\t\t    세 번째 주제는 수도에 관한 문제입니다.\n\n");
	Sleep(2000);

	printf("\t\t\t  그럼 문제드리겠습니다.\n\n");
	Sleep(2000);

	{
	char a11[20];
	char b11[20]="베를린";
	printf("   1.독일의 수도는 어디일까요?\n");
	scanf("%s",&a11);
	if(!strcmp(a11,b11))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a12[20];
	char b12[20]="서울";
	printf("   2.대한민국의 수도는 어디일까요?\n");
	scanf("%s",&a12);
	if(!strcmp(a12,b12))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a13[20];
	char b13[20]="오타와";
	printf("   3.케나다의 수도는 어디일까요?\n");
	scanf("%s",&a13);
	if(!strcmp(a13,b13))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a14[20];
	char b14[20]="캔버라";
	printf("   4.호주의 수도는 어디일까요?\n");
	scanf("%s",&a14);
	if(!strcmp(a14,b14))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a15[20];
	char b15[20]="마드리드";
	printf("   5.스페인의 수도는 어디일까요?\n");
	scanf("%s",&a15);
	if(!strcmp(a15,b15))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.");
	}
	}
	Sleep(2000);
	system("cls");
	printf("\n\t\t     네 번째 주제는 넌센스 문제입니다.\n\n");
	Sleep(2000);

	printf("\t\t\t  그럼 문제드리겠습니다.\n\n");
	Sleep(2000);
	{
	char a16[20];
	char b16[20]="대머리";
	printf("   1.헤어 나올수 없는 곳은?\n");
	scanf("%s",&a16);
	if(!strcmp(a16,b16))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a17[20];
	char b17[20]="미더덕";
	printf("   2.가장 믿음직한 오리는\n");
	scanf("%s",&a17);
	if(!strcmp(a17,b17))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a18[20];
	char b18[20]="공중전화";
	printf("   3.왕이 둥둥 떠있으면?\n");
	scanf("%s",&a18);
	if(!strcmp(a18,b18))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a19[20];
	char b19[20]="영구없다";
	printf("   4.숫자 ' 1, 2, 3, 4, 5, 6, 7, 8 ' 을\n     네글자로 줄이면 무엇일까요?\n");
	scanf("%s",&a19);
	if(!strcmp(a19,b19))
	{
	puts("  정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("  오답입니다.\n\n");
	}
	}
	Sleep(2000);
	{
	char a20[20];
	char b20[20]="개구리";
	printf("   5.강아지가 더러우면?\n");
	scanf("%s",&a20);
	if(!strcmp(a20,b20))
	{
	puts("   정답입니다.\n\n");
	z++;
	}
	else
	{
		puts("   오답입니다.");
	}
	}
	Sleep(2000);
	system("cls");
	if(z>=15){
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t          Victory!!\n");
		Sleep(3000);
		system("cls");
	}
	else{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t        Game over");
		system("cOLoR 4f");
		Sleep(200);
		system("cOLoR 0f");
		Sleep(200);
		system("cOLoR 4f");
		Sleep(200);
		system("cOLoR 0f");
		Sleep(200);
		system("cOLoR 4f");
		Sleep(200);
		system("cOLoR 0f");
		Sleep(200);
		system("cOLoR 4f");
		Sleep(200);
		system("cOLoR 0f");
		Sleep(200);
		system("cOLoR 4f");
		Sleep(200);
		system("cOLoR 0f");
		Sleep(200);
		system("cOLoR 4f");
		Sleep(200);
		system("cOLoR 0f");
		Sleep(200);

		system("cls");
	}
}
int mathcal(){

int num,num1,term,복리; float rate, money; char name[30],ans='a';
printf("┌──────────────────────────────────────────────────────┐\n");
printf("│\t\t\t\t\t\t       │\n");
printf("│\t\t\t\t\t\t       │\n");
printf("│\t\t\t\t\t\t       │\n");
printf("│\t\t\t\t\t\t       │\n");
printf("│\t\t\t     부자가 되고싶으신가요?    │\n"); 
printf("│\t\t\t\t    Yes:y / No:n       ");
printf("│\t\t\t\t\t\t       │\n");
printf("│\t\t\t\t\t\t       │\n");
printf("│\t\t\t\t\t\t       │\n");
printf("└──────────────────────────────────────────────────────┘\n");
scanf("%s",&ans); system("cls");
if (ans=='y'){
	printf("hi~hello~당신의 이름은 무엇입니까 (OㄴO) ?? \n");
	scanf("%s",&name);
	system("cls");
	while (1){
		printf("1.예치식 2.적립식 \n");scanf("%d",&num);system("cls");
		switch (num){
		case 1:printf("\n\n\n⑴연(年) 이율을 설정해주세요(%%): \n");scanf("%f",&rate); system("cls");
			   printf("\n\n\n⑵예치할 기간을 설정해주세요(개월): \n");scanf("%d",&term); system("cls");
			   printf("\n\n\n⑶예치할 금액을 설정해주세요(\\): \n");scanf("%f",&money); system("cls");
			   printf("\n\n\n⑷ ①단리/②복리를 선택해주세요: \n");scanf("%d",&num1); system("cls");
			   if (num1==1) {money=money*(1+rate*0.01*term/12);}
			   else {printf("\n\n\n①연복리 ②매월 복리 \n");scanf("%d",&복리); system("cls");
			   if (복리==1) money=money*pow(1+rate*0.01,term/12);
			   else if (복리==2) money=money*pow(1+rate*0.01/12,term);system("cls");}
			   printf("┌──────────────────────────────────────────────────────┐\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t%s님의 만기수령액은 \\ %.0f 입니다\t│\n",name,money);
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("└──────────────────────────────────────────────────────┘\n");
			   getch(); break;
		case 2:printf("\n\n\n⑴연(年) 이율을 설정해주세요(%%): \n");scanf("%f",&rate); system("cls");
			   printf("\n\n\n⑵납입할 기간을 설정해주세요(개월): \n ");scanf("%d",&term); system("cls");
			   printf("\n\n\n⑶월납입금을 설정해주세요(\\): \n");scanf("%f",&money); system("cls");
			   printf("\n\n\n⑷ ①단리/②복리를 선택해주세요: \n");scanf("%d",&num1); system("cls");
			   if (num1==1){money=money*term+money*rate*0.01/12*term*(term+1)/2;}
			   else {printf("\n\n\n①연복리 ②매월 복리 \n");scanf("%d",&복리); system("cls");
			   if (복리==1) 
			   money=money*(pow(1+rate*0.01,(term+1)/12)-pow(1+rate*0.01,1/12))/(pow(1+rate*0.01,1/12)-1);
			   else if (복리==2) money=money*(1+rate*0.01/12)*(pow(1+rate*0.01/12,term)-1)/(rate*0.01/12);}
			   printf("┌──────────────────────────────────────────────────────┐\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("%s님의 만기수령액은 \\ %.0f 입니다\n",name,money);
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("│\t\t\t\t\t\t       │\n");
			   printf("└──────────────────────────────────────────────────────┘\n");
			   getch(); break; }}}

if (ans=='n') printf("다시 한번 잘 생각해봐요..."); system("cls");
return 0;
}


int psyTest(void)
{
	int num1,result;//선택지 번호
	while(1)
	{
		printf("심리테스트 - 첫인상 테스트\n");
		printf("1. 심리테스트 시작하기\n");
		printf("2. 종료하기\n");
		scanf("%d",&num1);
		system("cls");
		
      system("cls");
      printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 

		if(num1==2)
			break;
		else if(num1==1)
			printf("연상보다는 연하의 사람이 말하기 편하다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
		system("cls");
		switch(num1)
		{
		case 1:
			printf("술이 약한편이여서 쉽게 취한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
				num1=2;
			else
				printf("잘못된 값입니다\n");
			break;
		case 2:
			printf("옷은 불랙계통의 세련된것이 많은 편이다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=2;
			else if(num1==2)
				num1=3;
			else
				printf("잘못된 값입니다\n");
			break;
		}

		system("cls");
		switch(num1)
		{
		case 1:
			printf("혼자서 여행 또는 출장을 가는것은 재미가없다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
				num1=2;
			else
				printf("잘못된 값입니다\n");
			break;
		
		case 2:
			printf("동창회는 반드시 참석한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=3;
			else if(num1==2)
				num1==4;
			else
				printf("잘못된 값입니다\n");
			break;
		
		case 3:
			printf("어릴때부터 여러가지 별명을 갖고있다.\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			num1=5;
			else if(num1==2)
			num1=6;
			else
				printf("잘못된 값입니다\n");
			break;
		}
		
		system("cls");
		switch(num1)
		{
		case 1:
			printf("공식행사나 친구들 사이에서 총무역할을 많이 한다.\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
				num1=2;
			else
				printf("잘못된 값입니다\n");
			break;
		
		case 2:
			printf("성격이 급하다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=3;
			else if(num1==2)
				num1=1;
			else
				printf("잘못된 값입니다\n");
			break;
		
		case 3:
			printf("무비카메라를 들이대면 자주 V(브이)싸인을 한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=4;
			else if(num1==2)
				num1=2;
			else
				printf("잘못된 값입니다\n");
			break;

		case 4:
			printf("키가 평균보다 작다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=5;
			else if(num1==2)
				num1=6;
			else
				printf("잘못된 값입니다\n");
			break;

		case 5:
			printf("태국,인도네시아 등의 동아시아 전통요리를 먹어본 적이 있다.\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=8;
			break;}
			if(num1==2)
				num1=6;
			else
			{printf("잘못된 값입니다\n");
			break;}
		
		case 6:
			printf("자주 물건을 잃어버린다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=7;
			else if(num1==2)
				num1=5;
			else
				printf("잘못된 값입니다\n");
			break;
		}
		
		system("cls");
		switch(num1)
		{
		case 1:
			printf("대부분 통화를 오래한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if (num1==1)
				num1=1;
			else if(num1==2)
				num1=2;
			else
				printf("잘못된 값입니다\n");
			break;

		case 2:
			printf("자신의 책상은 언제나 정리정돈한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			num1=3;
			else if(num1==2)
			{num1=15;
			result=3;}
			else
				printf("잘못된 값입니다\n");
			break;

		case 3:
			printf("몸가짐에 항상 주의하는 편이다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=1;}
			else if(num1==2)
			{num1=15;
			result=2;}
			else
				printf("잘못된 값입니다\n");
			break;

		case 4:
			printf("다른 사람에게 무언가를 가르친다는 것은 괴롭다고 생각한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=4;
			else if(num1==2)
				num1=5;
			else
				printf("잘못된 값입니다\n");
			break;
		
		case 5:
			printf("공식행사나 친구들 사이에서 총무역할을 많이 한다.\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=6;
			else if(num1==2)
				num1=2;
			else
				printf("잘못된 값입니다\n");
			break;
		
		case 6:
			printf("섹시한 편이다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=5;
			else if(num1==2)
				num1=3;
			else
				printf("잘못된 값입니다\n");
			break;

		case 7:
			printf("키가 평균보다 작다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=8;
			else if(num1==2)
				num1=7;
			else
				printf("잘못된 값입니다\n");
			break;

		case 8:
			printf("머리 모양에 관심이 있다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=9;
			else if(num1==2)
				num1=15;
			else
				printf("잘못된 값입니다\n");
			break;
		}
		system("cls");
		switch(num1)
		{
		case 1:
			printf("한곳에 오래 앉아 있지 않는 편이라고 생각한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=1;}
			else if(num1==2)
			{num1=15;
			result=2;}
			else
				printf("잘못된 값입니다\n");
			break;

		case 2:
			printf("자신의 책상은 언제나 정리정돈 한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
			{num1=15;
			result=3;}
			else
				printf("잘못된 값입니다\n");
			break;

		case 3:
			printf("농담을 잘 하지 못해 고민이다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=3;}
			else if(num1==2)
			{num1=15;
			result=4;}
			else
				printf("잘못된 값입니다\n");
			break;

		case 4:
			printf("다른 사람이 나의 실제나이를 예측하지 못한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=5;}
			else if(num1==2)
				num1=2;
			else
				printf("잘못된 값입니다\n");
			break;

		case 5:
			printf("목소리가 크다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=4;}
			else if(num1==2)
			{num1=15;
			result=5;}
			else
				printf("잘못된 값입니다\n");
			break;

		case 6:
			printf("대부분 통화를 오래한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=3;
			else if(num1==2)
				num1=4;
			else
				printf("잘못된 값입니다\n");
			break;

		case 7:
			printf("섹시한 편이다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=2;
			else if(num1==2)
				num1=1;
			else
				printf("잘못된 값입니다\n");
			break;

		case 8:
			printf("공식행사나 친구들 사이에서 총무역할을 많이 한다.\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=5;
			else if(num1==2)
				num1=4;
			else
				printf("잘못된 값입니다\n");
			break;

		case 9:
			printf("무비카메라를 들이대면 자주 V(브이)싸인을 한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=6;
			else if(num1==2)
				num1=4;
			else
				printf("잘못된 값입니다\n");
			break;
		
		case 10:
			printf("걸음이 느려 다른 사람보다 뒤쳐진다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=6;
			else if(num1==2)
				num1=7;
			else
				printf("잘못된 값입니다\n");
			break;

		}
		system("cls");	
			switch(num1)
			{
			case 1:
			printf("농담을 잘 하지 못해 고민이다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=3;}
			else if(num1==2)
			{num1=15;
			result=4;}
			else
				printf("잘못된 값입니다\n");
			break;
			
			case 2:
			printf("목소리가 크다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=4;}
			else if(num1==2)
			{num1=15;
			result=5;}
			else
				printf("잘못된 값입니다\n");
			break;
			
			case 3:
			printf("한곳에 오래 앉아 있지 않는 편이라고 생각한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=1;}
			else if(num1==2)
			{num1=15;
			result=2;}
			else
				printf("잘못된 값입니다\n");
			break;
			
			case 4:
			printf("자신의 책상은 언제나 정리정돈 한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
			{num1=15;
			result=3;}
			else
				printf("잘못된 값입니다\n");
			break;

			case 5:
			printf("대부분 통화를 오래한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=2;
			else if(num1==2)
				num1=3;
			else
				printf("잘못된 값입니다\n");
			break;

			case 6:
			printf("다른 사람에게 무언가를 가르친다는 것은 괴롭다고 생각한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=4;
			else if(num1==2)
				num1=5;
			else
				printf("잘못된 값입니다\n");
			break;

			case 7:
			printf("섹시한 편이다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=5;
			else if(num1==2)
				num1=1;
			else
				printf("잘못된 값입니다\n");
			break;
			}
			system("cls");
			switch(num1)
			{
			case 1:
			printf("농담을 잘 하지 못해 고민이다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=3;}
			else if(num1==2)
			{num1=15;
			result=4;}
			else
				printf("잘못된 값입니다\n");
			break;

			case 2:
			printf("한곳에 오래 앉아 있지 않는 편이라고 생각한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=1;}
			else if(num1==2)
			{num1=15;
			result=2;}
			else
				printf("잘못된 값입니다\n");
			break;

			case 3:
			printf("자신의 책상은 언제나 정리정돈 한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
			{num1=15;
			result=3;}
			else
				printf("잘못된 값입니다\n");
			break;

			case 4:
			printf("다른 사람이 나의 실제나이를 예측하지 못한다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=5;}
			else if(num1==2)
				num1=2;
			else
				printf("잘못된 값입니다\n");
			break;
			
			case 5:
			printf("목소리가 크다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=4;}
			else if(num1==2)
			{num1=15;
			result=5;}
			else
				printf("잘못된 값입니다\n");
			break;}
			system("cls");
			switch(num1)
			{
			case 1:
			printf("농담을 잘 하지 못해 고민이다\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=3;}
			else if(num1==2)
			{num1=15;
			result=4;}
			else
				printf("잘못된 값입니다\n");
			break;
			}

			      system("cls");
      printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 

			system("cls");
			if(num1==15&&result==1)
			{
				printf("\t당신은 A타입\n");
				printf("매우 훌륭해보이는 타입!\n");
				printf("어디를 보아도 관록이 있고, 지위가 있는 훌륭한 사람으로 보입니다.\n");
				printf("물론 이런경우 관록은 중량이 아니라 인격을 말합니다.\n");
				printf("당신을 처음 만난 상대방은 자신도 모르게 스스로를 낮추는 경우가 많지 않나요?\n");
				printf("그만큼 당신의 위치가 확고하지만 여기서 주의할 것은\n");
				printf("무서운 사람이라고 여겨직수 있는것!\n");
				printf("때로는 여유를 보여주도록 합시다\n");
				getch();
				system("cls");
			}
			else if(num1==15&&result==2)
			{
				printf("\t당신은 B타입\n");
				printf("언제나 즐겁고 귀여운 타입!\n");
				printf("언제나 마음 속에 태양이 비추고 있는 것처럼 즐겁고 부드러운 성격의 소유자.\n");
				printf("윗사람으로부터는 귀염을 받고, 동료들과는 친하게, 후배들로부터는 신뢰를 받는 타입이네요.\n");
				printf("원만한 성격이라는 말이 잘어울리는 사람\n");
				printf("다만 이성에게는 매력적으로 보이지 않아 연애에 곤란을 겪을수 있는 타입인점을 유의하세요!\n");
				getch();
				system("cls");
			}
			else if(num1==15&&result==3)
			{
				printf("\t당신은 C타입\n");
				printf("왠지 까다롭게 느껴지는 타입!\n");
				printf("어딘지 모르게 고고함과 엄격함이 보이는 타입이군요\n");
				printf("자기 스스로는 평범한 표정을 하고 있다고 생각하지만 타인들은 어려워하고있네요.\n");
				printf("당신을 처음 만나는 상대방은 당신을 보고 어려워하는 경향이 크네요\n");
				printf("무얼 얘기하면 좋을까하고 초조하면 초조할수록 마음이 급해져 더욱 초조해집니다.\n");
				printf("우선은 상대방얘기에 좀더 귀기울이는 편이 좋을거 같네요\n");
				getch();
				system("cls");
			}

			else if(num1==15&&result==4)
			{
				printf("\t당신은 D타입\n");
				printf("유쾌하고 활발한 타입!\n");
				printf("모두 즐거워하는 태양과 같이 유쾌한 사람.\n");
				printf("연히 주변에 모이는 사람도 많은 편이군요.\n");
				printf("서비스 정신이 넘치는 당신은, 당신을 찾아온 사람을 거절하기 어려워합니다.\n");
				printf("좋은 성격이지만 오히려 그점으로 인해 당신의 스트레스가 가중될 가능성이 높아보이네요\n");
				printf("다른사람에게 의지가 되는것도 좋지만, 당신을 좀더 신경써보는 편은 어떨까요.\n");
				getch();
				system("cls");
			}
			else if(num1==15&&result==5)
			{
				printf("\t당신은 E타입\n");
				printf("알쏭달쏭 불가사의한 타입!\n");
				printf("많은 과학의 세계가 인간에 관해 설명하고 있지만 아직도 그답을 찾기는 어렵습니다.\n");
				printf("아마도 당신도 그렇게 알 수 없는 부분을 갖고 있으면서 동시에 남도 그럴꺼라고 생각하시는군요.\n");
				printf("당신은 누군가가 당신과 비슷하다고 얘기하면 싫어하는 스타일이면서 독자적인\n");
				printf("노선을 가려하는, 하지만 남들이 보기에 어떤걸 추구하는지 추측하기 어려운타입입니다\n");
				getch();
				system("cls");
			}
	}
	system("cls");
	return 0;
}



void gotoxy(int a2, int b2, char*s) { //x값을 2x로 변경, 좌표값에 바로 문자열을 입력할 수 있도록 printf함수 삽입  
COORD pos={2*a2, b2};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
    printf("%s",s);
}
void showvar(int a3, int b3) { //x값을 2x로 변경, 좌표값에 바로 문자열을 입력할 수 있도록 printf함수 삽입  
COORD pos={2*a3, b3};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
    printf("%d",speed);
}
void draw_map(void){ //맵 테두리 그리는 함수 
    int i,j;
    for(i=0;i<MAP_WIDTH;i++){
        gotoxy(MAP_X+i,MAP_Y,"■");
    }
    for(i=MAP_Y+1;i<MAP_Y+MAP_HEIGHT-1;i++){
        gotoxy(MAP_X,i,"■");
        gotoxy(MAP_X+MAP_WIDTH-1,i,"■");
    }
    for(i=0;i<MAP_WIDTH;i++){
        gotoxy(MAP_X+i,MAP_Y+MAP_HEIGHT-1,"■");
    }
gotoxy(25,25,"☆");
}
int loseLife(void){
if ((obstacleX[0] ==23&&obstacleY[0]==25)||(obstacleX[0] ==25&&obstacleY[0]==23)||(obstacleX[0] ==27&&obstacleY[0]==25)||(obstacleX[0] ==25&&obstacleY[0]==27))
{
life--;
count++;
gotoxy(46-count, 12, " ");
 if (life == 4){
gotoxy(41,30," ");
gotoxy(41, 30, "별: 난 죽기싫다"); 
}
 if (life == 3){
gotoxy(41, 30, " ");
gotoxy(41, 30, "별: 잘 좀 하자"); 
}
else if(life == 2){
gotoxy(41, 30, " ");
gotoxy(41, 30, "별: 하핫        ");
}
else if (life==1){
gotoxy(41, 30, " ");
gotoxy(41, 30, "별: 망했다ㅋㅋㅋㅋ");
}

else if(life == 0){
printf("gameover");
gotoxy(25,25," ");


}
}
}
void obstacleGenerator(void){
int a3, fornumber,  fornumber1, chr, key;
gotoxy(10,15,"안");Sleep(50);
gotoxy(10,15,"안녕");Sleep(50);
gotoxy(10,15,"안녕하");Sleep(50);
gotoxy(10,15,"안녕하세");Sleep(50);
gotoxy(10,15,"안녕하세요!");Sleep(50);
gotoxy(10,15,"안녕하세요! 게");Sleep(50);
gotoxy(10,15,"안녕하세요! 게임");Sleep(50);
gotoxy(10,15,"안녕하세요! 게임을");Sleep(50);
gotoxy(10,15,"안녕하세요! 게임을 설");Sleep(50);
gotoxy(10,15,"안녕하세요! 게임을 설명");Sleep(50);
gotoxy(10,15,"안녕하세요! 게임을 설명할");Sleep(50);
gotoxy(10,15,"안녕하세요! 게임을 설명할게");Sleep(50);
gotoxy(10,15,"안녕하세요! 게임을 설명할게요!");Sleep(100);
gotoxy(10,15,"안녕하세요! 게임을 설명할게요! .");Sleep(100);
gotoxy(10,15,"안녕하세요! 게임을 설명할게요! ..");Sleep(100);
gotoxy(10,15,"안녕하세요! 게임을 설명할게요! ...");Sleep(1000);
gotoxy(10,15," ");
gotoxy(10,15,"화");Sleep(50);
gotoxy(10,15,"화살");Sleep(50);
gotoxy(10,15,"화살키");Sleep(50);
gotoxy(10,15,"화살키로");Sleep(50);
gotoxy(10,15,"화살키로 날");Sleep(50);
gotoxy(10,15,"화살키로 날아");Sleep(50);
gotoxy(10,15,"화살키로 날아오");Sleep(50);
gotoxy(10,15,"화살키로 날아오는");Sleep(50);
gotoxy(10,15,"화살키로 날아오는 화");Sleep(50);
gotoxy(10,15,"화살키로 날아오는 화살");Sleep(50);
gotoxy(10,15,"화살키로 날아오는 화살을");Sleep(50);
gotoxy(10,15,"화살키로 날아오는 화살을 막");Sleep(50);
gotoxy(10,15,"화살키로 날아오는 화살을 막으");Sleep(50);
gotoxy(10,15,"화살키로 날아오는 화살을 막으세");Sleep(50);
gotoxy(10,15,"화살키로 날아오는 화살을 막으세요!");Sleep(1000);
gotoxy(38,10,"별");Sleep(100);
gotoxy(38,10,"별 ");Sleep(100);
gotoxy(38,10,"별 다");Sleep(100);
gotoxy(38,10,"별 다섯");Sleep(100);
gotoxy(38,10,"별 다섯개");Sleep(100);
gotoxy(38,10,"별 다섯개가");Sleep(100);
gotoxy(38,10,"별 다섯개가 사");Sleep(100);
gotoxy(38,10,"별 다섯개가 사라");Sleep(100);
gotoxy(38,10,"별 다섯개가 사라지");Sleep(100);
gotoxy(38,10,"별 다섯개가 사라지면");Sleep(100);
gotoxy(38,10,"별 다섯개가 사라지면 g!");Sleep(100);
gotoxy(38,10,"별 다섯개가 사라지면 ga!");Sleep(100);
gotoxy(38,10,"별 다섯개가 사라지면 gam!");Sleep(100);
gotoxy(38,10,"별 다섯개가 사라지면 game!");Sleep(100);
gotoxy(38,10,"별 다섯개가 사라지면 gameo!");Sleep(100);
gotoxy(38,10,"별 다섯개가 사라지면 gameov!");Sleep(100);
gotoxy(38,10,"별 다섯개가 사라지면 gameove!");Sleep(100);
gotoxy(38,10,"별 다섯개가 사라지면 gameover!");Sleep(1500);


gotoxy(10,15, "                                      ");
gotoxy(38,10,"                                       ");
gotoxy(10,15,"시작 해볼까요?"); Sleep(1500);
gotoxy(10,15,"                                    ");
  while(1){
a3 = rand() %4;
if (a3 == 0)
  {
  obstacleX[0] = 25;
  obstacleY[0] = 10;
  
  for (fornumber=0;fornumber<13;fornumber++)
{
  Sleep(speed);
obstacleY[0]++;
  gotoxy(obstacleX[0],obstacleY[0],"↓");
  gotoxy(obstacleX[0],obstacleY[0]-1, " ");
  if (_kbhit())
{	
_getch();
key = _getch();
if (key==UP){
gotoxy(dirX[0], dirY[0], " ");
dirX[0] = 25;
dirY[0] = 24; 
gotoxy(obstacleX[0], obstacleY[0]," ");
gotoxy(dirX[0], dirY[0], "ㅡ");
if (speed<=100)
{
speed--;}
else {
speed-=5;
}	break;

}

  }
}
}
if (a3 == 1)
  {
  
  obstacleX[0] = 40;
  obstacleY[0] = 25;
  
  for (fornumber=0;fornumber<13;fornumber++)
{
  Sleep(speed);
obstacleX[0]--;
  gotoxy(obstacleX[0],obstacleY[0],"←");
  gotoxy(obstacleX[0]+1,obstacleY[0], " ");
 if (_kbhit())
{	
_getch();
key = _getch();
if (key==RIGHT){
gotoxy(dirX[0], dirY[0], " ");
dirX[0] = 26;
dirY[0] = 25; 

gotoxy(obstacleX[0], obstacleY[0]," ");
gotoxy(dirX[0], dirY[0], "ㅣ");
if (speed<=100)
{
speed--;}
else {
speed-=5;
}
break;

}

  
}
}
}
if (a3 == 2)
  {
  
  obstacleX[0] = 25;
  obstacleY[0] = 40;
  
    for (fornumber=0;fornumber<13;fornumber++)
{
  Sleep(speed);
obstacleY[0]--;
  gotoxy(obstacleX[0],obstacleY[0],"↑");
  gotoxy(obstacleX[0],obstacleY[0]+1, " ");
  
 if (_kbhit())
{	
_getch();
key = _getch();
if (key==DOWN){
gotoxy(dirX[0], dirY[0], " ");
dirX[0] = 25;
dirY[0] = 26; 

gotoxy(obstacleX[0], obstacleY[0]," ");
gotoxy(dirX[0], dirY[0], "ㅡ");
if (speed<=100)
{
speed--;}

else {
speed-=5;
}	break;

}

  }
}
}

if (a3 == 3)
  {
  
  obstacleX[0] = 10;
  obstacleY[0] = 25;
  
    for (fornumber=0;fornumber<13;fornumber++)
{
  Sleep(speed);
obstacleX[0]++;
  gotoxy(obstacleX[0],obstacleY[0],"→");
  gotoxy(obstacleX[0]-1,obstacleY[0], " ");
  
 if (_kbhit())
{	
_getch();
key = _getch();
if (key==LEFT){
gotoxy(dirX[0], dirY[0], " ");
dirX[0] = 24;
dirY[0] = 25; 

gotoxy(obstacleX[0], obstacleY[0]," ");
gotoxy(dirX[0], dirY[0], "ㅣ");
if (speed<=110)
{
speed--;}
else {
speed-=5;
}	
break;

}

  }
}
}
loseLife();
showvar(45,4);
if (life == 0)
	break;
}

}
int arrowGame(){
int xco=41, yco=12, k; 
draw_map();
for (k=0;k<=4;k++)
{

gotoxy(xco,yco,"*");
xco++;
}

obstacleGenerator();

return 0;
}

int main(void){
system("cls");
gotoxy(30,10,"ㅁ");Sleep(50);
gotoxy(30,10,"미");Sleep(50);
gotoxy(30,10,"미ㄴ");Sleep(50);
gotoxy(30,10,"미니");Sleep(50);
gotoxy(30,10,"미니ㄱ");Sleep(50);
gotoxy(30,10,"미니게");Sleep(50);
gotoxy(30,10,"미니게ㅇ");Sleep(50);
gotoxy(30,10,"미니게임");Sleep(50);
gotoxy(30,10,"미니게임 ㅊ");Sleep(50);
gotoxy(30,10,"미니게임 처");Sleep(50);
gotoxy(30,10,"미니게임 천");Sleep(50);
gotoxy(30,10,"미니게임 천ㄱ");Sleep(1500);
gotoxy(30,10,"미니게임 천");Sleep(50);
gotoxy(30,10,"미니게임 처");Sleep(50);
gotoxy(30,10,"미니게임 ㅊ");Sleep(50);
gotoxy(30,10,"미니게임");Sleep(50);
gotoxy(30,10,"미니게임 ㅈ");Sleep(50);
gotoxy(30,10,"미니게임 지");Sleep(50);
gotoxy(30,10,"미니게임 지ㅇ");Sleep(50);
gotoxy(30,10,"미니게임 지오");Sleep(50);
gotoxy(30,10,"미니게임 지옥");Sleep(1500);

	printf("\n\t\t1. 업 앤 다운\n");
	printf("\t\t2. 화살막기 게임\n");
	printf("\t\t3. 퀴즈쇼\n");
	printf("\t\t4. 연리복리 계산기\n");
	printf("\t\t5. 심리테스트\n\n\n");
	printf("\t\t6. 만든 이들"); 
	printf("\t\t게임을 선택하시오:");
	while(1) {
		int direction, direction2; 
		scanf("%d", &direction);
		
		if(direction == 1){
			system("cls");
			 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 
			upAndDownGame(); 
			printf("1. 메뉴로\n");
			printf("2. 종료\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
				system("cls");
				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 
				main();
		}
			else if (direction2 == 2)
				exit(0); 
	
		}
		else if (direction == 2){
			system("cls");
			 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 
			arrowGame();
			Sleep(1000);
			system("cls");
			printf("1. 메뉴로\n");
			printf("2. 종료\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
								system("cls");

				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 
				main();
		}
			else if (direction2 == 2)
				exit(0); 
	
		}
		else if (direction == 3){
			system("cls");
			 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 
			quizShow();
			printf("1. 메뉴로\n");
			printf("2. 종료\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
								system("cls");

				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 
				main();
		}
			else if (direction2 == 2)
				exit(0); 
	
	
		}
		else if (direction == 4){
			system("cls");
			 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 
			mathcal(); 
			printf("1. 메뉴로\n");
			printf("2. 종료\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
								system("cls");

				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 
				main();
		}
			else if (direction2 == 2)
				exit(0); 
	
		}
		else if (direction == 5){
			system("cls");
			 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 
			psyTest(); 
			printf("1. 메뉴로\n");
			printf("2. 종료\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 
				main();
		}
			else if (direction2 == 2)
				exit(0); 
	
	}
		else if (direction == 6) 
		{
			system("cls"); 
			printf("\n\n\n\n");
			printf("\t\t업앤 다운: 유채민\n");
			printf("\t\t화살 막기: 남도현\n");
			printf("\t\t퀴즈 쇼: 최승준\n");
			printf("\t\t연리복리 계산기: 김예지\n");
			printf("\t\t심리 테스트: 송재건\n");
			Sleep(2000);
			printf("1. 메뉴로\n");
			printf("2. 종료\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
				system("cls");
				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             □□□□□□□□□□0%%\r");
      Sleep(200);          
      printf("                             ■□□□□□□□□□10%%\r");
      Sleep(300);         
      printf("                             ■■□□□□□□□□20%%\r");
      Sleep(100);            
      printf("                             ■■■□□□□□□□30%%\r");
      Sleep(100);
      printf("                             ■■■■□□□□□□40%%\r");
      Sleep(100);
      printf("                             ■■■■■□□□□□50%%\r");
      Sleep(100);
      printf("                             ■■■■■■□□□□60%%\r");
      Sleep(100);
      printf("                             ■■■■■■■□□□70%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■□□80%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■□90%%\r");
      Sleep(100);
      printf("                             ■■■■■■■■■■100%%\r");
      Sleep(500);             
      system("cls"); 
				main();
			}
				else if (direction2 == 2)
				exit(0); 
	
	}
				
				/*	if (_kbhit())
	{
		_getch();
		dir = _getch();
		if (dir == 49) {
			system("cls");
			upAndDownGame(); 
		}
		else if (dir == 50) {
			system("cls");
			arrowGame();
		}
		else if (dir == 51) {
			system("cls");
			quizShow();
		}
		else if (dir == 52) {
			system("cls");
			mathcal(); 
		}
	}*/

}
	}

//int main(void){
//	arrowGame();
//}
