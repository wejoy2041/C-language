#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//������һ��Ҫ����������Ѿ�����
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
				flag = 0;//���������������ʵ����ȫ����
			}
		}
		if (flag == 1)
		{
			break;//break����ѭ�������
		}
	}
}
int main()
{
	int arr[] = { 8,9,7,6,5,3,4,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr���������ų�����
	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ

	bubble_sort(arr,sz);//ð��������
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//ð������10��Ԫ�أ�9��ð������
//10 9 8 7 6 5 4 3 2 1 
//9 10 8 7 6 5 4 3 2 1
//9 8 10 7 6 5 4 3 2 1
//...
//9 8 7 6 5 4 3 2 1 10      һ��ð������
//..,
//1 2 3 4 5 6 7 8 9 10 