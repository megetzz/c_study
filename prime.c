#include <stdio.h>
//100以内的素数 
int main() 
{
	int x;
	
	for ( x = 1; x <= 100; x++) {
		int i;
		int isPrime = 1; //x是素数
		for ( i = 2; i < x; i++ ) {
			if ( x % i == 0) {
				isPrime = 0;
				break;
			}
		} 
		if ( isPrime == 1) {
			printf("%d\n",x);
		}
	}
	printf("\n");
	
	return 0; 
 } 
