#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>//��ѧ�⺯��
int main()
{
	int i = 0;
	//int j = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)//��������ż��
	{
		//�ж�i�Ƿ�Ϊ����
		//�����жϵĹ���
		//�Գ���
		//����2->i-1
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//sqrt:��ƽ������ѧ�⺯��
		{
			if (i % j == 0)
				break;
		}
		if (j>sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	
	printf("\n%d\n", count);
	return 0;
}
//i=a*b a,b��������һ������<=��ƽ��i
//��������n�־���