#include <stdio.h>

int main()
{
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬""������\"5 7\"��ʾ5Ӣ��7Ӣ�磺");

//  ��һ�ַ�ʽ   ����int �����ʱ��ӡ�0	
//	int foot;
//	int inch;

//�ڶ��鷽��  ����� double����  ˫���ȸ�����

	double foot;
	double inch; 
//	��һ ��   ���� 
//	scanf("%d %d",&foot,&inch);

//�ڶ��� ����  %lf 
	scanf("%lf %lf", &foot,&inch); 
//	int  �� �� %d    ������ �� %f
//��һ�ֵķ��� 
//	printf("�����%f�ס�\n",((foot + inch / 12.0)* 0.3048));
	 
//	 �ڶ��ֵķ���
	printf("�����%f�ס�\n",((foot + inch /12)*0.3048));
	 
//	 ��������������һ���������ʱ��c �Ὣ ���� ת���� ����˭ 
//Ȼ����и����������� 
//double �� float�����ȸ����� 

	return 0;
}
