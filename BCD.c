#include <stdio.h>

int main()
{
	int a = 0;
	
	scanf("%d",&a);
	
	printf("%d",a/16*10 + a%16);
	
	return 0;
}
