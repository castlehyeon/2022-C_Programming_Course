/* for�� �迭 ���� �ߴµ� ����������.
#include <stdio.h>
#define SIZE 3

int main(void) {

	int input, coffee, cost, output;
	int coin[SIZE];

	printf("���� �Է��ϼ��� : \n");
	scanf("%d", &input);
	printf("Ŀ�Ǹ� ���� �������? :  ");
	scanf("%d", &coffee);

	cost = coffee * 150;
	output = input - cost;

i = 1;
for (j=1; output >= 50 j++) {
	output = cost - (500*j);
	coin[i] =
i++
}

	coin_500 = output / 500;
	output = output % 500;
	coin_100 = output / 100;
	output = output % 100;
	coin_50 = output / 50;

	printf("�� ���ݾ��� %d�Դϴ�. ", cost);
	printf("500��¥�� ���� %d��", coin_500);
	printf("100��¥�� ���� %d��", coin_100);
	printf("50��¥�� ���� %d��", coin_50);

	return 0;
}

*/