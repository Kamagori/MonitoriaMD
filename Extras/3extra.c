#include <stdio.h>

int main() {
    float servico_precos[3] = {10.0, 15.0, 30.0};
    int quantidade_servicos[5][3];
    float salario_funcionaria[5]; 

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite a quantidade de servicos realizados pela funcionaria %d para o servico %d: ", i + 1, j + 1);
            scanf("%d", &quantidade_servicos[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        salario_funcionaria[i] = 0.0;
        for (int j = 0; j < 3; j++) {
            salario_funcionaria[i] += quantidade_servicos[i][j] * servico_precos[j];
        }
        salario_funcionaria[i] *= 0.5;
    }
    for (int i = 0; i < 5; i++) {
        printf("Funcionaria %d recebera R$%.2f\n", i + 1, salario_funcionaria[i]);
    }

    return 0;
}
