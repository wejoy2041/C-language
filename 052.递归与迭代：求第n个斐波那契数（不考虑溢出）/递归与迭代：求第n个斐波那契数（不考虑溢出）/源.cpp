#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ݹ�ķ�ʽ
int count = 0;
int Fib(int n)
{
	//���Ե�3��쳲��������ļ������
	if (n == 3)
	{
		count++;
	}

	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
//�����50��쳲�������ʱ������ʱ��̫�����д����ظ�����
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//...

//ѭ���ķ�ʽ
int Fibxh(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD - ���������������ȿ������ʹ�ú�������ȥʵ�ֺ�����
	ret = Fib(n);
	ret = Fibxh(n);
	printf("ret=%d\n", ret);
	printf("count=%d\n", count);
	return 0;
}

//쳲���������
//    1 1 2 3 5 8 13 21 34 55 ......