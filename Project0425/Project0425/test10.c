//#include<stdio.h>
//
//int main(void) {
//	int answer = 59;
//	// 정답
//	int guess;
//	int tries = 0;
//
//	do {
//		printf("정답을추측하여보시오: ");
//		scanf("%d", &guess);
//		tries++;
//		if (guess > answer)
//			// 사용자가입력한정수가정답보다높으면
//			printf("제시한정수가높습니다.");
//		if (guess < answer)
//			// 사용자가입력한정수가정답보다낮으면
//			printf("제시한정수가낮습니다.");
//	} while (guess != answer);
//
//	printf("축하합니다.시도횟수=%d", tries);
//
//	return 0;
//}