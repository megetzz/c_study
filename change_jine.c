#include <stdio.h>

int main()
{
//	定义了一个变量   price  int类型 初始值为0  
//<类型名称>  <变量名称> 
	int price = 0;
//	输出函数 

	printf("请输入金额（元）：");
	
//	输入函数   & 加在变量前边 
  
	scanf("%d",&price);
	
//	定义变量 change    
//100 常量 固定不变的数   称作 直接量 Literal
//更好的方式是定义一个常量
//	const intAMOUNT =100; 
	int change = 100 - price;
	
	printf("找您%d元.\n",change);
	
	return 0;
}
