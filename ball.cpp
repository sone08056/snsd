#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void main()
{
	int i,j;
	int x = 0;
	int y = 5;//小球的坐标
	int velocity_x = 1;
	int velocity_y = 1;
	int top = 0;  //定义边界
	int bottom = 10;
	int left = 0;
	int right = 20;

	while(1)
	{
		x = x + velocity_x;
		y = y + velocity_y;
		system("cls");  // 清屏
		
		for(i=0;i<x;i++)  //循环打印出小球上面的空行
			printf("\n");
	    for(j=0;j<y;j++)   //小球左边的空格
		    printf(" ");
	    printf("o\n");  //打印小球

		Sleep(50);  //休眠若干毫秒

		if((x==top)||(x==bottom))     //在上下边界是速度反向
			velocity_x = -velocity_x;
		if((y==left)||(y==right))
			velocity_y = -velocity_y;

	}


}