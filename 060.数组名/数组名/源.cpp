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
	//sizeof(��������-��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
	//&������ -�����������������飬&��������ȡ��������������ĵ�ַ
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);//������Ϊ��Ԫ�صĵ�ַ
	return 0;
}