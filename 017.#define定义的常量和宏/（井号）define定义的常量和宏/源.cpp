#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define MAX 100  //#define-�����ʶ������   #define���Զ����-������
//������ʵ��
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//��Ķ���
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	//int i = MAX;�����ʶ������

	int a = 10;
	int b = 20;
	//����
	int max1 = Max(a, b);
	printf("max1=%d\n", max1);
	//��ķ�ʽ
	int max2 = MAX(10, 20);
	//max=MAX(a>b?a:b);
	printf("max2=%d\n", max2);
	return 0;
}