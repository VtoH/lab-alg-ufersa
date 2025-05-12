#include <stdio.h>


void Tabela(int multiplicador, float numero) {
    int i;
    for (i = 1; i <= multiplicador; i++) {
        printf("%d * %.2f = %.2f\n", i, numero, i * numero);
    }
}


int main() {
    float numero;
    int multiplicador;
    char YN[4];


    while (1) {
        printf("Quer multiplicar os números? (S/N): ");
        scanf(" %s", YN);


        if (YN[0] == 'S' || YN[0] == 's') {
            printf("Até que número será multiplicado? ");
            scanf("%d", &multiplicador);


            printf("Qual número será multiplicado? ");
            scanf("%f", &numero);


            Tabela(multiplicador, numero);
        } else {
            break;
        }
    }


    return 0;
}
