/*
return ֹͣ������ִ��,���ͻ�һ��ֵ
	return;
	reuurn ���ʽ; 
	һ�������Գ��ֶ��return  
	
��return �з���ֵ,
���Ը�ֵ������,
�����ٴ��ݸ����� 
�������Զ��� 
*/

/* 
#include <stdio.h>

int max(int a, int b) {
	 int ret;
	 if ( a > b ) {
	 	ret = a;
	 } else {
	 	ret = b;
	 }
		
	return ret;
} 

int main() {
	int a,b,c;
	a=5;
	b=12;
	c = max(10,12);
	printf("%d\n",max(a,b));
	return 0;
}
*/



#include <stdio.h>

int max(int a, int b) {
//	 int ret;
	 if ( a > b ) {
	 	return a;    // �����ϵ�һ���ڵ�����   ���Ƽ� 
	 } else {
	 	return b;
	 }
		
//	return ret;
} 

int main() {
	int a,b,c;
	a=5;
	b=12;
	c = max(10,22);
	max(23,45); 
	printf("%d\n",max(a,b));
	return 0;
} 

/*
û�з���ֵ�ĺ��� 
void������(������) �������κ�ֱ�Ľ�� 
����ʹ�ô�ֵ��return
����û��return
���õ�ʱ����������ֵ�ĸ�ֵ 
��������з���ֵ,����ʹ�ô�ֵ��return 
*/

