#include <stdio.h>

int main()
{
    int i =1;
    float x[3];
    while (i<4){
        printf("insira a nota: ");
        scanf("%f", &x[i-1]);
        i++;
    }
    float media = (x[0]+x[1]+x[2])/3;
    if(media >= 7){
        printf("parabens voce esta aprovado");
    }
    else{
        printf("reprovado");
    }
    return 0;
}