#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	//嵌套调用
	three_line();

	//链式访问  （把一个函数的返回值作为另外一个函数的参数)
	int len = 0;
	//1
	len = strlen("abc");
	printf("%d\n", len);
	//2
	printf("%d\n", strlen("abc"));


	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值为打印字符的个数

	return 0;
}

//函数和函数之间可以有机的组合的