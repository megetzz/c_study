/*超过范围的浮点数

printf 输出 inf 表示超过范围的浮点数  : ±∞
printf 输出 nan 表示不存在的浮点数  

*/

/*
#include <stdio.h> 

int main()
{
	printf("%f\n",12.0/0.0);
	printf("%f\n",-12.0/0.0);
	printf("%f\n",0.0/0.0);
	
	return 0;
}
 */
 
#include <stdio.h>

int main()
{
	float a, b, c;
	// 带小数点的字面量是double 而非 float
	// float 需要f或F后缀来表明身份 
	a = 1.345f;
	b = 1.123f;
	c = a + b;
	if ( c == 2.468 ) {
		printf("相等\n"); 
	} else {
		printf("不相等! c = %.10f,或%f\n",c,c);   //不相等! c = 2.4679999352,或2.468000
	} 
	return 0;
}
