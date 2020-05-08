/* 
函数的定义和调用

函数是一块代码,接受零个或多个参数,做一件事请 并返回零个或一个值 
想象成数学中的函数

void sum(int begin, int end) //函数头  void 返回类型  sum:函数名  元括号 :里边是 参数表  参数,参数 
{
	int i;									//		
	int sum = 0;							//
	for ( i = begin; i <= end; i++) {		//
		sum += i;							// 函数体 
	}										//
	printf("%d+%d=%d\n",begin,end,sum);		//
 } 
 
调用函数
 函数名(参数值)  
 ()起到了表示函数调用的重要作用
 即使没有参数也需要() 
 如果有参数,则需要给出正确的i数量和顺序
 这些值会被按照顺序依次用来初始化函数中的参数 
 */
 
#include <stdio.h>

void cheer()
{
	printf("cheer\n");
}

int main()
{
	cheer();
	
	return 0;
  }  
