#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//����������1��������������0
int is_prime(int n)
{
	//2 -> n-1
	int j = 0;
	for (j = 2; j < n; j++) 
	//�����Ż���for(j=2;j<=sqrt(n);j+=2)
	{
		if (n % j == 0)
			return 0;
	}
	return 1; //if(j==n)
}

int main()
{
	//��ӡ100-200֮�������
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}