#include<stdio.h>

int main(void) {
	int i,j,k;
	int max;
	//���� ����

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d%d%d", &i, &j, &k);
	//����� �� �Է�

	max = (i > j) ? i : j;
	max = (max > k) ? max : k;
	//���ǿ����ڸ� ����� �ִ밪 ��

	printf("�ִ밪: %d", max);
	//�ִ밪 ���

	return 0;
}
