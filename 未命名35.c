/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/04/20 17:12
	Description:
	正序分解整数 
	输入一个非负整数,正序输出每个数字
	 输入:12345 输出 1 3 4 2 5 
*/

#include <stdio.h>

int main() 
{
	int x;
	scanf("%d",&x);
	
	int t = 0;
	do {
		int d = x % 10;
		t = t * 10 + d;
		x /= 10;
	} while ( x > 0);
	printf("x = %d,t = %d\n",x,t);
	x = t;
	do {
		int d = x % 10;
		printf("%d",d);
		if ( x > 9) {
			printf(" ");
		}
	}
 } 
