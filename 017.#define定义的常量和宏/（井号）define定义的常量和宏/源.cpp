#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define MAX 100  //#define-定义标识符常量   #define可以定义宏-带参数
//函数的实现
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//宏的定义
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	//int i = MAX;定义标识符常量

	int a = 10;
	int b = 20;
	//函数
	int max1 = Max(a, b);
	printf("max1=%d\n", max1);
	//宏的方式
	int max2 = MAX(10, 20);
	//max=MAX(a>b?a:b);
	printf("max2=%d\n", max2);
	return 0;
}