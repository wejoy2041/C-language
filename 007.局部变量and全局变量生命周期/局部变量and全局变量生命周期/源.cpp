#include <stdio.h>
int a = 1;                              //全局变量：整个程序的生命周期
int main()
{
	{                                    //局部变量：进入作用域生命周期开始，出作用域生命周期结束
		int a = 10;
		printf("a=%d\n", a); //ok
	}
	printf("a=%d\n", a);     //error
	return 0;
}