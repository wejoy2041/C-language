#include <stdio.h>
int global = 2020;                       //全局变量的作用域（整个工程）
void test()                              //函数
{
	printf("test()--%d\n", global);
}
int main()
{
	test();
	printf("%d\n", global);


	extern int age;                      //未声明的标识符，声明extern外部符号的
	printf("%d\n", age);                 //定义在同一个项目中的不同文件夹下的全局变量依然可以使用


	int num = 0;                         //局部变量的作用域
	{
		printf("num=%d\n", num);
	}
	return 0;
}