#define _CRT_SECURE_NO_WARNINGS 1    //scanf,strcpy,strlen,strcat(不安全）
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d,%d", &num1, &num2);    //输入数据-使用输入函数scanf.取地址符号&
	int sum = 0;                     //C语言语法规定，变量要定义在当前代码块的最前面
	sum = num1 + num2;               //计算两个数的和
	printf("sum=%d\n", sum);
	return 0;
}
//scanf是c语言提供的
//scanf_s不是标准c语言提供的，是vs编译器提供的
//用scanf_s不具有跨平台性或可移植性