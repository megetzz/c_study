#include <stdio.h>

int main()
{
//	������һ������   price  int���� ��ʼֵΪ0  
//<��������>  <��������> 
	int price = 0;
//	������� 

	printf("�������Ԫ����");
	
//	���뺯��   & ���ڱ���ǰ�� 
  
	scanf("%d",&price);
	
//	������� change    
//100 ���� �̶��������   ���� ֱ���� Literal
//���õķ�ʽ�Ƕ���һ������
//	const intAMOUNT =100; 
	int change = 100 - price;
	
	printf("����%dԪ.\n",change);
	
	return 0;
}
