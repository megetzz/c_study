/*
关系运算和逻辑运算 
*/

// bool  c99 开始 

//  #include <stdbool.h>
//  之后可以使用bool 和 true,false
 
#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool b = 6 > 5;
	bool t = true;
	t = 2;
	printf("%d\n",b);  // 1, 0
	return 0;
 } 
