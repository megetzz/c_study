// int的最大数


#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	
	while (	++a > 0);
	printf("int数据类型最大数是:%d\n",a-1); //++a 小于0  
	b++;
	while (( a = a/10) != 0) 
	{
		b++;
	}
	printf("int数据类型最大的数的位数是%d\n",b);
	
	return 0; 
}
