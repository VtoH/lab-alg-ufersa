#include <stdio.h>

int main()
{
    int i = 1;
    int x;
    printf("insira o numero ");
    scanf("%d", &x);
    while (i<11){
        printf("%d \n", x*i);
        i=i+1;
    }
    return 0;
}