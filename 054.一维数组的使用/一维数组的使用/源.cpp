#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abcdef";//[a][b][c][d][e][f][\0]
	//printf("%c\n", arr[3]);
	int i = 0;
	int len = strlen(arr1);
	for (i = 0; i < len; i++)
	{
		printf("%c ", arr1[i]);
	}

	//数组是使用下标来访问的，下标是从0开始
	//数组的大小可以通过计算得到
	int arr2[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr2[j]);
	}
	return 0;
}

//对于数组的使用我们之前介绍了一个操作符：[]，下标引用操作符，它其实就数组访问的操作符
