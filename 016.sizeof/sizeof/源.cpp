#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", sizeof(a));   
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);   //变量可以去括号
	//printf("%d\n", sizeof int);  报错

	printf("%d\n", sizeof(arr));  //计算数组大小，单位是字节
	printf("%d\n", sizeof(arr)/ sizeof(arr[0]));
	return 0;
}