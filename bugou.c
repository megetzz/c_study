#include <stdio.h>

int main()
{
	int price = 0;
	int bill = 0;
	
	printf("��������:");
	scanf("%d",&price);
	
	printf("������Ʊ��:");
	scanf("%d",&bill);
	
	if ( bill >= price) {
		printf("Ӧ������::%d\n",bill - price);
	} else {
		printf("���Ǯ����\n");
	}
	
//	printf("���Ǯ����\n");
	
	return 0;
}
