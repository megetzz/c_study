//素数: 只能被1和自己整除的数
/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/04/20 16:32
	Description: 
*/

//判断素数

#include <stdio.h>

int main()
{
	int x;
	
	scanf("%d",&x);
	
	int i;
	int isPrime = 1; // isPrime=1 x是素数  
	for ( i = 2; i < x; i++) {
		if ( x % i ==0) {
			isPrime = 0;
			break;
//			continue;
		}
		printf("%d\n",i);
	}
	if ( isPrime == 1) {
		printf("是素数\n"); 
	}  else {
		printf("不是素数\n"); 
	} 
	return 0;
 } 
