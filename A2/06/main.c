#include <stdio.h>


int main() {
    float a, b, c;
   
    printf("Digite os 3 lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);


    if (a == b && b == c) {
        printf("Equilátero\n");
    }
    else if (a == b || a == c || b == c) {
        printf("Isósceles\n");
    }
    else {
        printf("Escaleno\n");
    }


    return 0;
}
