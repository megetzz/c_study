/*
整数的输入输出 

只有两种形势 : int 或 long long
	%d  int
	%u	unsigned
	%ld long long
	%lu unsigned long long
*/	

/*
8进制和16进制
一个以0开始的数字字面量是8进制
一个以0x开头的数字字面量是16进制 

%0用于8进制,%x用于16进制 

16进制很适合表达二进制数据,4位二进制数是一个16进制位 1位是char 
8进制的一位数字正好表达3位二进制 

*/ 

#include <stdio.h>

int main()
{
//	char c = -1;
//	int i = -1;
//	printf("c=%u,i=%u\n",c,i); // 4294967295  unsigned 的int表达的最大的数 

	char c = 012;
	int i = 0x12; 
	printf("c = %d,i = %d \n",c,i);  // 10 18
	return 0;
 } 
