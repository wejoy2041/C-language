#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ö�ٳ���(���ܱ��޸�)
//��ԭɫ���죬�ƣ���
//���ڣ�1��2��3��4��5��6��7
//ö�ٹؼ��֣�enum
//MALE,FEMALE,SECRET-ö�ٳ���
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
#define MAX 10
int main()
{
	//enum Sex s=FEMALE;
	enum Sex a = MALE;  //ö�������������ı��������޸ģ���'a'
	a = FEMALE;
	//SECRET=6������

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	//#define����ı�ʶ������
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);

	const int n = 10;           //n�Ǳ������������г����ԣ���������˵n�ǳ�����
	//int arr[n]={0};             ���鲻��ʹ�ó�����
	//n = 20;                   
	//const - ������
	//numΪconst���εĳ�����
	const int num = 4;
	printf("%d\n", num);
	//num = 8;                  //const����numΪ�����������ܱ��޸�
	//printf("%d\n", num);
	return 0;
}
//���泣��  3�� 100��