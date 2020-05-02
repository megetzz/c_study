
/*
自动类型转换
当运算符的两边出现不一致的类型时,会自动转换成较大的类型
大的意思是能表达的数的范围最大

char > short > int > long > long long
整数和浮点 
int > float > double
 
*/

/*
对于printf,任何小于int的类型会被转换成int,float 会转换成double
但是 scanf不会,要输入short,需要%hd 
*/

/*
强制转换
 要把一个量强制转换成另一个类型(通常是较小的类型) \
 需要
   (类型名字)值 
   eg:(int)10.2
    (short)32
	 主要安全性,小的变量不能总表达大的量
	 (short)最大32767 
	 (short)32768 
	 
	只是从那个变量计算出了一个新的类型的值,并不改变那个变量 
	无论值和类型 
	强制类型转换的优先级高于四则运算
	double a = 1.0;
	double b = 2.0;
	int i = (int)(a / b); 
*/ 
#include <stdio.h>
int main()
{
	int i = 32768;
	short s  = (short)i; 
	printf("%d\n",i); 
	return 0;
}
