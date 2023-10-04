#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int ADD(int a2, int b2)
{
	int z2 = 0;
	z2 = a2 + b2;
	return z2;
}
void test()
{
	static int a = 1;//a是一个静态的局部变量
	a++;             //static修饰局部变量，局部变量的生命周期变长
	printf("%d\n", a);
}
int main()
{
	int num = 5 % 2;                      //取模
	printf("%d\n", num);
	
	int a = 1;                    //移（2进制）位操作符  << 左移    >> 右移
	int b = a << 1;               //整型1占4个字节-32bit位 00000000000000000000000000000001
	printf("%d\n", b);
	printf("%d\n", a);

	int x = 3;  //001
	int y = 5;  //101
	int z = x & y; //(2进制）位操作  &：按位与（同真即真）  |：按位或（同假即假）  ^：按位异或
	int m = x | y;
	int n = x ^ y;
	printf("%d\n", z);

	//单目操作符，双目操作符，三目操作符
	//a+b          +:双目操作符
	//C语言中的真假：0-假，非0-真
	int p = 0;
	printf("%d\n", p);
	printf("%d\n", !p);

	int q = -2;
	int w = +3;//+正号都会省略

	//sizeof计算的是变量/类型所占空间的大小，单位是字节
	printf("%d\n", sizeof(w));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof w);

	int arr[10] = { 0 };//10个整型元素的数组  10*sizeof(int)=40
	printf("%d\n", sizeof(arr));
	//计算数组的元素个数
	//个数=数组总大小/每个元素的大小
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	int k = 0;//4个字节，32bit位
	int j = ~k;//j是有符号的整型 最高位（第一个bit位）表示符号位，0为正数，1为负数
	//~-按（2进制）位取反
	//00000000000000000000000000000000
	//11111111111111111111111111111111
	//原码，反码，补码
	//负数在内存中存储的时候，存储的是二进制的补码
	//11111111111111111111111111111111  补码（任何数字存的都是补码形式）
	//11111111111111111111111111111110  反码（只是中间的计算状态）
	//10000000000000000000000000000001  原码
	printf("%d\n", j);//使用的，打印的是这个数的原码

	int r = 10;
	int t = r++;  //后置++。先使用，再++
	int i = ++r;  //前置++。先++，在使用
	//int t=r--;  //后置--。先使用，在--
	//int i=--r;  //前置--。先--，在使用
	printf("r=%d\nt=%d\ni%d\n", r, t,i);

	int s = (int)3.14;  //（类型）强制类型转换 double->int
	printf("%d\n", s);

	int a1 = 0;    //真-非0   假-0   逻辑与-&&（同真即真）  逻辑或-||（同假即假）
	int b1 = 10;
	int c1 = a1 && b1;
	int c2 = a1 || b1;
	printf("%d\n", c1);
	printf("%d\n", c2);
	
	int x1 = 100;
	int y1 = 20;
	int max = 0;
	max = (x1 > y1 ? x1 : y1); //三目操作符 若x1大于y1,则max值为x1,反之max值为y1
	if (x1 > y1)
		max = x1;
	else
		max = y1;

	int arr1[10] = { 0 };
	arr[4];   //[]-下标引用操作符
	int a3 = 10;
	int b3 = 20;
	int sum3 = ADD(a3, b3);//()-函数调用操作符

	//auto int a4 = 10;  局部变量-自动变量 局部变量前都有auto关键字，一般都将其省略

	register int a5 = 10; //建议把a5放定义成寄存器变量（用于经常使用的变量，方便快速调用）

	signed int a6 = 10;//int定义的变量是有符号的（一般将signed省略）
	unsigned int num3 = 0;//num3为无符号数字（放一个负数，num3也是正数）
	typedef unsigned int u_int;//typedef-类型定义-类型重定义
	u_int num4 = 20;

	int i1 = 0;
	while (i1 < 5)
	{
		test();
		i1++;
	}

	//extern-声明外部符号的
	  //extern int g_val;
	  //printf("g_val=%d\n", g_val);
	//static修饰局部变量，局部变量的生命周期变长
	//static修饰全局变量，改变了变量的作用域-让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法再使用
	//static修饰函数，改变了函数的链接属性（函数作用域）。外部链接属性->内部链接属性
	extern int Add(int , int);
	int a7 = 10;
	int b7 = 20;
	int sum7 = Add(a7, b7);
	printf("sum7=%d\n", sum7);
	return 0;
}
//异或的计算规律：
//对应的二进制位相同，则为0
//对应的二进制位相异，则为1
//=赋值   ==判断相等
//a=a+10   等价于   a+=10（复合赋值符）  

//字符串的结束标志：‘\0’
//'0'-转义字符-ASCII值为0
//0-数字0
//'0'-ASCII值为48
//EOF-end of file-文件结束标志 值为-1

//关系操作符：>=  <=  ==  =  !=
//逻辑操作符：&&逻辑与   ||逻辑或
//条件操作符：exp? exp: exp;   （三目操作符，三个操作数）
//逗号表达式：exp1,exp2,xep3,...,expn
//下标引用-[]  函数调用-（） 结构成员 . ->

//111111111111111111111111    1*2的32次方-1
//1000000000000000000000000   1*2的32次方

//正数，负数   有符号数

//只要是整数，内存中存储的都是二进制的补码
//正数-原码，反码，补码  相同
//负数：存补码
//原码：直接按照正负写出的二进制序列
//反码：原码的符号位不变，其他位按位取反得到
//补码：反码+1
//-2
//10000000000000000000000000000010 -原码
//11111111111111111111111111111101 -反码
//11111111111111111111111111111110 -补码

//关键字：auto break case char const continue default do double else enum 
//        extern float for goto if int long register return short signed
//        sizeof static struct switch typedef union unsigned void volatile while
//关键字不能和变量名冲突

//计算机存储数据：硬盘-内存-高速缓存-寄存器register（越往右，其访问速度越快，空间越来越小）
//struct-结构体关键字
//union-联合体/共用体