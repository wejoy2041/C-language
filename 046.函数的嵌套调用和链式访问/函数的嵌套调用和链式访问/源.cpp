#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	//Ƕ�׵���
	three_line();

	//��ʽ����  ����һ�������ķ���ֵ��Ϊ����һ�������Ĳ���)
	int len = 0;
	//1
	len = strlen("abc");
	printf("%d\n", len);
	//2
	printf("%d\n", strlen("abc"));


	printf("%d", printf("%d", printf("%d", 43)));//printf�ķ���ֵΪ��ӡ�ַ��ĸ���

	return 0;
}

//�����ͺ���֮������л�����ϵ�