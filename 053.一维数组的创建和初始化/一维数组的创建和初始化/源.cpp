#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//����һ������-�������-10��
	int arr1[10];
	char arr2[5];//�����СӦΪ����������Ϊ����

	//����ĳ�ʼ��
	//����ĳ�ʼ����ָ���ڴ��������ͬʱ�����������һЩ�����ʼֵ����ʼ����
	int arr3[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	char arr4[5] = { 'a','b' ,98};//98='b'
	char arr5[5] = "ab";//{'a','b','/0'}
	char arr6[] = "abcdef";//��7��Ԫ��
	printf("%d\n", sizeof(arr6));
	//sizeof����arr4��ռ�ռ�Ĵ�С
	//7��Ԫ��-char 7*1=7
	printf("%d\n", strlen(arr6));
	//strlen���ַ����ĳ���-'\0'֮ǰ���ַ�����
	//[a b c d e f \0]
	//6

	char arr7[] = "abc";
	char arr8[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr7));//4
	printf("%d\n", sizeof(arr8));//3
	printf("%d\n", strlen(arr7));//3
	printf("%d\n", strlen(arr8));//���ֵ
	return 0;
}

//����Ĵ���
//    ������һ����ͬ����Ԫ�صļ���
//    type_t arr_name [const_n];
//    type_t ��ָ�����Ԫ������
//    const_n ��һ���������ʽ������ָ������Ĵ�С

//1.strlen��sizeofû��ʲô����
//2.strlen�����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ�õ���ͷ�ļ�
//3.sizeof������������飬���͵Ĵ�С-��λ���ֽ�-������