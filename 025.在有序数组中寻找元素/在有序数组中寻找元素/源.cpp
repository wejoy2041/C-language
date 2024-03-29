#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//写一个代码，在arr数组（有序的）中找到7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是：%d\n", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("找不到\n");
	}

	//上述代码算法较差，优化如下（二分查找算法）
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k1 = 7;
	int sz1 = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz1 - 1;//右下标

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr1[mid] > k1)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k1)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标为：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}

//折半查找算法/二分查找算法 查找次数为log以2为底的n（元素个数为n）