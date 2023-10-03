#include <stdio.h>

int main() {
    float salario, mediaSalario = 0, mediaFilhos = 0, maiorSalario = 0;
    int numFilhos, totalPessoasSalarioBaixo = 0, numHabitantes = 0;

    do {
        printf("Digite o salario do habitante (ou um valor negativo para encerrar): R$");
        scanf("%f", &salario);

        if (salario >= 0) {
            printf("Digite o numero de filhos do habitante: ");
            scanf("%d", &numFilhos);

            
            mediaSalario += salario;

            
            mediaFilhos += numFilhos;

            
            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            
            if (salario <= 100.0) {
                totalPessoasSalarioBaixo++;
            }

            numHabitantes++;
        }
    } while (salario >= 0);

    
    if (numHabitantes > 0) {
        // Calcula a média do salário
        mediaSalario /= numHabitantes;

        
        mediaFilhos /= numHabitantes;

        // pessoas com salário até R$100,00
        float percentualSalarioBaixo = (float)totalPessoasSalarioBaixo / numHabitantes * 100;

        printf("-1) Media do salario da populacao: R$%.2f\n", mediaSalario);
        printf("-2) Media do numero de filhos: %.2f\n", mediaFilhos);
        printf("-3) Maior salario: R$%.2f\n", maiorSalario);
        printf("-4) Percentual de pessoas com salario ate R$100,00: %.2f%%\n", percentualSalarioBaixo);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}

