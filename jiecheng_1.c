//阶乘
//n! = 1 * 2 * 3 *4 *...* n

//写一个程序,让用户输入n,然后计算输出n!
// 变量:
// 	都用户的输入需要一个int的n,然后计算的结果需要用一个变量保存,
//	 可以是int的factor
//	在计算中需要有一个变量不断的从1递增到n,那可以是int 
// 

#include <stdio.h>

int main()
{
	int n;
	
	scanf("%d",&n);
//	求和的程序时,记录结果的变量初始为0,
//	求积的程序时,记录结果的变量初始为1, 
	int fact = 1;
	
	int i = n;
//	i=1 初始条件  i<=n 循环条件 i++ 循环每一轮做的事情 
//	for (i = 1; i <= n; i++) {
//		fact *= i;
//	}
	for ( ; n>1; n--){
		fact *= n;
	} 
	printf("%d!= %d\n",i,fact); 
	return 0; 
}
