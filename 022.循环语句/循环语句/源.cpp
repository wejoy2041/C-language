#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break; //ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ��
			//continue;��ѭ��
		printf("%d ", i);
		i++;
	}

	printf("%\n");

	int j = 0;
	while (j <= 10)
	{
		j++;
		if (j == 5)
			continue; //��ֹ����ѭ��������ѭ����oontinue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֣�������һ��ѭ��������ж�
		printf("%d ", j);
	}

	printf("\n");
	//int ch = getchar(); //����һ���ַ�
	//putchar(ch);        //������յ��ַ�
	//printf("%c\n", ch);

	int ch = 0;
	//ctrl + z   ����ѭ��
	//EOF - end of file�ļ�������־ - ֵΪ-1
	while ((ch = getchar()) != EOF)//����E�����E ����O�����O ����F�����F
	{
		putchar(ch);
	}

	//�ϴ����ô�������
	int ret = 0;
	int a = 0;
	char password[20] = { 0 };
	printf("����������:\n");
	scanf("%s", password);//�������룬�������password������
	//��������ʣ��һ��'\n'
	//��ȡһ��'\n'
	//getchar();����getchar�޷����scanf��ȡ�ո����⣬�������룺123 abc
	while ((a=getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y/N��:\n");
	ret = getchar();//����Y/N    ���뺯��->���뻺����(����+\n)
	if (ret == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("����ȷ��\n"); //��������ʱ��password���������Ļس�(\n)��getchar���ߣ���ֱ����� ����ȷ��

	printf("%d\n", '\n'); //'\n'��ASCIIֵΪ10


	int b = 0;
	while ((b = getchar()) != EOF)
	{
		if (b < '0' || b>'9')
			continue;
		putchar(b);
	}

	//whileѭ���ڸ�����Ŀ�еĳ�ʼ�����жϣ������ȽϷ�ɢ��forѭ�����Խ�������⡣
	int c = 0;
	for (c = 1; c <= 10; c++)//��ʼ�����жϣ�����
	{
		if (c == 5)
			break;
			//continue;
		printf("%d ", c);
	}
	printf("\n");
	//for����ѭ�����Ʊ���
	//	1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
	//	2.����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int d = 0;
	//10��ѭ�� 10�δ�ӡ 10��Ԫ��
	for (d = 0; d < 10; d++) //����д��d<10������д��d<=9 ����������������
	{
		printf("%d ", arr[d]);
	}
	printf("\n");
	//for�ı���
	//����1
	//forѭ���ĳ�ʼ�����������ж� ������ʡ��
	//��forѭ�����жϲ��������ʡ�ԣ����ж��������ǣ���Ϊ��
	//������Ƿǳ����������鲻Ҫ���ʡ�Դ���
	/*
	for (;;)
	{
		printf("hehe\n");//��ѭ��
	}
	*/

	int e = 0;
	int f = 0;
	for (; e < 3; e++)
	{
		for (f=0; f < 3; f++)//��ʡ��f=0�����ӡ9��haha��ʡ��f=0������ÿ��eѭ����f��ֵû��ʼ����ֵ��Ϊ3��ֻ��ӡ3��haha��
		{
			printf("haha\n");
		}
	}
	printf("\n");
	//����2
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//��ӡ����hehe
	{
		printf("hehe\n");
	}
	printf("\n");

	int l = 0;
	int h = 0;
	for (l = 0, h = 0; h = 0; l++,h++)//������ѭ��0�Ρ��ж���h=0��Ϊ�٣��ʲ�����ѭ����
		h++;                          //�ж����Ϊ��0���������ѭ��

	//do while ѭ������ִ��һ�Σ�ʹ�õĳ������ޣ�������ʹ��
	int m = 1;
	do
	{
		if (m == 5)
			break;
			//continue  1,2,3,4��ѭ��
		printf("%d ", m);
		m++;
	} 
	while (m < 10);
	return 0;
}
//while      for     do while

//while�����ʽ��
//	ѭ����䣻


//for(���ʽ1�����ʽ2�����ʽ3) 
//	ѭ����䣻

//���ʽ1 ��ʼ������ʼ��ѭ������
//���ʽ2 �����жϣ������ж�ѭ��ʱ����ֹ
//���ʽ3 �������֣�����ѭ�������ĵ���


//do
//	ѭ�����;
//while(���ʽ);