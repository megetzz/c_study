/*
	Name: 
	Copyright: 
	Author: 
	Date: 28/04/20 17:31
	Description: 
	�����Լ�� 
*/

//ö��
//1.��tΪ2;
//2.���u��v���ܱ� t ����,�������t,
//3.t+1���ظ���2��,ֱ��t����u��v;
//4.�������µ����Ŀ���ͬʱ����u��v��t���ǹ�Լ�� 

//#include <stdio.h>
//
//int main()
//{
//	int a,b;
//	int min;
//	
//	scanf("%d,%d",&a,&b);
//	if ( a < b ) {
//		min = a;
//	} else {
//		min = b;
//	}
//	int ret = 0;
//	int i;
//	for ( i = 1; i < min; i++) {
//		if ( a % i == 0) {
//			if ( b % i == 0) {
//			ret = i; 
//		}
//	}
// } 
// printf("%d��%d�����Լ����%d.\n",a,b,ret);
// return 0;
//}
//	




//շת�����
//1. ���b����0,�������,a�������Լ��;
//2. ����,����a����b������,��a����b,��b�����Ǹ�����;
//3. �ص���һ�� 

#include <stdio.h>

int main()
{
	int a,b;
	int t;
//	scanf("%d,%d",&a,&b);
	a = 10; 
	b = 25;
	while ( b != 0 ) {
		t = a%b;
		a = b;
		b = t;
		printf("a=%d,b=%d,t=%d\n",a,b,t);
	}
	printf("gcd=%d.\n",a);
	return 0;
}
