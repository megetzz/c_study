//��������
//�����ķֽ� 
//һ����������1����λ������ɵ� ,��ηֽ�������ĸ���λ�ϵ�����,Ȼ����Լ���
//	�������� %10 ����,�õ���λ��
//	�������� /10 ����,ȥ���˸�λ��
//	�ٶԵڶ����Ľ�� %10 ,�õ���ԭ������ʮλ��;
//	.
//	.
//	.
//	�Դ����� 

 
 
 
 
//��������,0��ǰ��û�� 
#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
//	digit���ұߵ�һλ 
	int digit;
//	ret ����Ľ�� 
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
