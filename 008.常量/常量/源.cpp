#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//枚举常量(不能被修改)
//三原色：红，黄，蓝
//星期：1，2，3，4，5，6，7
//枚举关键字：enum
//MALE,FEMALE,SECRET-枚举常量
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
#define MAX 10
int main()
{
	//enum Sex s=FEMALE;
	enum Sex a = MALE;  //枚举类型所创建的变量可以修改，即'a'
	a = FEMALE;
	//SECRET=6（报错）

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	//#define定义的标识符常量
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);

	const int n = 10;           //n是变量，但是又有长属性，所以我们说n是常变量
	//int arr[n]={0};             数组不能使用长变量
	//n = 20;                   
	//const - 常属性
	//num为const修饰的常变量
	const int num = 4;
	printf("%d\n", num);
	//num = 8;                  //const修饰num为长变量，不能被修改
	//printf("%d\n", num);
	return 0;
}
//字面常量  3； 100；