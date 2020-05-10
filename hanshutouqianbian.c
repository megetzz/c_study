/*
函数先后关系
c的编译器自上而下顺序分析代码 

如果把要调用的函数放到下边
 会给waring甚至error 
 
 把函数的头放到前边加分号 
*/ 


/*
函数原型
 函数头,以分号";"结尾,就购成了函数的原型 
 目的:
 	告诉编译器这个函数长什么样
	 	名称
		参数(数量及类型)
		返回类型 
*/ 

/*
调用某个函数是,根据原型判断 
旧标准习惯把函数原型写在调用它的函数里面,
现在一般卸载调用它的函数前面 
函数的原型可以不写参数名称 
*/ 

/*
实际的函数头在下边,由大括号,没有分号结尾 
*/ 

#include <stdio.h>

void sum(int begin, int end);  // 函数的原型声明 
 
 
 
int main() {
	sum(1,10);
	sum(1,101);	
	return 0;
}

// 函数的定义 
void sum(int begin,int end)   //判断声明和定义是否一致 
{
	int i;
	int sum = 0;
	for ( i = begin; i <= end; i++ ) {
		sum += i;
	}
	printf("%d+%d=%d\n",begin,end,sum);
 } 
