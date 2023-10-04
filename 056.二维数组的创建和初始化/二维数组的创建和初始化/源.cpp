#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//二维数组的创建
	int arr1[3][4];//3行4列
	char arr2[3][5];
	double arr3[2][4];
	//二维数组的初始化
	int arr4[3][4] = { 1,2,3,4,5 };
	int arr5[3][4] = { {1,2,3},{4,5} };
	int arr6[][4] = { 1,2,3,4,5,6,7,8 };//二维数组行可省略，列不可省略
	return 0;
}