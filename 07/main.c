#include <stdio.h>

int main()
{
    char p[50];
    printf("qual o seu nome? ");
    scanf("%49[^\n]", p);
    printf("Bem vindo %s\n", p);

    return 0;
}