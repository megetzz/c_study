#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	
	printf("请输入两个整数:");
	scanf("%d %d",&a, &b);
	
	int max = 0;
	if ( a > b) {
		max = a;
	} else {
		max =b;
	}
	printf("大的数是%d\n",max);
	
	return 0;
}
