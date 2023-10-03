#include <stdio.h>

int main() {
    double a, b, c;

    
    printf("Digite o valor do lado A: ");
    scanf("%lf", &a);

    printf("Digite o valor do lado B: ");
    scanf("%lf", &b);

    printf("Digite o valor do lado C: ");
    scanf("%lf", &c);

    // valores que formam um triangulo
    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) {
            printf("Os lados formam um triangulo equilatero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Os lados formam um triangulo isosceles.\n");
        } else {
            printf("Os lados formam um triangulo escaleno.\n");
        }
    } else {
        printf("Os lados não formam um triangulo.\n");
    }

    return 0;
}
