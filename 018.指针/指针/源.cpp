#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10;//������4���ֽڵĿռ�
	//&a;ȡ��ַ
	int* p = &a;//p��һ������-ָ�����
	//��һ�ֱ�����������ŵ�ַ��-ָ�����
	printf("%p\n", &a);  //%p��ӡ��ַ
	printf("%p\n", p);
	*p = 20;  //* - �����ò�����/��ӷ��ʲ�����
	printf("a=%d\n", a);

	char ch = 'w';
	char* pc = &ch; //ָ������ֽ� pc
	printf("%d\n", sizeof(pc));//8
	printf("%d\n", sizeof(*pc));//1
	printf("%d\n", sizeof(ch));//1
	*pc = 'a';
	printf("%c\n", ch);

	double d = 3.14;
	double* pd = &d;
	*pd = 5.5;
	printf("d=%lf\n", d);
	printf("d=%lf\n", *pd);
	printf("%d\n", sizeof(pd));//8              32λ-4�ֽ�  64λ-8�ֽڣ��������޹أ�
	printf("%d\n", sizeof(*pd));//8
	printf("%d\n", sizeof(d));//8
	
	printf("\n");
	printf("%d\n", sizeof(char*));//8
	printf("%d\n", sizeof(int*));//8
	printf("%d\n", sizeof(short*));//8
	printf("%d\n", sizeof(double*));//8
	return 0;
}
//�ڴ棺��ַ->�ռ�
//��β�����ַ��32λ-32����ַ��/������  ����-1  ����-0 �����2��32�η��Ķ��������У��ڴ��ţ�
//һ���ռ伴һ���ֽ�byte
//bit-byte-kb-mb-gb-tb-pb   �������λ������������������
//ָ��Ĵ�С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽ�

//8G-�ڴ� 512G-Ӳ��