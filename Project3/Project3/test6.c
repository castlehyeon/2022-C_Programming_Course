#include <stdio.h>

int main(void)
{
	double kor, eng, mat, phy, bio; //��������
	int sum;
	double avg;

	printf("���������� �Է��ϼ���: ");  //�� ���� �Էºκ�
	scanf("%lf", &kor);
	printf("���������� �Է��ϼ���: ");
	scanf("%lf", &eng); 
	printf("���������� �Է��ϼ���: ");
	scanf("%lf", &mat);
	printf("���������� �Է��ϼ���: ");
	scanf("%lf", &phy);
	printf("������������ �Է��ϼ���: ");
	scanf("%lf", &bio);

	sum = kor + eng + mat + phy + bio;
	avg = sum / 5;
	printf("�ټ� ������ ������ %d �Դϴ�. \n", sum);
	printf("�ټ� ������ ����� %lf �Դϴ�.", avg);

	return 0;
}