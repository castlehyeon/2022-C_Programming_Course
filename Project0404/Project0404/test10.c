/* for문 배열 쓰려 했는데 복잡해진다.
#include <stdio.h>
#define SIZE 3

int main(void) {

	int input, coffee, cost, output;
	int coin[SIZE];

	printf("돈을 입력하세요 : \n");
	scanf("%d", &input);
	printf("커피를 몇잔 뽑을까요? :  ");
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

	printf("총 사용금액은 %d입니다. ", cost);
	printf("500원짜리 동전 %d개", coin_500);
	printf("100원짜리 동전 %d개", coin_100);
	printf("50원짜리 동전 %d개", coin_50);

	return 0;
}

*/