#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n/10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234
	//µÝ¹é
	//print(1234)
	//print(123) 4
	//print(12) 3 4
	//print(1£© 2 3 4
	print(num);
	return 0;
}