#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char ch = 'a';                          //�ַ���
	printf("%c\n", ch);

	int age = 20;                           //����
	printf("%d\n", age);

	long num = 100;                         //������
	printf("%d\n", num);

	float f = 5.0;                          //�����͵�����
	printf("%f\n", f);

	double d = 3.14;                        //������˫����
	printf("%lf\n", d);

	return 0;
}


//%d-����
//%c-�ַ�
//%f-��������
//%p-�Ե�ַ��ʽ��ӡ
//%x-16��������