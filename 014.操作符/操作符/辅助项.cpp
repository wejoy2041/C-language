#define _CRT_SECURE_NO_WARNINGS 1
//static int g_val = 2020;//全局变量

//定义一个函数
int Add(int x, int y)//在其前加static,改变其链接属性
{
	int z = x + y;
	return z;
}