#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
		
			ret = ret * i;
		}
		//n的阶乘
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);

	//上述代码计算效率不高，优化如下
	int i1 = 0;
	int n1= 0;
	int ret1 = 1;
	int sum1 = 0;
	for (n1 = 1; n1 <= 3; n1++)
	{
		ret1 = ret1 * n1;
		sum1 = sum1 + ret1;
	}
	printf("sum1=%d\n", sum1);
	return 0;
}