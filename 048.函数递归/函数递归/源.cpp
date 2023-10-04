#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//递归的两个必要条件：
//        存在限制条件，当满足这个限制条件的时候，递归便不再继续
//        每次递归调用之后越来越接近这个限制条件
void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}

int main()
{
	printf("hehe\n");
	main();            //会出现栈溢出
	test(1);           //也会出现栈溢出
	return 0;
}

//程序调用自身的编程技巧称为递归
//一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法
//递归策略只需少量的程序就可描述出解题过程所需要的多次重复计算，大大地减少了程序的代码量
//递归的主要思考方式在：把大事化小
//递归常见的错误：栈溢出（stack overflow）

//内存开辟的区域：
//  栈区：局部变量，函数形参
//  堆区：动态开辟的内存，malloc,calloc
//  静态区：全局变量，static修饰的变量



//函数递归的经典例题：
// 1.汉诺塔问题

//2.青蛙跳台阶问题（出自《剑指offer》）
//n个台阶
//一次可以跳1个台阶
//一次也可以跳2个台阶
//这只青蛙要跳到第n个台阶，有多少种跳法