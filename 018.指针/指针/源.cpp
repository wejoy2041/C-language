#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;//申请了4个字节的空间
	//&a;取地址
	int* p = &a;//p是一个变量-指针变量
	//有一种变量是用来存放地址的-指针变量
	printf("%p\n", &a);  //%p打印地址
	printf("%p\n", p);
	*p = 20;  //* - 解引用操作符/间接访问操作符
	printf("a=%d\n", a);

	char ch = 'w';
	char* pc = &ch; //指针的名字叫 pc
	printf("%d\n", sizeof(pc));//8
	printf("%d\n", sizeof(*pc));//1
	printf("%d\n", sizeof(ch));//1
	*pc = 'a';
	printf("%c\n", ch);

	double d = 3.14;
	double* pd = &d;
	*pd = 5.5;
	printf("d=%lf\n", d);
	printf("d=%lf\n", *pd);
	printf("%d\n", sizeof(pd));//8              32位-4字节  64位-8字节（跟类型无关）
	printf("%d\n", sizeof(*pd));//8
	printf("%d\n", sizeof(d));//8
	
	printf("\n");
	printf("%d\n", sizeof(char*));//8
	printf("%d\n", sizeof(int*));//8
	printf("%d\n", sizeof(short*));//8
	printf("%d\n", sizeof(double*));//8
	return 0;
}
//内存：地址->空间
//如何产生地址：32位-32根地址线/数据线  正电-1  负电-0 会产生2的32次方的二进制序列（内存编号）
//一个空间即一个字节byte
//bit-byte-kb-mb-gb-tb-pb   计算机单位（从左向右依次增大）
//指针的大小在32位平台是4个字节，64位平台是8个字节

//8G-内存 512G-硬盘