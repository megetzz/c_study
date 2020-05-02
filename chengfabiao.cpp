// 九九乘法表
//i从1到n
//j从1走到i 
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i, j;
	while ( i <= n) {
		j = 1;
		while ( j <= i) {
			printf("%d*%d=%d",j,i,i*j);
			if ( i * j < 10) {
				printf("   ");
			} else {
				printf("  ");
			}
			j++;
		}
		i++;
		printf("\n");
	}
	
	return 0;
 } 
