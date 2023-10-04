#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break; //停止后期的所有的循环，直接终止循环
			//continue;死循环
		printf("%d ", i);
		i++;
	}

	printf("%\n");

	int j = 0;
	while (j <= 10)
	{
		j++;
		if (j == 5)
			continue; //终止本次循环，本次循环中oontinue后边的代码不会再执行，而是直接跳转到while语句的判断部分，进行下一次循环的入口判断
		printf("%d ", j);
	}

	printf("\n");
	//int ch = getchar(); //接收一个字符
	//putchar(ch);        //输出接收的字符
	//printf("%c\n", ch);

	int ch = 0;
	//ctrl + z   结束循环
	//EOF - end of file文件结束标志 - 值为-1
	while ((ch = getchar()) != EOF)//接收E，输出E 接收O，输出O 接收F，输出F
	{
		putchar(ch);
	}

	//上代码用处举例：
	int ret = 0;
	int a = 0;
	char password[20] = { 0 };
	printf("请输入密码:\n");
	scanf("%s", password);//输入密码，并存放在password数组中
	//缓冲区还剩余一个'\n'
	//读取一下'\n'
	//getchar();单个getchar无法解决scanf读取空格问题，例如输入：123 abc
	while ((a=getchar()) != '\n')
	{
		;
	}
	printf("请确认（Y/N）:\n");
	ret = getchar();//接收Y/N    输入函数->输入缓冲区(密码+\n)
	if (ret == 'Y')
		printf("确认成功\n");
	else
		printf("放弃确认\n"); //输入密码时，password中最后敲入的回车(\n)被getchar读走，故直接输出 放弃确认

	printf("%d\n", '\n'); //'\n'的ASCII值为10


	int b = 0;
	while ((b = getchar()) != EOF)
	{
		if (b < '0' || b>'9')
			continue;
		putchar(b);
	}

	//while循环在复杂项目中的初始化，判断，调整比较分散。for循环可以解决此问题。
	int c = 0;
	for (c = 1; c <= 10; c++)//初始化，判断，调整
	{
		if (c == 5)
			break;
			//continue;
		printf("%d ", c);
	}
	printf("\n");
	//for语句的循环控制变量
	//	1.不可在for循环体内修改循环变量，防止for循环失去控制
	//	2.建议for语句的循环控制变量的取值采用“前闭后开区间”写法
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int d = 0;
	//10次循环 10次打印 10个元素
	for (d = 0; d < 10; d++) //尽量写成d<10，避免写成d<=9 （具体据情况而定）
	{
		printf("%d ", arr[d]);
	}
	printf("\n");
	//for的变种
	//变种1
	//for循环的初始化，调整，判断 都可以省略
	//但for循环的判断部分如果被省略，那判断条件就是：恒为真
	//如果不是非常熟练，建议不要随便省略代码
	/*
	for (;;)
	{
		printf("hehe\n");//死循环
	}
	*/

	int e = 0;
	int f = 0;
	for (; e < 3; e++)
	{
		for (f=0; f < 3; f++)//不省略f=0，会打印9个haha。省略f=0，导致每次e循环，f的值没初始化，值都为3，只打印3个haha。
		{
			printf("haha\n");
		}
	}
	printf("\n");
	//变种2
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//打印两个hehe
	{
		printf("hehe\n");
	}
	printf("\n");

	int l = 0;
	int h = 0;
	for (l = 0, h = 0; h = 0; l++,h++)//本代码循环0次。判断中h=0，为假，故不进入循环。
		h++;                          //判断语句为非0，则进入死循环

	//do while 循环至少执行一次，使用的场景有限，不经常使用
	int m = 1;
	do
	{
		if (m == 5)
			break;
			//continue  1,2,3,4死循环
		printf("%d ", m);
		m++;
	} 
	while (m < 10);
	return 0;
}
//while      for     do while

//while（表达式）
//	循环语句；


//for(表达式1；表达式2；表达式3) 
//	循环语句；

//表达式1 初始化，初始化循环变量
//表达式2 条件判断，用于判断循环时候终止
//表达式3 调整部分，用于循环条件的调整


//do
//	循环语句;
//while(表达式);