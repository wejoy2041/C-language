#define _CRT_SECURE_NO_WARNINGS 1//define不是关键字
#include <stdio.h>
int main()
{
	int age = 20;
	//scanf("%d", &age);      //%d后不能加\n，会导致无法结束scanf，运行不了后面的代码
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else                                //可省略，不影响原代码
		printf("老不死\n");


	//与前文代码逻辑相同
	if (age < 18)         //如果条件成立，要执行多条语句，应使用代码块（一对大括号）
	{
		printf("未成年\n");
		printf("不能谈恋爱\n");
	}
	else
	{
		if (age >= 18 && age < 28)
			printf("青年\n");
		else if (age >= 28 && age < 50)
			printf("壮年\n");
		else if (age >= 50 && age < 90)
			printf("老年\n");
		else
			printf("老不死\n");
	}


	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)            //想让第一个if与else匹配，可加大括号进行隔离
			printf("hehe\n");
	}
	else                   //悬空else:else与离它最近的未匹配的if进行匹配
		printf("haha\n");


	int num = 4;
	if (num = 5)//= 赋值  == 判断相等    可使用 5==num 避免出现类似bug
	{
		printf("hh\n");
	}


	//switch语句：也是一种分支语句，常常用于多分支的情况
	int day = 1;
	if (1 == day)
		printf("星期一\n");
	else if (2 == day)
		printf("星期二\n");
	else if (3 == day)
		printf("星期三\n");
	//......

	scanf("%d", &day);     //case决定入口，break决定出口
	switch (day)           //switch（整型表达式）         
	{
	case 1:                //case（整型常量表达式）
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;             //最后一个break不影响代码，但方便后期代码修改或添加提供便利
	}

	int i = 1;
	switch (day)      //switch中可以出现if语句，但不能出现continue，无意义
	{
	case 1:
		if (i == 1)
			printf("你好\n");
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:                   //可有可无，用于处理非法状况。无顺序可言，可放在switch语句的前面
		printf("输入错误\n");
		break;
	}

	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)   //switch允许嵌套使用
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n", m, n);//m=5,n=3 



	return 0;
}

//分支语句：（选择结构）if      switch
//循环语句：while     for     do while
//C语言中由一个分号；隔开的就是一条语句
//;是语句-空语句

//if(表达式）
//	语句；
//
//if（表达式）
//	语句1；
// else（表达式）
//	语句2；
// 
// if（表达式1）
//	语句1；
// else if(表达式2）
//	语句2；
// else
//	语句3；                           语句1，2，3只能被执行一个

//C语言中：0表示假，非0表示真

//if(condition)
//{
//	return x;
//}
//return y;

//if(condition)
//{
//	return x;
//}
//else
//{
//	return y;
//}
//上述两代码逻辑相同，第一种代码风格较差