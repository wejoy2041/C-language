#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int my_strlen(char* str)
{
	//�����ַ�������
	int count = 0;//countΪ��ʱ����
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//�ݹ�ķ���
//�Ѵ��»�С
//new_strlen("bit")
//1+new_strlen("it")
//1+1+new_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//3
int new_strlen(char* str)
{
	if (*str != '\0')
		return 1 + new_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);//���ַ�������
	//printf("%d\n", len);

	//ģ��ʵ����һ��strlen����
	int len = new_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len=%d\n", len);

	return 0;
}