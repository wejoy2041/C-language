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

	//������ʹ���±������ʵģ��±��Ǵ�0��ʼ
	//����Ĵ�С����ͨ������õ�
	int arr2[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr2[j]);
	}
	return 0;
}

//���������ʹ������֮ǰ������һ����������[]���±����ò�����������ʵ��������ʵĲ�����
