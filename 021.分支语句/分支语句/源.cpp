#define _CRT_SECURE_NO_WARNINGS 1//define���ǹؼ���
#include <stdio.h>
int main()
{
	int age = 20;
	//scanf("%d", &age);      //%d���ܼ�\n���ᵼ���޷�����scanf�����в��˺���Ĵ���
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");
	else if (age >= 50 && age < 90)
		printf("����\n");
	else                                //��ʡ�ԣ���Ӱ��ԭ����
		printf("�ϲ���\n");


	//��ǰ�Ĵ����߼���ͬ
	if (age < 18)         //�������������Ҫִ�ж�����䣬Ӧʹ�ô���飨һ�Դ����ţ�
	{
		printf("δ����\n");
		printf("����̸����\n");
	}
	else
	{
		if (age >= 18 && age < 28)
			printf("����\n");
		else if (age >= 28 && age < 50)
			printf("׳��\n");
		else if (age >= 50 && age < 90)
			printf("����\n");
		else
			printf("�ϲ���\n");
	}


	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)            //���õ�һ��if��elseƥ�䣬�ɼӴ����Ž��и���
			printf("hehe\n");
	}
	else                   //����else:else�����������δƥ���if����ƥ��
		printf("haha\n");


	int num = 4;
	if (num = 5)//= ��ֵ  == �ж����    ��ʹ�� 5==num �����������bug
	{
		printf("hh\n");
	}


	//switch��䣺Ҳ��һ�ַ�֧��䣬�������ڶ��֧�����
	int day = 1;
	if (1 == day)
		printf("����һ\n");
	else if (2 == day)
		printf("���ڶ�\n");
	else if (3 == day)
		printf("������\n");
	//......

	scanf("%d", &day);     //case������ڣ�break��������
	switch (day)           //switch�����ͱ��ʽ��         
	{
	case 1:                //case�����ͳ������ʽ��
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;             //���һ��break��Ӱ����룬��������ڴ����޸Ļ�����ṩ����
	}

	int i = 1;
	switch (day)      //switch�п��Գ���if��䣬�����ܳ���continue��������
	{
	case 1:
		if (i == 1)
			printf("���\n");
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:                   //���п��ޣ����ڴ���Ƿ�״������˳����ԣ��ɷ���switch����ǰ��
		printf("�������\n");
		break;
	}

	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)   //switch����Ƕ��ʹ��
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n", m, n);//m=5,n=3 



	return 0;
}

//��֧��䣺��ѡ��ṹ��if      switch
//ѭ����䣺while     for     do while
//C��������һ���ֺţ������ľ���һ�����
//;�����-�����

//if(���ʽ��
//	��䣻
//
//if�����ʽ��
//	���1��
// else�����ʽ��
//	���2��
// 
// if�����ʽ1��
//	���1��
// else if(���ʽ2��
//	���2��
// else
//	���3��                           ���1��2��3ֻ�ܱ�ִ��һ��

//C�����У�0��ʾ�٣���0��ʾ��

//if(condition)
//{
//	return x;
//}
//return y;

//if(condition)
//{
//	return x;
//}
//else
//{
//	return y;
//}
//�����������߼���ͬ����һ�ִ�����ϲ�