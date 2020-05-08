/*
return 停止函数的执行,并送回一个值
	return;
	reuurn 表达式; 
	一个语句可以出现多个return  
	
从return 中返回值,
可以赋值给变量,
可以再传递给函数 
甚至可以丢弃 
*/

/* 
#include <stdio.h>

int max(int a, int b) {
	 int ret;
	 if ( a > b ) {
	 	ret = a;
	 } else {
	 	ret = b;
	 }
		
	return ret;
} 

int main() {
	int a,b,c;
	a=5;
	b=12;
	c = max(10,12);
	printf("%d\n",max(a,b));
	return 0;
}
*/



#include <stdio.h>

int max(int a, int b) {
//	 int ret;
	 if ( a > b ) {
	 	return a;    // 不符合单一出口的理念   不推荐 
	 } else {
	 	return b;
	 }
		
//	return ret;
} 

int main() {
	int a,b,c;
	a=5;
	b=12;
	c = max(10,22);
	max(23,45); 
	printf("%d\n",max(a,b));
	return 0;
} 

/*
没有返回值的函数 
void函数名(参数表) 不返回任何直的结果 
不能使用带值的return
可以没有return
调用的时候不能做返回值的赋值 
如果函数有返回值,必须使用带值的return 
*/

