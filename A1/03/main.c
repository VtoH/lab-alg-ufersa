#include <stdio.h>

int main()
{
    int num;
    printf("insira o numero ");
    scanf("%d", &num);
    if (num%2 != 0){
        printf("o numero e impar");
    }
    else{
        printf("o numero e par");
    }
    return 0;
}