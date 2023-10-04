#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>   //strlen头文件

int main()
{
	//数据在计算机上存储的时候，存储的是2进制
	//a-97  A-65  ASCII编码 - ASCII码值
	char arr1[] = "abc";                 //数组
	//"abc"-- 'a','b','c','\0'              \0:字符串的结束标志，不算字符串的内容,是一个转义字符
	char arr2[] = {'a', 'b', 'c'};       //后面存放随机值
	char arr3[] = { 'a','b','c','\0'};   // '\0' - 0 （可将'\0'换为0）
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);

	printf("%d\n", strlen(arr1));   //strlen计算字符串的长度-string length
	printf("%d\n", strlen(arr2));

	printf("abc\n");
	printf("c:\test\32\test.c\n");    //\t:水平制表符
	printf("c:\\text\\32\\text.c\n"); //'\'可以用来转义'\'
	printf("%c\n",'\'');              //%c表示输出单个字符  -‘’
	printf("%s\n", "\'");
	printf("%s\n","\"");              //%s表示输出字符串  -“”
	printf("%c\n", '\"');
	printf("%c\n", 'a');              //单个字符打印（无定义），用单引号
	printf("%s\n", "abcd");           //字符串打印（无定义），用双引号
	printf("%c\n", 'abcd');           //四个以下字符串可以输出最后一个字符，以上报错

	printf("%d\n", strlen("c:\text\32\text.c"));
	printf("%d\n", strlen("\32"));    //\32（转义字符）--1 32是2个8进制数字（0-7），作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	                                  //32-->10进制  26 -->作为ASCII码值代表的字符
	printf("%c\n",'\32');
	printf("%d\n", strlen("\t"));     //\t--1
	printf("%d\n", strlen("\n"));     //\n--1
	
	printf("c:\text\n");//\\
	printf("hello");       上一行输入//\\(结尾），下一行就会被注释掉
	
	//c语言注释风格：/*开始，*/结束   （缺陷：不能嵌套注释）
	/*
	/*
	int a = 10;
	*/
	int b = 10;
	//*/
	//c++注释风格：//  （可以注释一行也可以注释多行）
	//ctrl + k + c  快捷注释  ctrl + k + u  取消注释
	return 0; 
}
//字符串类型：由双引号引起的    “”：空字符串
//转义字符：转变原来的意思
//\?:在书写连续多个问号时使用，防止他们被解析成三字母词（现编译器无法使用）
//\ddd-ddd表示1-3个八进制的数字
//\xdd-dd表示2个十六进制数字