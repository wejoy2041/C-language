#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
int main()
{
	//结构体   人/书 - 复杂对象  struct-结构体关键字
	//人：名字+身高+年龄+身份号码+...
	//书：书字+作者+出版社+定价+书号+...
	//复杂对象 - 结构体 - 我们自己创造出来的一种类型

	//利用结构体类型-创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	printf("书名:%s\n", b1.name);
	printf("价格:%d\n", b1.price);

	strcpy(b1.name,"C++");//strcpy-string copy-字符串拷贝-库函数-string.h(头文件)
	printf("%s\n", b1.name);

	b1.price = 15;  //price是变量，可以直接修改，数组不可以（数组名本质上是一个地址）
	printf("修改后的价格:%d\n", b1.price);

	struct Book* pb = &b1;
	//利用pb打印出我的书名和价格
	printf("%s\n", ( *pb ).name);
	printf("%d\n", ( *pb).price);   //.   结构体变量.成员
	printf("%s\n", pb->name);       //->  结构体指针->成员
	printf("%d\n", pb->price);
	return 0;
}