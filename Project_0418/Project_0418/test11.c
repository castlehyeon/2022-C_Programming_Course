#include<stdio.h>

int main(void)
{
	int time, age, charge;
	//���� ����

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����)");
	scanf("%d %d", &time, &age);
	//����� �� �Է�

	if (time < 17)
	{
		if (age >= 13 && age <= 64)
			printf("����� 34,000���Դϴ�.");
		else
			printf("����� 25.000���Դϴ�.");
	}
	else
		printf("����� 10.000���Դϴ�.");

	return 0;
}