#include <stdio.h>


float calcMedia(int loops) {
    float totalgrades[100];
    float media = 0;
    int x = 0;


    while (x < loops) {
        printf("Insira a nota %d: ", x + 1);
        scanf("%f", &totalgrades[x]);


        if (totalgrades[x] < 0 || totalgrades[x] > 10) {
            printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
            continue;
        }


        media += totalgrades[x];
        x++;
    }


    return media / loops;
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
