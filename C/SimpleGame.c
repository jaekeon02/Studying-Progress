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
	printf("\t\t   %d���� ��ȸ�� ���ҽ��ϴ�.\n",count);
	printf("\t���ڸ� ���纸���� : (������ 1~100)\n");
	printf("--------------------------------------------\n");
	scanf("%d", &user);
	if(com==user)
	{
		printf("\t\t\t�����Դϴ�!!\n");
		return 0;
	}
	else
	{
		printf("\t\t\t\tƲ�Ƚ��ϴ�.\n");
	count--;

	if(com>user)
	{
		printf("\t\t\t\tUP�Դϴ�.\n");
	}
	else
	{
		printf("\t\t\t\tDOWN�Դϴ�.\n");
	}
	}
	if(count==0)
	{
		printf("--------------------------------------------\n");
		printf("\t    �־��� ��ȸ�� ��� ����߽��ϴ�.\n");
		printf("\t\t\t������ %d�Դϴ�.\n",com);
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
	printf("        |\t\t  ���� ���Ű��� ȯ���մϴ�\t\t      |\n");
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
	printf("\t\t�����е��� �� 4������ ������ ������ Ǫ�ǰ̴ϴ�.\n\n\t\t      �� �������� 5���׾� ���� �����̸�\n\n\t\t   20������ �� 15������ ���߼ž߸� �հ��Դϴ�.\n\n\t       �� ������ ���� ���� ������ �����ֽø� �˴ϴ�.\n\n\n");
	Sleep(3000);
	printf("\n\t\t\t    �׷� ����� ���ڽ��ϴ�.\n");
	Sleep(2000);
	system( "cls\n" );
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     ������ �ҷ�������.\n\n\n");
	Sleep(1000);
	system( "cls\n" );
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     ������ �ҷ�������..\n\n\n");
	Sleep(1000);
	system( "cls\n" );
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     ������ �ҷ�������...\n\n\n");
	Sleep(1000);
	system( "cls\n" );
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     ������ �ҷ�������....\n\n\n");
	Sleep(1000);
	system( "cls\n" );
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     ������ �ҷ�������.....\n\n\n");
	Sleep(1000);
	system( "cls" );
	printf("\n\t\t    ù ��° ������ ���翡 ���� �����Դϴ�.\n\n");
	Sleep(2000);

	printf("\t\t\t  �׷� �����帮�ڽ��ϴ�.\n\n");
	Sleep(2000);
	{
	char a1[20];
	char b1[20]="��������";
	printf("   1.�����ø���� �������� 30���뱺�� �¼� �ο�\n     ������ ��Ų �屺�� �̸��� �����ϱ��?\n");
	scanf("   %s",&a1);
	if(!strcmp(a1,b1))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a2[20];
	char b2[20]="������";
	printf("   2.�츮������ ���� ����ν� ȫĿ�� ��������\n     �Ϻ����� ���� ���ö���ź�� ���� ����� �����ϱ��?\n");
	scanf("%s",&a2);
	if(!strcmp(a2,b2))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a3[20];
	char b3[20]="����������";
	printf("   3.�츮���� �Ϻ��������ǿ� ���Ͽ� �Ĺ���ġ�� ���� 35�Ⱓ\n   (1910��1945)�� �ô븦 �θ��� ����?\n");
	scanf("%s",&a3);
	if(!strcmp(a3,b3))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a4[20];
	char b4[20]="����ȣ";
	printf("   4.���縦 ���� �������� �̷��� ���� ��� ������ �Ͻ� ���� �����ϱ��?\n");
	scanf("%s",&a4);
	if(!strcmp(a4,b4))
	{
	puts("  �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a5[20];
	char b5[20]="����������";
	printf("   5.ȫ������ �Ϻ����� ũ�� ��� ������ �̸���?\n");
	scanf("%s",&a5);
	if(!strcmp(a5,b5))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.");
	}
	}
	Sleep(2000);
	system("cls");
	
	printf("\n\t\t    �� ��° ������ ��Ŀ� ���� �����Դϴ�.\n\n");
	Sleep(2000);

	printf("\t\t\t  �׷� �����帮�ڽ��ϴ�.\n\n");
	Sleep(2000);
	{
	char a6[20];
	char b6[20]="�������";
	printf("   1. 1���� �߿� �������� ���۵� ������Ű� �̿� �����Ͽ� �Ͼ \n      ��ȸ �� ���� ������ ������ �����̶� �ұ��?\n");
	scanf("%s",&a6);
	if(!strcmp(a6,b6))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a7[20];
	char b7[20]="��������";
	printf("   2.�ö�ũ���� �̻��������� �ٴ幰�� �Ӱ� ���̴� ������??!\n");
	scanf("%s",&a7);
	if(!strcmp(a7,b7))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a8[20];
	char b8[20]="�ڽ���";
	printf("   3.�߽��ڰ� �������� �����ϸ� �������� ��ǥ���� ����� ����??!\n");
	scanf("%s",&a8);
	if(!strcmp(a8,b8))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a9[30];
	char b9[30]="�Ǳ׸�����ȿ��";
	printf("   4.Ÿ���� ��볪 �������� ���Ͽ� �ɷ��� �����ų� ����� ��������\n      ������ �� ȿ���� �����ϱ��?\n");
	scanf("%s",&a9);
	if(!strcmp(a9,b9))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a10[20];
	char b10[20]="�ؼ�����";
	printf("   5.�ð��� û���� ���� ���� '�ﷻ �̷�'���� ū ������ �� ��������\n     �� �������� �̸��� �����ϱ��?\n");
	scanf("%s",&a10);
	if(!strcmp(a10,b10))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.");
	}
	}
	Sleep(2000);
	system("cls");
	printf("\n\t\t    �� ��° ������ ������ ���� �����Դϴ�.\n\n");
	Sleep(2000);

	printf("\t\t\t  �׷� �����帮�ڽ��ϴ�.\n\n");
	Sleep(2000);

	{
	char a11[20];
	char b11[20]="������";
	printf("   1.������ ������ ����ϱ��?\n");
	scanf("%s",&a11);
	if(!strcmp(a11,b11))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a12[20];
	char b12[20]="����";
	printf("   2.���ѹα��� ������ ����ϱ��?\n");
	scanf("%s",&a12);
	if(!strcmp(a12,b12))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a13[20];
	char b13[20]="��Ÿ��";
	printf("   3.�ɳ����� ������ ����ϱ��?\n");
	scanf("%s",&a13);
	if(!strcmp(a13,b13))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a14[20];
	char b14[20]="ĵ����";
	printf("   4.ȣ���� ������ ����ϱ��?\n");
	scanf("%s",&a14);
	if(!strcmp(a14,b14))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a15[20];
	char b15[20]="���帮��";
	printf("   5.�������� ������ ����ϱ��?\n");
	scanf("%s",&a15);
	if(!strcmp(a15,b15))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.");
	}
	}
	Sleep(2000);
	system("cls");
	printf("\n\t\t     �� ��° ������ �ͼ��� �����Դϴ�.\n\n");
	Sleep(2000);

	printf("\t\t\t  �׷� �����帮�ڽ��ϴ�.\n\n");
	Sleep(2000);
	{
	char a16[20];
	char b16[20]="��Ӹ�";
	printf("   1.��� ���ü� ���� ����?\n");
	scanf("%s",&a16);
	if(!strcmp(a16,b16))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a17[20];
	char b17[20]="�̴���";
	printf("   2.���� �������� ������\n");
	scanf("%s",&a17);
	if(!strcmp(a17,b17))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a18[20];
	char b18[20]="������ȭ";
	printf("   3.���� �յ� ��������?\n");
	scanf("%s",&a18);
	if(!strcmp(a18,b18))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a19[20];
	char b19[20]="��������";
	printf("   4.���� ' 1, 2, 3, 4, 5, 6, 7, 8 ' ��\n     �ױ��ڷ� ���̸� �����ϱ��?\n");
	scanf("%s",&a19);
	if(!strcmp(a19,b19))
	{
	puts("  �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("  �����Դϴ�.\n\n");
	}
	}
	Sleep(2000);
	{
	char a20[20];
	char b20[20]="������";
	printf("   5.�������� �������?\n");
	scanf("%s",&a20);
	if(!strcmp(a20,b20))
	{
	puts("   �����Դϴ�.\n\n");
	z++;
	}
	else
	{
		puts("   �����Դϴ�.");
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

int num,num1,term,����; float rate, money; char name[30],ans='a';
printf("����������������������������������������������������������������������������������������������������������������\n");
printf("��\t\t\t\t\t\t       ��\n");
printf("��\t\t\t\t\t\t       ��\n");
printf("��\t\t\t\t\t\t       ��\n");
printf("��\t\t\t\t\t\t       ��\n");
printf("��\t\t\t     ���ڰ� �ǰ�����Ű���?    ��\n"); 
printf("��\t\t\t\t    Yes:y / No:n       ");
printf("��\t\t\t\t\t\t       ��\n");
printf("��\t\t\t\t\t\t       ��\n");
printf("��\t\t\t\t\t\t       ��\n");
printf("����������������������������������������������������������������������������������������������������������������\n");
scanf("%s",&ans); system("cls");
if (ans=='y'){
	printf("hi~hello~����� �̸��� �����Դϱ� (O��O) ?? \n");
	scanf("%s",&name);
	system("cls");
	while (1){
		printf("1.��ġ�� 2.������ \n");scanf("%d",&num);system("cls");
		switch (num){
		case 1:printf("\n\n\n�翬(Ҵ) ������ �������ּ���(%%): \n");scanf("%f",&rate); system("cls");
			   printf("\n\n\n�迹ġ�� �Ⱓ�� �������ּ���(����): \n");scanf("%d",&term); system("cls");
			   printf("\n\n\n�鿹ġ�� �ݾ��� �������ּ���(\\): \n");scanf("%f",&money); system("cls");
			   printf("\n\n\n�� ��ܸ�/�躹���� �������ּ���: \n");scanf("%d",&num1); system("cls");
			   if (num1==1) {money=money*(1+rate*0.01*term/12);}
			   else {printf("\n\n\n�翬���� ��ſ� ���� \n");scanf("%d",&����); system("cls");
			   if (����==1) money=money*pow(1+rate*0.01,term/12);
			   else if (����==2) money=money*pow(1+rate*0.01/12,term);system("cls");}
			   printf("����������������������������������������������������������������������������������������������������������������\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t%s���� ������ɾ��� \\ %.0f �Դϴ�\t��\n",name,money);
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("����������������������������������������������������������������������������������������������������������������\n");
			   getch(); break;
		case 2:printf("\n\n\n�翬(Ҵ) ������ �������ּ���(%%): \n");scanf("%f",&rate); system("cls");
			   printf("\n\n\n�賳���� �Ⱓ�� �������ּ���(����): \n ");scanf("%d",&term); system("cls");
			   printf("\n\n\n������Ա��� �������ּ���(\\): \n");scanf("%f",&money); system("cls");
			   printf("\n\n\n�� ��ܸ�/�躹���� �������ּ���: \n");scanf("%d",&num1); system("cls");
			   if (num1==1){money=money*term+money*rate*0.01/12*term*(term+1)/2;}
			   else {printf("\n\n\n�翬���� ��ſ� ���� \n");scanf("%d",&����); system("cls");
			   if (����==1) 
			   money=money*(pow(1+rate*0.01,(term+1)/12)-pow(1+rate*0.01,1/12))/(pow(1+rate*0.01,1/12)-1);
			   else if (����==2) money=money*(1+rate*0.01/12)*(pow(1+rate*0.01/12,term)-1)/(rate*0.01/12);}
			   printf("����������������������������������������������������������������������������������������������������������������\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("%s���� ������ɾ��� \\ %.0f �Դϴ�\n",name,money);
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("��\t\t\t\t\t\t       ��\n");
			   printf("����������������������������������������������������������������������������������������������������������������\n");
			   getch(); break; }}}

if (ans=='n') printf("�ٽ� �ѹ� �� �����غ���..."); system("cls");
return 0;
}


int psyTest(void)
{
	int num1,result;//������ ��ȣ
	while(1)
	{
		printf("�ɸ��׽�Ʈ - ù�λ� �׽�Ʈ\n");
		printf("1. �ɸ��׽�Ʈ �����ϱ�\n");
		printf("2. �����ϱ�\n");
		scanf("%d",&num1);
		system("cls");
		
      system("cls");
      printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
      Sleep(500);             
      system("cls"); 

		if(num1==2)
			break;
		else if(num1==1)
			printf("���󺸴ٴ� ������ ����� ���ϱ� ���ϴ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
		system("cls");
		switch(num1)
		{
		case 1:
			printf("���� �������̿��� ���� ���Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
				num1=2;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		case 2:
			printf("���� �ҷ������� ���õȰ��� ���� ���̴�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=2;
			else if(num1==2)
				num1=3;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		}

		system("cls");
		switch(num1)
		{
		case 1:
			printf("ȥ�ڼ� ���� �Ǵ� ������ ���°��� ��̰�����\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
				num1=2;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		
		case 2:
			printf("��âȸ�� �ݵ�� �����Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=3;
			else if(num1==2)
				num1==4;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		
		case 3:
			printf("������� �������� ������ �����ִ�.\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			num1=5;
			else if(num1==2)
			num1=6;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		}
		
		system("cls");
		switch(num1)
		{
		case 1:
			printf("������糪 ģ���� ���̿��� �ѹ������� ���� �Ѵ�.\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
				num1=2;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		
		case 2:
			printf("������ ���ϴ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=3;
			else if(num1==2)
				num1=1;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		
		case 3:
			printf("����ī�޶� ���̴�� ���� V(����)������ �Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=4;
			else if(num1==2)
				num1=2;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		case 4:
			printf("Ű�� ��պ��� �۴�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=5;
			else if(num1==2)
				num1=6;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		case 5:
			printf("�±�,�ε��׽þ� ���� ���ƽþ� ����丮�� �Ծ ���� �ִ�.\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=8;
			break;}
			if(num1==2)
				num1=6;
			else
			{printf("�߸��� ���Դϴ�\n");
			break;}
		
		case 6:
			printf("���� ������ �Ҿ������\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=7;
			else if(num1==2)
				num1=5;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		}
		
		system("cls");
		switch(num1)
		{
		case 1:
			printf("��κ� ��ȭ�� �����Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if (num1==1)
				num1=1;
			else if(num1==2)
				num1=2;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		case 2:
			printf("�ڽ��� å���� ������ ���������Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			num1=3;
			else if(num1==2)
			{num1=15;
			result=3;}
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		case 3:
			printf("�������� �׻� �����ϴ� ���̴�\n");
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
				printf("�߸��� ���Դϴ�\n");
			break;

		case 4:
			printf("�ٸ� ������� ���𰡸� ����ģ�ٴ� ���� ���Ӵٰ� �����Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=4;
			else if(num1==2)
				num1=5;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		
		case 5:
			printf("������糪 ģ���� ���̿��� �ѹ������� ���� �Ѵ�.\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=6;
			else if(num1==2)
				num1=2;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		
		case 6:
			printf("������ ���̴�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=5;
			else if(num1==2)
				num1=3;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		case 7:
			printf("Ű�� ��պ��� �۴�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=8;
			else if(num1==2)
				num1=7;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		case 8:
			printf("�Ӹ� ��翡 ������ �ִ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=9;
			else if(num1==2)
				num1=15;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		}
		system("cls");
		switch(num1)
		{
		case 1:
			printf("�Ѱ��� ���� �ɾ� ���� �ʴ� ���̶�� �����Ѵ�\n");
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
				printf("�߸��� ���Դϴ�\n");
			break;

		case 2:
			printf("�ڽ��� å���� ������ �������� �Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
			{num1=15;
			result=3;}
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		case 3:
			printf("����� �� ���� ���� ����̴�\n");
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
				printf("�߸��� ���Դϴ�\n");
			break;

		case 4:
			printf("�ٸ� ����� ���� �������̸� �������� ���Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=5;}
			else if(num1==2)
				num1=2;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		case 5:
			printf("��Ҹ��� ũ��\n");
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
				printf("�߸��� ���Դϴ�\n");
			break;

		case 6:
			printf("��κ� ��ȭ�� �����Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=3;
			else if(num1==2)
				num1=4;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		case 7:
			printf("������ ���̴�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=2;
			else if(num1==2)
				num1=1;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		case 8:
			printf("������糪 ģ���� ���̿��� �ѹ������� ���� �Ѵ�.\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=5;
			else if(num1==2)
				num1=4;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		case 9:
			printf("����ī�޶� ���̴�� ���� V(����)������ �Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=6;
			else if(num1==2)
				num1=4;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
		
		case 10:
			printf("������ ���� �ٸ� ������� ��������\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=6;
			else if(num1==2)
				num1=7;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

		}
		system("cls");	
			switch(num1)
			{
			case 1:
			printf("����� �� ���� ���� ����̴�\n");
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
				printf("�߸��� ���Դϴ�\n");
			break;
			
			case 2:
			printf("��Ҹ��� ũ��\n");
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
				printf("�߸��� ���Դϴ�\n");
			break;
			
			case 3:
			printf("�Ѱ��� ���� �ɾ� ���� �ʴ� ���̶�� �����Ѵ�\n");
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
				printf("�߸��� ���Դϴ�\n");
			break;
			
			case 4:
			printf("�ڽ��� å���� ������ �������� �Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
			{num1=15;
			result=3;}
			else
				printf("�߸��� ���Դϴ�\n");
			break;

			case 5:
			printf("��κ� ��ȭ�� �����Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=2;
			else if(num1==2)
				num1=3;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

			case 6:
			printf("�ٸ� ������� ���𰡸� ����ģ�ٴ� ���� ���Ӵٰ� �����Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=4;
			else if(num1==2)
				num1=5;
			else
				printf("�߸��� ���Դϴ�\n");
			break;

			case 7:
			printf("������ ���̴�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=5;
			else if(num1==2)
				num1=1;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
			}
			system("cls");
			switch(num1)
			{
			case 1:
			printf("����� �� ���� ���� ����̴�\n");
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
				printf("�߸��� ���Դϴ�\n");
			break;

			case 2:
			printf("�Ѱ��� ���� �ɾ� ���� �ʴ� ���̶�� �����Ѵ�\n");
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
				printf("�߸��� ���Դϴ�\n");
			break;

			case 3:
			printf("�ڽ��� å���� ������ �������� �Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
				num1=1;
			else if(num1==2)
			{num1=15;
			result=3;}
			else
				printf("�߸��� ���Դϴ�\n");
			break;

			case 4:
			printf("�ٸ� ����� ���� �������̸� �������� ���Ѵ�\n");
			printf("1. YES\n");
			printf("2. NO\n");
			scanf("%d",&num1);
			if(num1==1)
			{num1=15;
			result=5;}
			else if(num1==2)
				num1=2;
			else
				printf("�߸��� ���Դϴ�\n");
			break;
			
			case 5:
			printf("��Ҹ��� ũ��\n");
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
				printf("�߸��� ���Դϴ�\n");
			break;}
			system("cls");
			switch(num1)
			{
			case 1:
			printf("����� �� ���� ���� ����̴�\n");
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
				printf("�߸��� ���Դϴ�\n");
			break;
			}

			      system("cls");
      printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
      Sleep(500);             
      system("cls"); 

			system("cls");
			if(num1==15&&result==1)
			{
				printf("\t����� AŸ��\n");
				printf("�ſ� �Ǹ��غ��̴� Ÿ��!\n");
				printf("��� ���Ƶ� ������ �ְ�, ������ �ִ� �Ǹ��� ������� ���Դϴ�.\n");
				printf("���� �̷���� ������ �߷��� �ƴ϶� �ΰ��� ���մϴ�.\n");
				printf("����� ó�� ���� ������ �ڽŵ� �𸣰� �����θ� ���ߴ� ��찡 ���� �ʳ���?\n");
				printf("�׸�ŭ ����� ��ġ�� Ȯ�������� ���⼭ ������ ����\n");
				printf("������ ����̶�� �������� �ִ°�!\n");
				printf("���δ� ������ �����ֵ��� �սô�\n");
				getch();
				system("cls");
			}
			else if(num1==15&&result==2)
			{
				printf("\t����� BŸ��\n");
				printf("������ ��̰� �Ϳ��� Ÿ��!\n");
				printf("������ ���� �ӿ� �¾��� ���߰� �ִ� ��ó�� ��̰� �ε巯�� ������ ������.\n");
				printf("��������κ��ʹ� �Ϳ��� �ް�, �������� ģ�ϰ�, �Ĺ��κ��ʹ� �ŷڸ� �޴� Ÿ���̳׿�.\n");
				printf("������ �����̶�� ���� �߾�︮�� ���\n");
				printf("�ٸ� �̼����Դ� �ŷ������� ������ �ʾ� ���ֿ� ����� ������ �ִ� Ÿ�������� �����ϼ���!\n");
				getch();
				system("cls");
			}
			else if(num1==15&&result==3)
			{
				printf("\t����� CŸ��\n");
				printf("���� ��ٷӰ� �������� Ÿ��!\n");
				printf("����� �𸣰� ����԰� �������� ���̴� Ÿ���̱���\n");
				printf("�ڱ� �����δ� ����� ǥ���� �ϰ� �ִٰ� ���������� Ÿ�ε��� ������ϰ��ֳ׿�.\n");
				printf("����� ó�� ������ ������ ����� ���� ������ϴ� ������ ũ�׿�\n");
				printf("���� ����ϸ� �������ϰ� �����ϸ� �����Ҽ��� ������ ������ ���� ���������ϴ�.\n");
				printf("�켱�� �����⿡ ���� �ͱ���̴� ���� ������ ���׿�\n");
				getch();
				system("cls");
			}

			else if(num1==15&&result==4)
			{
				printf("\t����� DŸ��\n");
				printf("�����ϰ� Ȱ���� Ÿ��!\n");
				printf("��� ��ſ��ϴ� �¾�� ���� ������ ���.\n");
				printf("���� �ֺ��� ���̴� ����� ���� ���̱���.\n");
				printf("���� ������ ��ġ�� �����, ����� ã�ƿ� ����� �����ϱ� ������մϴ�.\n");
				printf("���� ���������� ������ �������� ���� ����� ��Ʈ������ ���ߵ� ���ɼ��� ���ƺ��̳׿�\n");
				printf("�ٸ�������� ������ �Ǵ°͵� ������, ����� ���� �Ű�Ẹ�� ���� ����.\n");
				getch();
				system("cls");
			}
			else if(num1==15&&result==5)
			{
				printf("\t����� EŸ��\n");
				printf("�˽��޽� �Ұ������� Ÿ��!\n");
				printf("���� ������ ���谡 �ΰ��� ���� �����ϰ� ������ ������ �״��� ã��� ��ƽ��ϴ�.\n");
				printf("�Ƹ��� ��ŵ� �׷��� �� �� ���� �κ��� ���� �����鼭 ���ÿ� ���� �׷������ �����Ͻô±���.\n");
				printf("����� �������� ��Ű� ����ϴٰ� ����ϸ� �Ⱦ��ϴ� ��Ÿ���̸鼭 ��������\n");
				printf("�뼱�� �����ϴ�, ������ ������ ���⿡ ��� �߱��ϴ��� �����ϱ� �����Ÿ���Դϴ�\n");
				getch();
				system("cls");
			}
	}
	system("cls");
	return 0;
}



void gotoxy(int a2, int b2, char*s) { //x���� 2x�� ����, ��ǥ���� �ٷ� ���ڿ��� �Է��� �� �ֵ��� printf�Լ� ����  
COORD pos={2*a2, b2};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
    printf("%s",s);
}
void showvar(int a3, int b3) { //x���� 2x�� ����, ��ǥ���� �ٷ� ���ڿ��� �Է��� �� �ֵ��� printf�Լ� ����  
COORD pos={2*a3, b3};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
    printf("%d",speed);
}
void draw_map(void){ //�� �׵θ� �׸��� �Լ� 
    int i,j;
    for(i=0;i<MAP_WIDTH;i++){
        gotoxy(MAP_X+i,MAP_Y,"��");
    }
    for(i=MAP_Y+1;i<MAP_Y+MAP_HEIGHT-1;i++){
        gotoxy(MAP_X,i,"��");
        gotoxy(MAP_X+MAP_WIDTH-1,i,"��");
    }
    for(i=0;i<MAP_WIDTH;i++){
        gotoxy(MAP_X+i,MAP_Y+MAP_HEIGHT-1,"��");
    }
gotoxy(25,25,"��");
}
int loseLife(void){
if ((obstacleX[0] ==23&&obstacleY[0]==25)||(obstacleX[0] ==25&&obstacleY[0]==23)||(obstacleX[0] ==27&&obstacleY[0]==25)||(obstacleX[0] ==25&&obstacleY[0]==27))
{
life--;
count++;
gotoxy(46-count, 12, " ");
 if (life == 4){
gotoxy(41,30," ");
gotoxy(41, 30, "��: �� �ױ�ȴ�"); 
}
 if (life == 3){
gotoxy(41, 30, " ");
gotoxy(41, 30, "��: �� �� ����"); 
}
else if(life == 2){
gotoxy(41, 30, " ");
gotoxy(41, 30, "��: ����        ");
}
else if (life==1){
gotoxy(41, 30, " ");
gotoxy(41, 30, "��: ���ߴ٤�������");
}

else if(life == 0){
printf("gameover");
gotoxy(25,25," ");


}
}
}
void obstacleGenerator(void){
int a3, fornumber,  fornumber1, chr, key;
gotoxy(10,15,"��");Sleep(50);
gotoxy(10,15,"�ȳ�");Sleep(50);
gotoxy(10,15,"�ȳ���");Sleep(50);
gotoxy(10,15,"�ȳ��ϼ�");Sleep(50);
gotoxy(10,15,"�ȳ��ϼ���!");Sleep(50);
gotoxy(10,15,"�ȳ��ϼ���! ��");Sleep(50);
gotoxy(10,15,"�ȳ��ϼ���! ����");Sleep(50);
gotoxy(10,15,"�ȳ��ϼ���! ������");Sleep(50);
gotoxy(10,15,"�ȳ��ϼ���! ������ ��");Sleep(50);
gotoxy(10,15,"�ȳ��ϼ���! ������ ����");Sleep(50);
gotoxy(10,15,"�ȳ��ϼ���! ������ ������");Sleep(50);
gotoxy(10,15,"�ȳ��ϼ���! ������ �����Ұ�");Sleep(50);
gotoxy(10,15,"�ȳ��ϼ���! ������ �����ҰԿ�!");Sleep(100);
gotoxy(10,15,"�ȳ��ϼ���! ������ �����ҰԿ�! .");Sleep(100);
gotoxy(10,15,"�ȳ��ϼ���! ������ �����ҰԿ�! ..");Sleep(100);
gotoxy(10,15,"�ȳ��ϼ���! ������ �����ҰԿ�! ...");Sleep(1000);
gotoxy(10,15," ");
gotoxy(10,15,"ȭ");Sleep(50);
gotoxy(10,15,"ȭ��");Sleep(50);
gotoxy(10,15,"ȭ��Ű");Sleep(50);
gotoxy(10,15,"ȭ��Ű��");Sleep(50);
gotoxy(10,15,"ȭ��Ű�� ��");Sleep(50);
gotoxy(10,15,"ȭ��Ű�� ����");Sleep(50);
gotoxy(10,15,"ȭ��Ű�� ���ƿ�");Sleep(50);
gotoxy(10,15,"ȭ��Ű�� ���ƿ���");Sleep(50);
gotoxy(10,15,"ȭ��Ű�� ���ƿ��� ȭ");Sleep(50);
gotoxy(10,15,"ȭ��Ű�� ���ƿ��� ȭ��");Sleep(50);
gotoxy(10,15,"ȭ��Ű�� ���ƿ��� ȭ����");Sleep(50);
gotoxy(10,15,"ȭ��Ű�� ���ƿ��� ȭ���� ��");Sleep(50);
gotoxy(10,15,"ȭ��Ű�� ���ƿ��� ȭ���� ����");Sleep(50);
gotoxy(10,15,"ȭ��Ű�� ���ƿ��� ȭ���� ������");Sleep(50);
gotoxy(10,15,"ȭ��Ű�� ���ƿ��� ȭ���� ��������!");Sleep(1000);
gotoxy(38,10,"��");Sleep(100);
gotoxy(38,10,"�� ");Sleep(100);
gotoxy(38,10,"�� ��");Sleep(100);
gotoxy(38,10,"�� �ټ�");Sleep(100);
gotoxy(38,10,"�� �ټ���");Sleep(100);
gotoxy(38,10,"�� �ټ�����");Sleep(100);
gotoxy(38,10,"�� �ټ����� ��");Sleep(100);
gotoxy(38,10,"�� �ټ����� ���");Sleep(100);
gotoxy(38,10,"�� �ټ����� �����");Sleep(100);
gotoxy(38,10,"�� �ټ����� �������");Sleep(100);
gotoxy(38,10,"�� �ټ����� ������� g!");Sleep(100);
gotoxy(38,10,"�� �ټ����� ������� ga!");Sleep(100);
gotoxy(38,10,"�� �ټ����� ������� gam!");Sleep(100);
gotoxy(38,10,"�� �ټ����� ������� game!");Sleep(100);
gotoxy(38,10,"�� �ټ����� ������� gameo!");Sleep(100);
gotoxy(38,10,"�� �ټ����� ������� gameov!");Sleep(100);
gotoxy(38,10,"�� �ټ����� ������� gameove!");Sleep(100);
gotoxy(38,10,"�� �ټ����� ������� gameover!");Sleep(1500);


gotoxy(10,15, "                                      ");
gotoxy(38,10,"                                       ");
gotoxy(10,15,"���� �غ����?"); Sleep(1500);
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
  gotoxy(obstacleX[0],obstacleY[0],"��");
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
gotoxy(dirX[0], dirY[0], "��");
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
  gotoxy(obstacleX[0],obstacleY[0],"��");
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
gotoxy(dirX[0], dirY[0], "��");
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
  gotoxy(obstacleX[0],obstacleY[0],"��");
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
gotoxy(dirX[0], dirY[0], "��");
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
  gotoxy(obstacleX[0],obstacleY[0],"��");
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
gotoxy(dirX[0], dirY[0], "��");
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
gotoxy(30,10,"��");Sleep(50);
gotoxy(30,10,"��");Sleep(50);
gotoxy(30,10,"�̤�");Sleep(50);
gotoxy(30,10,"�̴�");Sleep(50);
gotoxy(30,10,"�̴Ϥ�");Sleep(50);
gotoxy(30,10,"�̴ϰ�");Sleep(50);
gotoxy(30,10,"�̴ϰԤ�");Sleep(50);
gotoxy(30,10,"�̴ϰ���");Sleep(50);
gotoxy(30,10,"�̴ϰ��� ��");Sleep(50);
gotoxy(30,10,"�̴ϰ��� ó");Sleep(50);
gotoxy(30,10,"�̴ϰ��� õ");Sleep(50);
gotoxy(30,10,"�̴ϰ��� õ��");Sleep(1500);
gotoxy(30,10,"�̴ϰ��� õ");Sleep(50);
gotoxy(30,10,"�̴ϰ��� ó");Sleep(50);
gotoxy(30,10,"�̴ϰ��� ��");Sleep(50);
gotoxy(30,10,"�̴ϰ���");Sleep(50);
gotoxy(30,10,"�̴ϰ��� ��");Sleep(50);
gotoxy(30,10,"�̴ϰ��� ��");Sleep(50);
gotoxy(30,10,"�̴ϰ��� ����");Sleep(50);
gotoxy(30,10,"�̴ϰ��� ����");Sleep(50);
gotoxy(30,10,"�̴ϰ��� ����");Sleep(1500);

	printf("\n\t\t1. �� �� �ٿ�\n");
	printf("\t\t2. ȭ�츷�� ����\n");
	printf("\t\t3. �����\n");
	printf("\t\t4. �������� ����\n");
	printf("\t\t5. �ɸ��׽�Ʈ\n\n\n");
	printf("\t\t6. ���� �̵�"); 
	printf("\t\t������ �����Ͻÿ�:");
	while(1) {
		int direction, direction2; 
		scanf("%d", &direction);
		
		if(direction == 1){
			system("cls");
			 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
      Sleep(500);             
      system("cls"); 
			upAndDownGame(); 
			printf("1. �޴���\n");
			printf("2. ����\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
				system("cls");
				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
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
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
      Sleep(500);             
      system("cls"); 
			arrowGame();
			Sleep(1000);
			system("cls");
			printf("1. �޴���\n");
			printf("2. ����\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
								system("cls");

				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
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
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
      Sleep(500);             
      system("cls"); 
			quizShow();
			printf("1. �޴���\n");
			printf("2. ����\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
								system("cls");

				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
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
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
      Sleep(500);             
      system("cls"); 
			mathcal(); 
			printf("1. �޴���\n");
			printf("2. ����\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
								system("cls");

				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
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
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
      Sleep(500);             
      system("cls"); 
			psyTest(); 
			printf("1. �޴���\n");
			printf("2. ����\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
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
			printf("\t\t���� �ٿ�: ��ä��\n");
			printf("\t\tȭ�� ����: ������\n");
			printf("\t\t���� ��: �ֽ���\n");
			printf("\t\t�������� ����: �迹��\n");
			printf("\t\t�ɸ� �׽�Ʈ: �����\n");
			Sleep(2000);
			printf("1. �޴���\n");
			printf("2. ����\n");
			scanf("%d", &direction2);
			if (direction2 == 1){
				system("cls");
				 printf("               \n\n\n\n\n\n\n\n\n");
      printf("                              Loading . . . . .\n");
      printf("                             �����������0%%\r");
      Sleep(200);          
      printf("                             �����������10%%\r");
      Sleep(300);         
      printf("                             �����������20%%\r");
      Sleep(100);            
      printf("                             �����������30%%\r");
      Sleep(100);
      printf("                             �����������40%%\r");
      Sleep(100);
      printf("                             �����������50%%\r");
      Sleep(100);
      printf("                             �����������60%%\r");
      Sleep(100);
      printf("                             �����������70%%\r");
      Sleep(100);
      printf("                             �����������80%%\r");
      Sleep(100);
      printf("                             �����������90%%\r");
      Sleep(100);
      printf("                             �����������100%%\r");
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
