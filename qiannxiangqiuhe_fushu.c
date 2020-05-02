//前n项求和 有减法 

#include <stdio.h>

int main()
{
	int n;
	int i;
	double sum = 0.0;
	//负数 
	//int sign = 1; 
	double sign = 1.0;
	scanf("%d",&n);
	for ( i =1; i <= n; i++) {
	//  sum += sign * 1.0/i;
		sum += sign/i;
		sign = -sign;
	}
	
	printf("f(%d)=%f\n",n,sum);
	return 0;
 } 
