#include <stdio.h>

int main()
{
	const int MINOR = 35;
	
	int age = 0;
	
	printf("�������������:");
	scanf("%d",&age);
	
	printf("���������%d��.\n",age);
	
	if ( age < MINOR) {
		printf("����ʱ���õ�,");		
	} 
	
	printf("�����������ľ�������,�ú���ϧ.\n");
	 
 } 
