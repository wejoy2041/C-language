#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//strcpy
int main()
{
	//strcpy
	char arr1[] = "bit";
	char arr2[20] = "#####";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);//会把arr1中的\0也拷贝到arr2中，导致后面的#无法输出（\0为结束标志）

	//memset
	//memory - 内存  set - 设置
	char arr3[] = "hello world";
	memset(arr3, '*', 5);
	printf("%s\n", arr3);
	//***** world
	return 0;
}
//函数是一个大型程序中的某部分代码，由一个或多个语句块组成。它负责完成某项特定任务，而且相较于其他代码，具被相对的独立性。
//一般会有输入参数并有返回值，提供对过程的封装和细节的隐藏。这些代码通常被集成为软件库。
//C语言函数分类： 库函数  自定义函数
//     printf 将信息按照一定的格式打印到屏幕上
//     strcpy 在编程的过程中我们会频繁的做一些字符串的拷贝工作
//     pow    在编程是我们也计算，总是会计算n的k次方这样的运算

//库函数：（频繁的使用一个功能）
//        IO函数(printf,scanf) 字符串操作函数（strlen) 字符操作函数
//        内存操作函数(memset) 时间/日期函数(time) 数学函数(sqrt) 其他库函数
