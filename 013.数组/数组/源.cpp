#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10}; //定义一个存放10个整数数字的数组（下标默认从0开始）
	char ch[20];
	printf("%d\n", arr[4]);             //下标的方式访问元素：arr[下标]

	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	
	return 0;
}