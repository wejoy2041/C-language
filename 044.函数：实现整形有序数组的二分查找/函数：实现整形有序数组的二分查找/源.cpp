#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int binary_search(int arr[],int k,int sz)//本质上arr是一个指针，其大小为4或8
{
	//算法的实现
	//int sz = sizeof(arr) / sizeof(arr[0]);//此求法错误，因传入的arr为一个地址
	int left = 0;
	int right = sz - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;//中间元素的下标
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	//二分查找
	//在一个有序数组中查找具体的某个数
	//如果找到了返回这个数的下标，找不到返回-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret=binary_search(arr,k,sz);//arr实参传入到形参中，传递过去的是数组arr首元素的地址
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}