/*
逻辑运算
逻辑运算是对逻辑量进行的运算,结果只有0或1

逻辑量是关系运算或逻辑运算的结果

运算符			描述		实例			结果
	!			逻辑非		!a				如果a是true结果就是false
											如果a是false结果是true
	&&			逻辑与		a && b			如果a和b都是true,
											结果是true,否则是false
	||			逻辑或		a || b			如果a和b有一个是true,结果是true
											两个都是false,结果是false	 

*/

/* 
如果要表达数学中的区间,
如:
x ∈(4,6)或 x [4,6],如何写C的表达式 
x > 4 && x < 6
x >= 4 && x <= 6 
*/

/*
如何判断一个字符是否是大写字母?
 c >= 'A' && c <= 'Z' 
*/

/*

index < 0 || index > 99   小于0或大于99 
!age < 20  取反 age >= 20 
*/
 
 
 /* 优先级 
 ! > && > ||
  !done && (count > MAX) 
 */ 
 
 /*
 优先级			运算符				结合性
 	1				()				从左到右
	2			! + - ++ -- 		从右到左(单目的+和-)
	3			  * / %				从左到右
	4				+ - 			从左到右	
	5 			< <= > >=			从左到右
	6			==  !=				从左到右
	7				&&				从左到右
	8				||				从左到右
	9			= += -= *= /= %=	从右到左 
 赋值永远最低 and 比 or 高  关系运算比逻辑运算高   
 */
 
 /*
 短路
 
  逻辑运算是自左向右进行的,如果左边的结果已经能决定结果了,就不会做右边的计算 
 a == 6 && b == 1
 a == 6 && b += 1 
 
 对于&&,左边是false 就不做右边了
 对于||,左边是true 就不做右边了 
 */
 // 不要把赋值,包括复合赋值组合进表达式 
 
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int a = -1;
	if ( a > 0 && a++ > 1) {
		printf("OK\n");
	} 
	printf("%d\n",a);
	
	return 0;
 } 
