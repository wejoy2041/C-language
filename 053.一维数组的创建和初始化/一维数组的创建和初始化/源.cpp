#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//创建一个数组-存放整型-10个
	int arr1[10];
	char arr2[5];//数组大小应为常量，不能为变量

	//数组的初始化
	//数组的初始化是指，在创建数组的同时给数组的内容一些合理初始值（初始化）
	int arr3[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
	char arr4[5] = { 'a','b' ,98};//98='b'
	char arr5[5] = "ab";//{'a','b','/0'}
	char arr6[] = "abcdef";//共7个元素
	printf("%d\n", sizeof(arr6));
	//sizeof计算arr4所占空间的大小
	//7个元素-char 7*1=7
	printf("%d\n", strlen(arr6));
	//strlen求字符串的长度-'\0'之前的字符个数
	//[a b c d e f \0]
	//6

	char arr7[] = "abc";
	char arr8[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr7));//4
	printf("%d\n", sizeof(arr8));//3
	printf("%d\n", strlen(arr7));//3
	printf("%d\n", strlen(arr8));//随机值
	return 0;
}

//数组的创建
//    数组是一组相同类型元素的集合
//    type_t arr_name [const_n];
//    type_t 是指数组的元素类型
//    const_n 是一个常量表达式，用来指定数组的大小

//1.strlen和sizeof没有什么关联
//2.strlen是求字符串长度的-只能针对字符串求长度-库函数-使用得引头文件
//3.sizeof计算变量，数组，类型的大小-单位是字节-操作符