//����: ֻ�ܱ�1���Լ���������
/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/04/20 16:32
	Description: 
*/

//�ж�����

#include <stdio.h>

int main()
{
	int x;
	
	scanf("%d",&x);
	
	int i;
	int isPrime = 1; // isPrime=1 x������  
	for ( i = 2; i < x; i++) {
		if ( x % i ==0) {
			isPrime = 0;
			break;
//			continue;
		}
		printf("%d\n",i);
	}
	if ( isPrime == 1) {
		printf("������\n"); 
	}  else {
		printf("��������\n"); 
	} 
	return 0;
 } 
