/*��������Ϸ
����ϵͳ�������һ��100���ڵ����������û�����һ����������в²⣬
��Ҫ���д�����Զ���������������ı��������бȽϣ�����ʾ���ˣ���Too big"��������С�ˣ���Too small"������ȱ�ʾ�µ��ˡ�
����µ������������
����Ҫ��ͳ�ƲµĴ�����
�����1�β³���������ʾ��Bingo��"��
���3�����ڲµ�����������ʾ��Lucky You��"��
�������3�ε�����N��>3�������ڣ�������N�Σ��µ�����������ʾ��Good Guess��"��
�������N�ζ�û�вµ�������ʾ��Game Over"������������
����ڵ���N��֮ǰ���û�������һ��������Ҳ�����Game Over"������������
�����ʽ��
�����һ���и���2��������100�����������ֱ���ϵͳ��������������Լ��²��������N�����ÿ�и���һ���û������룬ֱ�����ָ���Ϊֹ��
�����ʽ��
��һ�������ÿ�β²���Ӧ�Ľ����ֱ������¶ԵĽ����Game Over"�������
����������
58 4
70
50
56
58
60
-2
*/

#include <stdio.h>

int main()
{
	int number,n;
	int inp;
	int finished = 0;
	int cnt = 0;
	scanf("%d %d",&number,&n);
	do {
		scanf("%d",&inp);
		cnt++;
		if ( inp < 0) {
			printf("Game Over\n");
			finished = 1;
		} else if ( inp > number ) {
			printf("Top big\n");
		} else if ( inp < number) {
			printf("Too small\n");
		} else {
			if ( cnt == 1) {
				printf("Bingo!\n");
			} else if ( cnt <= 3) {
				printf("Luckey You!\n");
			} else {
				printf("Good Guess\n"); 
			}
			finished = 1; 
		}
		if ( cnt == n) {
			if (!finished ) {
				printf("Game Over\n");
				finished = 1;
			}
		}
	} while ( !finished);
	
	return 0;
}
