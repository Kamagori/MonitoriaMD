#include <stdio.h>

int main() {
    int num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite a operação desejada (+ para adição, - para subtração): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        resultado = num1 + num2;
    } else if (operacao == '-') {
        resultado = num1 - num2;
    } else {
        printf("Operação inválida.\n");
        return 1;
    }

    FILE *arquivo;
    arquivo = fopen("calculadora.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "%d %c %d = %d\n", num1, operacao, num2, resultado);

    fclose(arquivo);

    printf("Operação realizada com sucesso. Resultado gravado em calculadora.txt\n");

    return 0;
}
