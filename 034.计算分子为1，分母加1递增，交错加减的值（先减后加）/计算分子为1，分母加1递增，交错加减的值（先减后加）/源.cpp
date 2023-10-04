#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//计算1/1-1/2+1/3-1/4+1/5-......+1/99-1/100
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;//分子，分母有一个必须为浮点型数字，否则输出结果为0
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}