#define _CRT_SECURE_NO_WARNINGS 1    //scanf,strcpy,strlen,strcat(����ȫ��
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d,%d", &num1, &num2);    //��������-ʹ�����뺯��scanf.ȡ��ַ����&
	int sum = 0;                     //C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	sum = num1 + num2;               //�����������ĺ�
	printf("sum=%d\n", sum);
	return 0;
}
//scanf��c�����ṩ��
//scanf_s���Ǳ�׼c�����ṩ�ģ���vs�������ṩ��
//��scanf_s�����п�ƽ̨�Ի����ֲ��