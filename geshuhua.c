/*
������������� 

ֻ���������� : int �� long long
	%d  int
	%u	unsigned
	%ld long long
	%lu unsigned long long
*/	

/*
8���ƺ�16����
һ����0��ʼ��������������8����
һ����0x��ͷ��������������16���� 

%0����8����,%x����16���� 

16���ƺ��ʺϱ�����������,4λ����������һ��16����λ 1λ��char 
8���Ƶ�һλ�������ñ��3λ������ 

*/ 

#include <stdio.h>

int main()
{
//	char c = -1;
//	int i = -1;
//	printf("c=%u,i=%u\n",c,i); // 4294967295  unsigned ��int���������� 

	char c = 012;
	int i = 0x12; 
	printf("c = %d,i = %d \n",c,i);  // 10 18
	return 0;
 } 
