#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;
	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", sizeof(a));   
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);   //��������ȥ����
	//printf("%d\n", sizeof int);  ����

	printf("%d\n", sizeof(arr));  //���������С����λ���ֽ�
	printf("%d\n", sizeof(arr)/ sizeof(arr[0]));
	return 0;
}