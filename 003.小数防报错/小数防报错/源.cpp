#include <stdio.h>
int main()
{
	short age = 20;            //向内存申请2个字节=16bit位，用来存放20
	float weight = 95.6f;      //向内存申请4个字节，存放小数(95.6会被认为double类型，加f防止报错）
	printf("%f\n", weight);
	return 0;
}