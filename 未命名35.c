/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/04/20 17:12
	Description:
	����ֽ����� 
	����һ���Ǹ�����,�������ÿ������
	 ����:12345 ��� 1 3 4 2 5 
*/

#include <stdio.h>

int main() 
{
	int x;
	scanf("%d",&x);
	
	int t = 0;
	do {
		int d = x % 10;
		t = t * 10 + d;
		x /= 10;
	} while ( x > 0);
	printf("x = %d,t = %d\n",x,t);
	x = t;
	do {
		int d = x % 10;
		printf("%d",d);
		if ( x > 9) {
			printf(" ");
		}
	}
 } 
