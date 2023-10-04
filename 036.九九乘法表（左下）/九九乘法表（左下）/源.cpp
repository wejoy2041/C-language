#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	//确定打印9行
	for (i = 0; i <= 9; i++)
	{
		//打印一行
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//%2d表示打印该数字时打印两位
		}                                     //%-2d表示左对齐
		printf("\n");
	}
	return 0;
}