#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>//数学库函数
int main()
{
	int i = 0;
	//int j = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)//跳过所有偶数
	{
		//判断i是否为素数
		//素数判断的规则
		//试除法
		//产生2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//sqrt:开平方的数学库函数
		{
			if (i % j == 0)
				break;
		}
		if (j>sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	
	printf("\n%d\n", count);
	return 0;
}
//i=a*b a,b中至少有一个数字<=开平方i
//素数求解的n种境界