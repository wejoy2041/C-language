#include <stdio.h>
int a = 1;                              //ȫ�ֱ����������������������
int main()
{
	{                                    //�ֲ������������������������ڿ�ʼ�����������������ڽ���
		int a = 10;
		printf("a=%d\n", a); //ok
	}
	printf("a=%d\n", a);     //error
	return 0;
}