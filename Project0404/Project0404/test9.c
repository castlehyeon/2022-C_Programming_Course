//입력, 처리, 출력
//scanf, 변수필요(돈, 잔의 개수, 거스름돈-500, 100, 50 개수) 몫을 구하는 연산자 사용.
#include <stdio.h>

int main(void) {

	int input, coffee, cost, output, coin_500, coin_100, coin_50;
	
	printf("돈을 입력하세요 : ");
	scanf("%d", &input);
	printf("커피를 몇잔 뽑을까요? :  ");
	scanf("%d", &coffee);

	cost = coffee * 150;
	output = input - cost;
	
	coin_500 = output / 500;
	output = output % 500;
	coin_100 = output / 100;
	output = output % 100;
	coin_50 = output / 50;

	printf("총 사용금액은 %d입니다. \n", cost);
	printf("500원짜리 동전 %d개\n", coin_500);
	printf("100원짜리 동전 %d개\n", coin_100);
	printf("50원짜리 동전 %d개", coin_50);

	return 0;
}