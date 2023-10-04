#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？（0/1）：");
	scanf("%d", &input);
	if (input == 1)
		printf("好offer\n");
	else
		printf("卖红薯\n");
	return 0;
}