#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//system()
#include <string.h>//strcmp
int main()
{
	//shutdown -s -t 60      60秒后关机
	//shutdown -a            取消关机
	//system()-执行系统命令的
	char input[20] = { 0 };
	system("shutdown -s -t 360");
again:
	printf("请注意，你的电脑在3分钟内关机，如果输入“我是猪”，就取消关机\n请输入：");
	scanf("%s", &input);
	if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//cmd-command 命令行


//不用goto实现：

//int main()
//{
	//char input[20] = { 0 };
	//system("shutdown -s -t 360");
	//while (1)
	//{
			//printf("请注意，你的电脑在3分钟内关机，如果输入“我是猪”，就取消关机\n请输入：");
			//scanf("%s", &input);
			//if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp()
			//{
				//system("shutdown -a");
				//break;
			//}
	//}
	//return 0;
//}