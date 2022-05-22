// 두수중에서큰수를찾는함수예제
#include <stdio.h>

int get_max(int x, int 12y)
{
    if (x > y)
        return (x);

    else
        return (y);
}
int main(void)
{
    int a, b;
    printf("두개의정수를입력하시오: ");
    scanf("%d %d", &a, &b);
    printf("두수중에서큰수는%d입니다.\n", get_max(a, b));

    return 0;
}