#include <stdio.h>
int global = 2020;                       //ȫ�ֱ������������������̣�
void test()                              //����
{
	printf("test()--%d\n", global);
}
int main()
{
	test();
	printf("%d\n", global);


	extern int age;                      //δ�����ı�ʶ��������extern�ⲿ���ŵ�
	printf("%d\n", age);                 //������ͬһ����Ŀ�еĲ�ͬ�ļ����µ�ȫ�ֱ�����Ȼ����ʹ��


	int num = 0;                         //�ֲ�������������
	{
		printf("num=%d\n", num);
	}
	return 0;
}