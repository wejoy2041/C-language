#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main()
{
	//�ṹ��   ��/�� - ���Ӷ���  struct-�ṹ��ؼ���
	//�ˣ�����+���+����+��ݺ���+...
	//�飺����+����+������+����+���+...
	//���Ӷ��� - �ṹ�� - �����Լ����������һ������

	//���ýṹ������-����һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	printf("����:%s\n", b1.name);
	printf("�۸�:%d\n", b1.price);

	strcpy(b1.name,"C++");//strcpy-string copy-�ַ�������-�⺯��-string.h(ͷ�ļ�)
	printf("%s\n", b1.name);

	b1.price = 15;  //price�Ǳ���������ֱ���޸ģ����鲻���ԣ���������������һ����ַ��
	printf("�޸ĺ�ļ۸�:%d\n", b1.price);

	struct Book* pb = &b1;
	//����pb��ӡ���ҵ������ͼ۸�
	printf("%s\n", ( *pb ).name);
	printf("%d\n", ( *pb).price);   //.   �ṹ�����.��Ա
	printf("%s\n", pb->name);       //->  �ṹ��ָ��->��Ա
	printf("%d\n", pb->price);
	return 0;
}