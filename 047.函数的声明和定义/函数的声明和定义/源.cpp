#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}


//函数的声明：
//   1.告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，无关紧要。
//   2.函数的声明一般出现在函数的使用之前。要满足先声明后使用。
//   3.函数的声明一般要放在头文件中的。

//函数定义：
//   函数的定义是指函数的具体实现，交待函数的功能实现。