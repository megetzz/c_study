/*������Χ�ĸ�����

printf ��� inf ��ʾ������Χ�ĸ�����  : ����
printf ��� nan ��ʾ�����ڵĸ�����  

*/

/*
#include <stdio.h> 

int main()
{
	printf("%f\n",12.0/0.0);
	printf("%f\n",-12.0/0.0);
	printf("%f\n",0.0/0.0);
	
	return 0;
}
 */
 
#include <stdio.h>

int main()
{
	float a, b, c;
	// ��С�������������double ���� float
	// float ��Ҫf��F��׺��������� 
	a = 1.345f;
	b = 1.123f;
	c = a + b;
	if ( c == 2.468 ) {
		printf("���\n"); 
	} else {
		printf("�����! c = %.10f,��%f\n",c,c);   //�����! c = 2.4679999352,��2.468000
	} 
	return 0;
}
