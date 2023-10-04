#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int is_leap_year(int y)//尽量不要在函数中打印，使代码具有可复用性
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是否为闰年
		if (1 == is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}