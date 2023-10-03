#include <stdio.h>

int main() {
    float A, B, C;
    
    printf("Digite os três valores A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);
    
    if (A + B > C && A + C > B && B + C > A) {
        printf("Esses valores podem ser os lados de um triangulo.\n");
        
        if (A * A + B * B == C * C || A * A + C * C == B * B || B * B + C * C == A * A) {
            printf("É um triangulo retangulo (90º).\n");
        } else if (A * A + B * B < C * C || A * A + C * C < B * B || B * B + C * C < A * A) {
            printf("É um triangulo obtusangulo (> 90º).\n");
        } else {
            printf("É um triangulo acutangulo (< 90º).\n");
        }
    } else {
        printf("Esses valores não podem ser os lados de um triangulo.\n");
    }
    
    return 0;
}
