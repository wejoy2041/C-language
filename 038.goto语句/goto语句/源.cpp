#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("hello\n");
	goto again;
	printf("你好\n");
again:
	printf("hehe\n");
	return 0;
}
//C语言中提供了可以随意使用的goto语句和标记跳转的标号
//从理论上goto语句是没有必要的，实践中没有goto语句也可以很容易的写出代码
//最常见的用法就是终止程序在某些深处嵌套的结构的处理过程，例如一次跳出两层或多层循环
//这种情况使用break是达不到目的的，它只能从最内层循环退出到上一层的循环
//在代码中尽量少的使用goto语句，容易导致逻辑混乱