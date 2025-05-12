#include <stdio.h>


float calcMedia(int loops) {
    float totalgrades[100];
    float totalpesos[100];
    float media = 0;
    float soma_pesos = 0;
    int x = 0;


    while (x < loops) {
        printf("Insira a nota %d: ", x + 1);
        scanf("%f", &totalgrades[x]);
        printf("Insira o peso %d: ", x + 1);
        scanf("%f", &totalpesos[x]);


     
        if (totalgrades[x] < 0 || totalgrades[x] > 10) {
            printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
            continue;
        }




        if (totalpesos[x] <= 0) {
            printf("Peso inválido. Digite um valor positivo.\n");
            continue;
        }


        media += totalgrades[x] * totalpesos[x];
        soma_pesos += totalpesos[x];
        x++;
    }


    return media / soma_pesos;
}


int main() {
    int loops;
    float media;


    printf("Quantas notas serão enviadas? ");
    scanf("%d", &loops);


    if (loops <= 0 || loops > 100) {
        printf("Número inválido de notas. O limite é 1 a 100.\n");
        return 1;
    }


    media = calcMedia(loops);
    printf("A média é: %.2f\n", media);


    return 0;
}
