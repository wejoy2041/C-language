#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int add(int x, int y)    //自定义函数
{
	int z = x + y;
	return z;
}
int main()
{
	int sum1 = 0;
	int sum2 = 0;
	int num1 = 10;
	int num2 = 20;
	int a = 2;
	int b = 6;

	sum1=add(num1, num2);
	sum2=add(a, b);
	printf("%d\n",sum1);
	printf("%d\n", sum2);

	
	return 0;
}