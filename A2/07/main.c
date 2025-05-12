#include <stdio.h>


int main() {
    char op[5];
    float temp;


    while (1) {
        printf("\nConverter para (C/F) ou 'sair': ");
        scanf("%4s", op);


        if (op[0] == 's') break;


        if (op[0] == 'C') {
            printf("Digite Fahrenheit: ");
            scanf("%f", &temp);
            printf("Celsius: %.2f\n", (temp - 32) * 5 / 9);
        }
        else if (op[0] == 'F') {
            printf("Digite Celsius: ");
            scanf("%f", &temp);
            printf("Fahrenheit: %.2f\n", temp * 9 / 5 + 32);
        }
        else {
            printf("Opção inválida!\n");
        }
    }


    return 0;
}

