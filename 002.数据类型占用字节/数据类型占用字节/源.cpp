#include <stdio.h>
int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));                   //�ֽ�=4/8
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}

//C���Ա�׼�涨��sizeof(long)>=sizeof(int)