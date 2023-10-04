#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//stlen头文件
#include <windows.h>//sleep头文件
int main()
{
	//welcome to bit!!!!!!
	//####################
	//w##################!
	//we################!!
	//......
	//welcome to bit!!!!!!

	//char arr[]="abc";
	//[a b c \0]
	//4-2
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;  //两种代码都可以实现计算元素的右下标
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//休息一秒
		Sleep(1000);//1000毫秒
		system("cls");//执行系统命令的一个函数  cls-清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}