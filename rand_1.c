#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(0));
	int a = rand();
//	随机产生100以内的数 
	printf("%d\n",a%100);
	
	return 0;
 } 
