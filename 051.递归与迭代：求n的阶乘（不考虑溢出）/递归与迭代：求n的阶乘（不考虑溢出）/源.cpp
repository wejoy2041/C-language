#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//循环方式
int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
//递归方式
int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}

int main()
{
	//求n的阶乘
	int n=0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac1(n);//循环的方式
	ret = Fac2(n);//递归的方式
	printf("%d\n", ret);
	return 0;
}