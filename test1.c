//����: ��if��else����������{},��ʹֻ��һ����� 

#include <stdio.h>

int main()
{
	const int READY = 24;
	int code = 0;
	int count = 0;
	
	scanf("%d %d",&code, &count);
//	else ��{} �������仯 
//	������ʽ���ܰ�ʾelse�� 
	if ( code == READY){
		if ( count < 20)
			printf("һ������\n");
	}	else
		printf("�����ȴ�\n");
	return 0; 
 } 
