#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
	int i,j;
	int x = 5; 
	int y = 10;
	char input;
	int isFire = 0;

	int ny = 5; // һ�����ӣ����ڵ�һ�У�ny����
	int isKilled = 0;
	
	while (1)
	{
		system("cls");   // ��������

		// 
		if (!isKilled)  // �������
		{
			for (j=0;j<ny;j++)
				printf(" ");
			printf("+\n");
		}

		if (isFire==0) // ����ɻ�����Ŀ���
		{
			for(i=0;i<x;i++)
				printf("\n");
		}
		else   // ѭ����ӡ���ӵ�
		{
			for(i=0;i<x;i++)
			{
				for (j=0;j<y;j++)
					printf(" ");
				printf("  |\n");
			}
			if (y+2==ny)
				isKilled = 1; // ���а���
			isFire = 0;      //�ӵ���ʧ
		}
		
		// ͨ��ѭ����ӡ��һ�����ӵķɻ�ͼ��
		for (j=0;j<y;j++)
			printf(" ");		
		printf("  *\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf("*****\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf(" * * \n");

		if(kbhit())  // �жϼ����Ƿ�������
		{
			input = getch();            // ��������س�
			if (input == 'a')   
				y--;                    // �ɻ�����
			if (input == 'd')
				y++;                    // �ɻ�����
			if (input == 'w')
				x--;                   // �ɻ�����
			if (input == 's')
				x++;                   // �ɻ�����
			if (input == ' ')
				isFire = 1;
		}
	}	
}