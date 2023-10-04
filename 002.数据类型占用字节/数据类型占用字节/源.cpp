#include <stdio.h>
int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));                   //字节=4/8
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}

//C语言标准规定：sizeof(long)>=sizeof(int)