#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//strcmp头文件
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：\n");
		scanf("%s", password);
		if (strcmp(password,"123456")==0)//== 不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
		{                                //strcmp:第一个字符串大于第二个字符串，返回大于0的数字。
			printf("登录成功\n");        //       第一个字符串小于第二个字符串，返回小于0的数字。
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均错误，退出程序\n");
	}
	return 0;
}