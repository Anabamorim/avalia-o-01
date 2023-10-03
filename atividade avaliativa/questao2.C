#include <stdio.h>

int main() {
    float alturaChico = 1.50;   // altura inicial
    float alturaZe = 1.10;     
    int anos = 0;              

    while (alturaZe <= alturaChico) {
        alturaChico += 0.02;    // Chico cresce 2 centímetros por ano 
        alturaZe += 0.03;       // Zé cresce 3 centímetros por ano 
        anos++;
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

    return 0;
}
