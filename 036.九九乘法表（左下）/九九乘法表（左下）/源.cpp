#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	//ȷ����ӡ9��
	for (i = 0; i <= 9; i++)
	{
		//��ӡһ��
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//%2d��ʾ��ӡ������ʱ��ӡ��λ
		}                                     //%-2d��ʾ�����
		printf("\n");
	}
	return 0;
}