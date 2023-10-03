#include <stdio.h>
#include <string.h>

int main() {
    int codigoCidade, numVeiculos, numAcidentes;
    char estado[3];
    int maiorAcidentes = 0, menorAcidentes = 0, codigoMaiorAcidentes = 0, codigoMenorAcidentes = 0;
    float mediaVeiculos = 0, totalVeiculos = 0, mediaAcidentesRS = 0;
    int numCidadesRS = 0;

    for (int i = 1; i <= 200; i++) {
        printf("Digite o codigo da cidade %d: ", i);
        scanf("%d", &codigoCidade);

        if (codigoCidade == 0) {
            break; 
        }

        printf("Digite o estado da cidade (sigla): ");
        scanf("%s", estado);

        printf("Digite o numero de veiculos de passeio (em 1992): ");
        scanf("%d", &numVeiculos);

        printf("Digite o numero de acidentes de transito com vitimas (em 1992): ");
        scanf("%d", &numAcidentes);

        totalVeiculos += numVeiculos;

        if (strcmp(estado, "RS") == 0) {
            numCidadesRS++;
            mediaAcidentesRS += numAcidentes;
        }

        if (i == 1 || numAcidentes > maiorAcidentes) {
            maiorAcidentes = numAcidentes;
            codigoMaiorAcidentes = codigoCidade;
        }

        if (i == 1 || numAcidentes < menorAcidentes) {
            menorAcidentes = numAcidentes;
            codigoMenorAcidentes = codigoCidade;
        }
    }

    if (numCidadesRS > 0) {
        mediaAcidentesRS /= numCidadesRS;
    }

    if (totalVeiculos > 0) {
        mediaVeiculos = totalVeiculos / 200;
    }

    printf("a) Maior indice de acidentes de transito: %d (Cidade %d)\n", maiorAcidentes, codigoMaiorAcidentes);
    printf("   Menor indice de acidentes de transito: %d (Cidade %d)\n", menorAcidentes, codigoMenorAcidentes);
    printf("b) Media de veiculos nas cidades brasileiras: %.2f\n", mediaVeiculos);
    printf("c) Media de acidentes com vitimas entre as cidades do Rio Grande do Sul: %.2f\n", mediaAcidentesRS);

    return 0;
}
