#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//stlenͷ�ļ�
#include <windows.h>//sleepͷ�ļ�
int main()
{
	//welcome to bit!!!!!!
	//####################
	//w##################!
	//we################!!
	//......
	//welcome to bit!!!!!!

	//char arr[]="abc";
	//[a b c \0]
	//4-2
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;  //���ִ��붼����ʵ�ּ���Ԫ�ص����±�
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//��Ϣһ��
		Sleep(1000);//1000����
		system("cls");//ִ��ϵͳ�����һ������  cls-�����Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}