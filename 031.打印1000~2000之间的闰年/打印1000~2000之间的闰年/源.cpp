#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//�ж�year�Ƿ�Ϊ����
		//1 �ܱ�4�������Ҳ��ܱ�100����������
		//2 �ܱ�400����������
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
		//�ϴ���ɼ�Ϊ��
		/*
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
		*/
	}
	printf("\n%d\n", count);
	return 0;
}