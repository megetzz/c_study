/*������������,sizeof������ʲô
c����:  ���� 
	����
		char 
		short
		int 
		long
		long long 
	������
		float 
		double 
		long double 
	�߼�
		bool
	ָ��
	�Զ������� 

���Ͳ�ͬ:::
	��������: int long double
	�������ʱ�ĸ�ʽ��: %d %f %lf
	��������ķ�Χ: char < short < int < float < double
	�ڴ���ռ�ݵĴ�С: 1�ֽڵ�16�ֽ�
	�ڴ��еı������: ��������(����),����
	
sizeof��һ�������,����ĳ�����ͻ�������ڴ�����ռ�ݵ��ֽ���
	sizeof(int)
	sizeof(i)
*/	 
#include <stdio.h>

int main()
{
	int a;
	a = 6;
	printf("sizeof(int)=%ld\n",sizeof(int));
//	printf("sizeof(a)=%ld\n",sizeof(a));
	printf("sizeof(char)=%ld\n",sizeof(char));
	printf("sizeof(short)=%ld\n",sizeof(short));
	printf("sizeof(long)=%ld\n",sizeof(long));
	printf("sizeof(long long)=%ld\n",sizeof(long long));

	return 0;
}
