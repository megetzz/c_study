/*�ַ�����  char ������Ҳ������  �ַ�
�õ����ű�ʾ���ַ������� 'a' '1'
'' Ҳ��һ���ӷ�
printf �� scanf ���� %c ����������ַ� 


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
		printf("�����\n"); 
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
	int i;   //�ַ���ASCII���� 
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
	if ( 49 == '1' ) { //ASCII������ַ�  
		printf("OK");
	}	
	return 0; 
 } 
 */
 
 /* 
 //�������
 #include <stdio.h>

int main()
{
	int i;
	char c;
	scanf("%d %c",&i,&c); //%d û�пո� ֻ��������  
	printf("i=%d,c=%d,c='%c'\n",i,c,c);	
	return 0; 
 } 
 */
 
//�ַ����� 
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
 
 //һ���ַ���һ�����ֵõ�ASCII�����Ǹ���֮����ַ� 
//  �����ַ��ļ� �õ������ڱ��еľ���  
// 0-9��˳�����е� 
 //��ĸ��ASCII����˳�����е�
 
 //��д��ĸ��Сд��ĸ�Ƿֿ����е�,����һ�� 
 'a'-'A'�õ�����֮��ľ���,����:
 	a+'a'-'A'��һ����д��ĸ���Сд��ĸ
	a+'A'-'a'��Сд��ĸ��ɴ�д��ĸ 
