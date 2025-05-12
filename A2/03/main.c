#include <stdio.h>
#include <math.h>


int main() {
    int primo;
    int i;
    int ehPrimo = 1;


    printf("Digite o número: ");
    scanf("%d", &primo);


    if (primo <= 1) {
        ehPrimo = 0;
    } else {
        for (i = 2; i <= sqrt(primo); i++) {
            if (primo % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }


    if (ehPrimo==1) {
        printf("%d é primo.\n", primo);
    } else {
        printf("%d não é primo.\n", primo);
    }


    return 0;
}
