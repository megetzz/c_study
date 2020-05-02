//建议: 在if或else后面总是用{},即使只有一条语句 

#include <stdio.h>

int main()
{
	const int READY = 24;
	int code = 0;
	int count = 0;
	
	scanf("%d %d",&code, &count);
//	else 有{} 的意义会变化 
//	缩进格式不能暗示else的 
	if ( code == READY){
		if ( count < 20)
			printf("一切正常\n");
	}	else
		printf("继续等待\n");
	return 0; 
 } 
