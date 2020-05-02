#include <stdio.h>
//三个数比大小 
int main()
{
	int a,b,c;
	printf("输入三个数\n");
	scanf("%d %d %d",&a, &b, &c);
	int max = 0;
	
	if ( a > b) {
		if ( a > c) {
			max = a;
		} else {
			max = c;
		}
	} else{
		if ( b > c) {
			max = b;
		} else {
			max = c;
		}
	}
	printf("最大的数是 %d\n", max);
}
