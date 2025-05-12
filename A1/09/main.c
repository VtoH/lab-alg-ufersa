#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    char elementos[3];
    printf("Digite 3 caracteres (ex: 5 a @): ");
    scanf("%c %c %c", &elementos[0], &elementos[1], &elementos[2]);
    srand(time(NULL));
    
    for (int i = 0; i < 3; i++) {
        int j = rand() % 3;
        char tmp = elementos[i];
        elementos[i] = elementos[j];
        elementos[j] = tmp;
    }
    printf("sua senha e:");
    for (int i = 0; i < 3; i++){
    printf("%c ", elementos[i]);
    }
    return 0;
}