#include<stdio.h>

int main(void)
{
	printf("do-while���� ����� ��Ģ���� �����Դϴ�.");
	printf("\n\n\n");
	int x, y, cal, result;
	printf("�� ���� �Է��ϼ���:  ");
	scanf("%d %d", &x, &y);
	printf("\n");
	printf("�Է��� ���� %d, %d�Դϴ�.\n\n", x, y);

	do {
		printf("*******���� �޴�*******\n");
		printf("0. ���� ���Է�\n");
		printf("1. ����\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("4. ������\n");
		printf("5. ������\n");
		printf("6. ����\n");
		printf("������ ������ �����ϼ���: ");
		scanf("%d", &cal);
		printf("\n");

		if (cal == 0)
		{
			printf("�� ���� �Է��ϼ���:  ");
			scanf("%d %d", &x, &y);
			printf("\n");
			printf("�Է��� ���� %d, %d�Դϴ�.\n\n", x, y);
			continue;
		}
		else if (cal == 1)
		{
			result = x + y;
			printf("��������� %d�Դϴ�.\n", result);
		}
		else if (cal == 2)
		{
			result = x - y;
			printf("��������� %d�Դϴ�.\n", result);
		}
		else if (cal == 3)
		{
			result = x * y;
			printf("��������� %d�Դϴ�.\n", result);
		}
		else if (cal == 4)
		{
			if (y > 0)
			{
				result = x / y;
				printf("����������� %d�Դϴ�.\n", result);
			}
			else
			{
				printf("y�� �����Է��� �߸� �Ǿ����ϴ�.\n\n");
				printf("�ڡڡڡ����α׷��� ������Ͽ� �ٽ� ���ڸ� �Է����ּ���.�ڡڡڡ�\n");
				break;
			}
		}
		else if (cal == 5)
		{
			if (y > 0)
			{
				result = x % y;
				printf("����������� %d�Դϴ�.\n", result);
			}
			else
			{
				printf("y�� �����Է��� �߸� �Ǿ����ϴ�.\n\n");
				printf("�ڡڡڡ����α׷��� ������Ͽ� �ٽ� ���ڸ� �Է����ּ���.�ڡڡڡ�\n");
				break;
			}
		}
		else if (cal == 6)
		{
			break;
		}
		
		else
		{
			printf("�ڡڡڡڼ����� ������  �ٽ� �Է����ּ���.�ڡڡڡ�\n\n");
			break;
		}
	} while (cal != 6);

	printf("���α׷��� �����մϴ�.");

		return 0;
}