#include <stdio.h>

int main()
{
    float allnums[2]; 
    printf("insira o numero 1 ");
    scanf("%f", &allnums[0]);
    printf("insira o numero 2 ");
    scanf("%f", &allnums[1]);
     if (allnums[1] == allnums[0]) {
        printf("Os numeros sao iguais.");
    } else if (allnums[1] > allnums[0]) {
        printf("O maior numero eh: %.2f\n", allnums[1]);
    } else {
        printf("O maior numero eh: %.2f\n", allnums[0]);
    }
    return 0;
}