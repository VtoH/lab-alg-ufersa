#include <stdio.h>

int main()
{
    float num1;
    float num2;
    printf("insira o numero 1 ");
    scanf("%f", &num1);
    printf("insira o numero 2 ");
    scanf("%f", &num2);
    float result = num1*num2;
    printf("a multiplicação é: %f", result);

    return 0;
}