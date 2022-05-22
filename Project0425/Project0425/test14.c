//#include <stdio.h>
////rand함수 임포트
//#include <stdlib.h>
//#include <time.h>
//
//
//int main(void) {
//	int input, answer, tries, i;
//	srand(time(NULL));
//	answer = rand() % 10;
//	tries = 0;
//
//	do {
//
//		printf("▶정답을 추측해보세요: ");
//		scanf("%d", &input);
//		if (input > answer)
//			// 사용자가입력한정수가정답보다높으면
//		printf("제시한 정수가 높습니다.\n");
//		if(input < answer)
//			// 사용자가입력한정수가정답보다낮으면
//			printf("제시한 정수가 낮습니다.\n");
//		tries++;
//	} while (input != answer);
//
//	printf("맞았습니다.\n");
//	printf("축하합니다.시도횟수=%d", tries);
//
//	return 0;
//}