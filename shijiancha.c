//表达式 
//运算符 operator 是指进行 运算的动作,
//算子 operand 是指 参与运算的值,这个值可能是常量,也可能是变量,还可能是一个方法的返回值 

#include <stdio.h> 
int main()
{
	int hour1,minute1;
	
	int hour2,minute2;

	scanf("请输入 %d 小时   %d分钟",&hour1,&minute1);
	scanf("请输入小时%d  分钟%d",&hour2,&minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	
	int t =t2 - t1;
	
	printf("时间差是%d小时%d分.",t/60, t%60);
	
	return 0;
 } 
