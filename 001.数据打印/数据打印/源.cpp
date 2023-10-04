#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char ch = 'a';                          //字符型
	printf("%c\n", ch);

	int age = 20;                           //整型
	printf("%d\n", age);

	long num = 100;                         //长整型
	printf("%d\n", num);

	float f = 5.0;                          //浮点型单精度
	printf("%f\n", f);

	double d = 3.14;                        //浮点型双精度
	printf("%lf\n", d);

	return 0;
}


//%d-整型
//%c-字符
//%f-浮点数字
//%p-以地址形式打印
//%x-16进制数字