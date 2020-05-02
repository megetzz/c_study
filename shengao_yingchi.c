#include <stdio.h>

int main()
{
	printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示5英尺7英寸：");

//  第一种方式   定义int 计算的时候加。0	
//	int foot;
//	int inch;

//第二组方法  定义成 double类型  双精度浮点数

	double foot;
	double inch; 
//	第一 种   输入 
//	scanf("%d %d",&foot,&inch);

//第二种 输入  %lf 
	scanf("%lf %lf", &foot,&inch); 
//	int  的 用 %d    浮点数 用 %f
//第一种的方法 
//	printf("身高是%f米。\n",((foot + inch / 12.0)* 0.3048));
	 
//	 第二种的方法
	printf("身高是%f米。\n",((foot + inch /12)*0.3048));
	 
//	 浮点数和整数放一起进行运算时，c 会将 整数 转换成 浮点谁 
//然后进行浮点数的运算 
//double 和 float单精度浮点数 

	return 0;
}
