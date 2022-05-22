#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Selcetlotto( void );


int main()
{
    int i, input;
    printf("구매할 로또의 개수를 입력하세요 : ");
    scanf("%d", &input);
    printf("\n");
    printf("입력한 로또의 개수는 %d개입니다.\n\n", input);
    for (i = 1; i <= input; i++)
    {
        printf("%d번 로또 : ", i);
        Selcetlotto();
        printf("\n");
    }
    return 0;
}
void Selcetlotto( void )
{
    int i;
    for(i=1;i<=6;i++)
        printf("%d ", rand()%45+1);
}