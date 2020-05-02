//算平均数
//用户输入一系列的正整数,最后输入 -l,表示输入结束,
//然后程序计算出这些数字的平均数,输出输入的数字的个数和平均数 

//变量-->算法-->流程图-->程序

//变量:  
//一个记录读到的整数的变量 
//平均数怎么算 ? 
//	只需要每读到一个数,就把它加到一个累加的变量里,到全部数据读完
//	再拿它去除读到的数的个数
//一个变量记录累加的结果,一个变量记录读到的数的个数 

//算法:
//初始化变量 sum 和 count 为0;
//读入number;
//如果number不是 -l,则将number加入到sum,并将count+1,回到2;
//如果number是-l,则计算和打印出sum/count,(注意换成浮点来计算) 
 
#include <stdio.h> 

int main()
{
	int number;
	int sum = 0;
	int count = 0;
	
	printf("输入一个数:\n"); 
	scanf("%d",&number);
	while ( number != -1 ) {
		sum += number;
		count ++;
		scanf("%d",&number);
	} 
	double dsum = sum; 
	printf("平均数是%f\n",dsum/count);
	
	return 0;
	
}
