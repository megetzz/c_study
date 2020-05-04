//初见函数


/*
//求素数 
#include <stdio.h>

int isPrime( int i)
{
	int ret = 1;
	int k;
	for ( k = 2; k < i-1; k++) {
		if ( i % k == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
 } 

int main()
{
	int m,n;
	int sum = 0;
	int cnt = 0;
	int i;
	
	scanf("%d %d",&m, &n);
	
	if ( m == 1) m = 2;
	for ( i = m; i <= n; i++) {
		
		if( isPrime(i) ) {
			sum += i;
			cnt++;
		}
	} 
	printf("%d %d\n",cnt, sum);
	return 0;
 } 
 
 */
 
 //求和  1到10 , 20到30 和35到45的三个和 
/*
#include <stdio.h>

int main()
{
	int i;
	int sum;
	
	for ( i = 1; sum = 0; i <= 10; i++) {
		sum += i;
	}
	printf("%d到%d的和是%d\n",1,10,sum);
	
	for ( i = 20; sum = 0; i <= 30; i++) {
		sum += i;
	}
	printf("%d到%d的和是%d\n",20,30,sum);
	
	for ( i = 35; sum = 0; i <= 45; i++) {
		sum += i;
	}
	printf("%d到%d的和是%d\n",35,45,sum);
	
	return 0;
 }
 
 */
 
 //函数实现 求和 
 
#include <stdio.h>

void sum( int begin, int end)
{
	int i;
	int sum = 0;
	for ( i = begin;i <= end; i++) {
		sum += i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
}

int main()
{
	//调用sum函数 
	sum(1,10);
	sum(20,30);
	sum(35,45);
	
	return 0;
 } 
