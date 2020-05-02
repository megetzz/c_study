/*基础数据类型,sizeof可以做什么
c类型:  基础 
	整数
		char 
		short
		int 
		long
		long long 
	浮点数
		float 
		double 
		long double 
	逻辑
		bool
	指针
	自定义类型 

类型不同:::
	类型名称: int long double
	输入输出时的格式化: %d %f %lf
	所表达的书的范围: char < short < int < float < double
	内存中占据的大小: 1字节到16字节
	内存中的表达形势: 二进制数(补码),编码
	
sizeof是一个运算符,给出某个类型或变量在内存中所占据的字节数
	sizeof(int)
	sizeof(i)
*/	 
#include <stdio.h>

int main()
{
	int a;
	a = 6;
	printf("sizeof(int)=%ld\n",sizeof(int));
//	printf("sizeof(a)=%ld\n",sizeof(a));
	printf("sizeof(char)=%ld\n",sizeof(char));
	printf("sizeof(short)=%ld\n",sizeof(short));
	printf("sizeof(long)=%ld\n",sizeof(long));
	printf("sizeof(long long)=%ld\n",sizeof(long long));

	return 0;
}
