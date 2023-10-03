#include <stdio.h>

int main() {
    int voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, votosNulos = 0, votosEmBranco = 0;

    printf("Digite o codigo do candidato (1, 2, 3, 4, 5 para nulo, 6 para branco, 0 para sair):\n");

    while (1) {
        scanf("%d", &voto);

        if (voto == 0) {
            break; 
        }

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosEmBranco++;
                break;
            default:
                printf("Invalido. Tente novamente.\n");
        }
    }

    printf("Total de votos para cada candidato:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosEmBranco);

    return 0;
}
