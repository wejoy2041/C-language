#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//strcmpͷ�ļ�
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺\n");
		scanf("%s", password);
		if (strcmp(password,"123456")==0)//== ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		{                                //strcmp:��һ���ַ������ڵڶ����ַ��������ش���0�����֡�
			printf("��¼�ɹ�\n");        //       ��һ���ַ���С�ڵڶ����ַ���������С��0�����֡�
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("��������������˳�����\n");
	}
	return 0;
}