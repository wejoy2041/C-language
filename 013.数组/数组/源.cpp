#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10}; //����һ�����10���������ֵ����飨�±�Ĭ�ϴ�0��ʼ��
	char ch[20];
	printf("%d\n", arr[4]);             //�±�ķ�ʽ����Ԫ�أ�arr[�±�]

	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	
	return 0;
}