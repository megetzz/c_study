#include <stdio.h>

int main()
{
//	����һ������   
// const �����η� ������������һ�� ���� const  �������ԡ���ʾ���������ֵһ����ʼ���Ͳ����޸��� 
	const int AMOUNT = 100;

//	����һ������ 
	int price = 0; 
	
//	��� 
	printf("�������Ԫ����");

//	�û���������
	scanf("%d",&price);

//	�����˱��� change  ��� 
	int change = AMOUNT - price;
	
	printf("����%dԪ��\n", change);
	
	return 0; 
} 
