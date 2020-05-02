//猜数游戏
//计算机想一个数,用户来猜.每输入一个数,告诉他大小,知道猜中为止,
//最后告诉用户猜了多少次...

//1.计算机猜想一个数,记载变量number;
//2.负责计次数的变量count初始值为0;
//3.用户输入一个数字a;
//4.count递增  +1;
//5.判断a和number的大小关系,如果大,就输出大,如果小,就输出小; 
//(循环条件,a和number不相等)
//6.如果a和number是不相等的, (无论大小),程序转回第三步;
//7.否则,程序输出'猜中'和'猜中次数'; 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
	srand(time(0));
//	计算机随机猜的数 number    rand()得到随机的整数 
	int number = rand()%100+1;
//	用户猜的次数 
	int count = 0;
//	用户猜的数 
	int a = 0;
	printf("我想好了一个1到100之间的整数\n");
	
	do{
		printf("猜想这个1到100的整数:\n");
		scanf("%d",&a);
		count++;
		if ( a > number) {
			printf("猜大了"); 
		} else if ( a < number) {
			printf("猜小了"); 
		}
	}	while( a != number);
	printf("good,你用了%d次就猜到了答案.\n答案是%d!!!\n",count,a);	
}
