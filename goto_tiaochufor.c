#include <stdio.h>

int main()
{
	int x;
	int one, two, five;
	
	scanf("%d",&x);
	
	for ( one = 1; one < x * 10; one++) {
		for ( two = 1; two < x * 10/2; two++) {
			for ( five = 1; five < x * 10; five++) {
				if ( one + two *2 + five *5 == x * 10 ) {
					printf("可以用%d个1角和%d个2角和%d个5角得到%d元",one,two,five,x);
					goto out; //goto 跳到 out 的地方 
				}
			}
		}
	}
	out:
		return 0;
}
