#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void main()
{
	int i,j;
	int x = 0;
	int y = 5;//С�������
	int velocity_x = 1;
	int velocity_y = 1;
	int top = 0;  //����߽�
	int bottom = 10;
	int left = 0;
	int right = 20;

	while(1)
	{
		x = x + velocity_x;
		y = y + velocity_y;
		system("cls");  // ����
		
		for(i=0;i<x;i++)  //ѭ����ӡ��С������Ŀ���
			printf("\n");
	    for(j=0;j<y;j++)   //С����ߵĿո�
		    printf(" ");
	    printf("o\n");  //��ӡС��

		Sleep(50);  //�������ɺ���

		if((x==top)||(x==bottom))     //�����±߽����ٶȷ���
			velocity_x = -velocity_x;
		if((y==left)||(y==right))
			velocity_y = -velocity_y;

	}


}