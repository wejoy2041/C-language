#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//system()
#include <string.h>//strcmp
int main()
{
	//shutdown -s -t 60      60���ػ�
	//shutdown -a            ȡ���ػ�
	//system()-ִ��ϵͳ�����
	char input[20] = { 0 };
	system("shutdown -s -t 360");
again:
	printf("��ע�⣬��ĵ�����3�����ڹػ���������롰����������ȡ���ػ�\n�����룺");
	scanf("%s", &input);
	if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//cmd-command ������


//����gotoʵ�֣�

//int main()
//{
	//char input[20] = { 0 };
	//system("shutdown -s -t 360");
	//while (1)
	//{
			//printf("��ע�⣬��ĵ�����3�����ڹػ���������롰����������ȡ���ػ�\n�����룺");
			//scanf("%s", &input);
			//if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp()
			//{
				//system("shutdown -a");
				//break;
			//}
	//}
	//return 0;
//}