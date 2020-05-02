//整数逆序
//整数的分解 
//一个整数是由1至多位数字组成的 ,如何分解出整数的各个位上的数字,然后加以计算
//	对整数做 %10 操作,得到个位数
//	对整数做 /10 操作,去掉了个位数
//	再对第二步的结果 %10 ,得到了原来数的十位数;
//	.
//	.
//	.
//	以此类推 

 
 
 
 
//整数逆序,0再前变没有 
#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
//	digit最右边的一位 
	int digit;
//	ret 逆序的结果 
	int ret = 0;
	
	while ( x > 0) {
		digit = x%10;
		printf("%d",digit);
		ret = ret * 10 + digit;
//		printf("ret = %d, digit = %d, ret = %d\n",x, digit,ret);
		x /= 10;
	}
//	printf("%d",ret);

	return 0;
 } 
