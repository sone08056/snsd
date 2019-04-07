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

	int ny = 5; // 一个靶子，放在第一行，ny列上
	int isKilled = 0;
	
	while (1)
	{
		system("cls");   // 清屏函数

		// 
		if (!isKilled)  // 输出靶子
		{
			for (j=0;j<ny;j++)
				printf(" ");
			printf("+\n");
		}

		if (isFire==0) // 输出飞机上面的空行
		{
			for(i=0;i<x;i++)
				printf("\n");
		}
		else   // 循环打印出子弹
		{
			for(i=0;i<x;i++)
			{
				for (j=0;j<y;j++)
					printf(" ");
				printf("  |\n");
			}
			if (y+2==ny)
				isKilled = 1; // 击中靶子
			isFire = 0;      //子弹消失
		}
		
		// 通过循环打印出一个复杂的飞机图案
		for (j=0;j<y;j++)
			printf(" ");		
		printf("  *\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf("*****\n");
		for (j=0;j<y;j++)
			printf(" ");
		printf(" * * \n");

		if(kbhit())  // 判断键盘是否有输入
		{
			input = getch();            // 不必输入回车
			if (input == 'a')   
				y--;                    // 飞机左移
			if (input == 'd')
				y++;                    // 飞机右移
			if (input == 'w')
				x--;                   // 飞机上移
			if (input == 's')
				x++;                   // 飞机下移
			if (input == ' ')
				isFire = 1;
		}
	}	
}