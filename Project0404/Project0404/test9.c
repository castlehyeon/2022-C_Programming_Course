//�Է�, ó��, ���
//scanf, �����ʿ�(��, ���� ����, �Ž�����-500, 100, 50 ����) ���� ���ϴ� ������ ���.
#include <stdio.h>

int main(void) {

	int input, coffee, cost, output, coin_500, coin_100, coin_50;
	
	printf("���� �Է��ϼ��� : ");
	scanf("%d", &input);
	printf("Ŀ�Ǹ� ���� �������? :  ");
	scanf("%d", &coffee);

	cost = coffee * 150;
	output = input - cost;
	
	coin_500 = output / 500;
	output = output % 500;
	coin_100 = output / 100;
	output = output % 100;
	coin_50 = output / 50;

	printf("�� ���ݾ��� %d�Դϴ�. \n", cost);
	printf("500��¥�� ���� %d��\n", coin_500);
	printf("100��¥�� ���� %d��\n", coin_100);
	printf("50��¥�� ���� %d��", coin_50);

	return 0;
}