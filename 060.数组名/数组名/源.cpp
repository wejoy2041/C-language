#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);

	int sz = sizeof(arr) / sizeof(arr[0]);
	//sizeof(数组名）-数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	//&数组名 -数组名代表整个数组，&数组名，取出的是整个数组的地址
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);//数组名为首元素的地址
	return 0;
}