#include <stdio.h>

int main()
{
//	定义一个常量   
// const 是修饰符 用来给变量加一个 不练 const  佛如属性。表示这个变量的值一旦初始化就不能修改了 
	const int AMOUNT = 100;

//	定义一个变量 
	int price = 0; 
	
//	输出 
	printf("请输入金额（元）：");

//	用户交互输入
	scanf("%d",&price);

//	定义了变量 change  结果 
	int change = AMOUNT - price;
	
	printf("找你%d元。\n", change);
	
	return 0; 
} 
