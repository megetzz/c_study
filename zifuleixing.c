/*字符类型  char 是整数也是类型  字符
用单引号表示的字符字面量 'a' '1'
'' 也是一个子符
printf 和 scanf 里用 %c 输入与输出字符 


*/
 
/*
#include <stdio.h>

int main()
{
	char c;
	char d;
	c = 1;
	d = '1';
	if ( c == d) {
		printf("xiangdeng");
	} else {
		printf("不相等\n"); 
	}
	printf("c=%d\n",c);
	printf("d= %d\n",d);
 } 
 */
 
/* 
#include <stdio.h>

int main()
{
	char c;
	scanf("%c",&c);
	printf("c=%d\n",c);
	printf("c= '%c'\n",c);
	
	return 0; 
 } 
 */
 
 
 /* 
#include <stdio.h>

int main()
{
	int i;   //字符的ASCII编码 
	char c;
	scanf("%d",&i);
	c = i;
	printf("c=%d\n",c);
	printf("c= '%c'\n",c);
	
	return 0; 
 } 
 
  */
 /* 
#include <stdio.h>

int main()
{
	if ( 49 == '1' ) { //ASCII编码和字符  
		printf("OK");
	}	
	return 0; 
 } 
 */
 
 /* 
 //混合输入
 #include <stdio.h>

int main()
{
	int i;
	char c;
	scanf("%d %c",&i,&c); //%d 没有空格 只读到整数  
	printf("i=%d,c=%d,c='%c'\n",i,c,c);	
	return 0; 
 } 
 */
 
//字符计算 
#include <stdio.h>
/*
int main()
{

	char c = 'A';
	c++;
	printf("%c\n",c); //B
	return 0; 
 }
 */
 int main()
{

	int i = 'Z'-'A';
	
	printf("%d\n",i); //25
	return 0; 
 }  
 
 //一个字符加一个数字得到ASCII码表的那个数之后的字符 
//  两个字符的减 得到他们在表中的距离  
// 0-9是顺序排列的 
 //字母在ASCII中是顺序排列的
 
 //大写字母和小写字母是分开排列的,不在一起 
 'a'-'A'得到两段之间的距离,于是:
 	a+'a'-'A'把一个大写字母变成小写字母
	a+'A'-'a'把小写字母变成大写字母 
