#include <stdio.h>

int main()
{
	int type;
	
	scanf("%d",&type);
	
	switch ( type ){
		case 1:
			printf("你好");
			break;
		case 2:
			printf("早上好");
			break;
		case 3:
			printf("晚上好");
			break;
		case 4:
			printf("再见");
			break;
		default: 
			printf("a.......什么????");
			break; 
	}
	return 0;
}
