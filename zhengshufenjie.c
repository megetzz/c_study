/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/04/20 17:04
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

	int mask = 1;
	int t = x;
	
	while ( t > 9) {
		t /= 10;
		mask *= 10;
	} 
	printf("x = %d, mask = %d\n",t,mask); 

	do {
		int d  = x /mask;
		printf("%d",d);
		if ( mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
//		printf("x = %d,mask=%d,d = %d\n",x, mask, d);
	} while ( mask > 0);
	
	printf("\n"); 
	return 0; 
 } 
