//�����ķ�Χ
//�������,
//Խ���˻����� 
/* 
 1�ֽ�(8λ),
 �ɱ������ 00000000  ---  11111111
 00000000 --> 0
 11111111 ~~~ 10000000  ---> -1  ~ -128
 00000001 ~~~ 01111111  ---> 1 ~ 127 
*/
  
  
  /*
  char:	 	1�ֽ�:  -128 ~ 127
  short:	2�ֽ�:  -32768 ~ 32768
  int: ȡ���ڱ�����(cpu),ͨ����������'һ���� ' -2(32-1)~2(32-1)-1 
  long:		4�ֽ�
  long long : 8�ֽ� 
  */
  
  
  /*11111111  ����������255,����������ʱ,��-1; 
  ͬ��:����-a,�䲹����0-a,ʵ����2��n�η�-a,  n���������͵�λ�� */
  
  /* unsigned  �޷��ŵ� 
  ���һ��������������Ҫ�����Լ���unsigned,�����ں����u��U
  	eg:255U
  ��l��L��ʾlong(long)
  *unsigned�ĳ��Բ�����չβ���ܱ���ķ�Χ,����Ϊ����������������,��ҪΪ����λ 
  ������ʱ������һ��,���ܱ��︺��    
   */
   
   /*
   ����Խ��
   �������Դ������Ʒ�ʽ���м����,so
   	11111111 + 1  --> 100000000 --> 0
	01111111 + 1  --> 10000000  --> -128
	10000000 - 1  --> 01111111  --> 127
	
	*/
#include <stdio.h>

int main() 
{
	unsigned char c = 255;  // -1  ����unsignedʱ
	int i  = 255;
	c = c+1;
	printf("c = %d, i = %d\n",c, i);
	
	return 0;
}