#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//递归的方式
int count = 0;
int Fib(int n)
{
	//测试第3个斐波那契数的计算次数
	if (n == 3)
	{
		count++;
	}

	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
//当求第50个斐波那契数时，计算时间太长，有大量重复计算
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//...

//循环的方式
int Fibxh(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD - 测试驱动开发（先考虑如何使用函数，在去实现函数）
	ret = Fib(n);
	ret = Fibxh(n);
	printf("ret=%d\n", ret);
	printf("count=%d\n", count);
	return 0;
}

//斐波那契数列
//    1 1 2 3 5 8 13 21 34 55 ......