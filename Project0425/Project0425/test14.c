//#include <stdio.h>
////rand�Լ� ����Ʈ
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
//		printf("�������� �����غ�����: ");
//		scanf("%d", &input);
//		if (input > answer)
//			// ����ڰ��Է������������亸�ٳ�����
//		printf("������ ������ �����ϴ�.\n");
//		if(input < answer)
//			// ����ڰ��Է������������亸�ٳ�����
//			printf("������ ������ �����ϴ�.\n");
//		tries++;
//	} while (input != answer);
//
//	printf("�¾ҽ��ϴ�.\n");
//	printf("�����մϴ�.�õ�Ƚ��=%d", tries);
//
//	return 0;
//}