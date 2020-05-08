/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/04/20 17:31
	Description: 
	求最大公约数 
*/

//枚举
//1.设t为2;
//2.如果u和v都能被 t 整除,则几下这个t,
//3.t+1后重复第2步,直到t等于u或v;
//4.曾经记下的最大的可以同时整除u和v的t就是公约数 

//#include <stdio.h>
//
//int main()
//{
//	int a,b;
//	int min;
//	
//	scanf("%d,%d",&a,&b);
//	if ( a < b ) {
//		min = a;
//	} else {
//		min = b;
//	}
//	int ret = 0;
//	int i;
//	for ( i = 1; i < min; i++) {
//		if ( a % i == 0) {
//			if ( b % i == 0) {
//			ret = i; 
//		}
//	}
// } 
// printf("%d和%d的最大公约数是%d.\n",a,b,ret);
// return 0;
//}
//	




//辗转相除法
//1. 如果b等于0,计算结束,a就是最大公约数;
//2. 否则,计算a除以b的余数,让a等于b,而b等于那个余数;
//3. 回到第一步 

#include <stdio.h>

int main()
{
	int a,b;
	int t;
//	scanf("%d,%d",&a,&b);
	a = 10; 
	b = 25;
	while ( b != 0 ) {
		t = a%b;
		a = b;
		b = t;
		printf("a=%d,b=%d,t=%d\n",a,b,t);
	}
	printf("gcd=%d.\n",a);
	return 0;
}
