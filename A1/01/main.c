#include <stdio.h>

int main()
{
    char p[50];
    printf("insira sua comida favorita ");
    scanf("%49[^\n]", p);
    printf("sua comida favorita é: %s\n", p);

    return 0;
}