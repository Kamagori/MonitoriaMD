#include <stdio.h>
int main() {
    int matrizN[4][4];
    int valor;
    printf("Digite um valor inicial: ");
    scanf("%d", &valor);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrizN[i][j] = valor;
            valor *= 2;
        }
    }
    printf("Matriz resultante:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrizN[i][j]);
        }
        printf("\n");
    }
    return 0;
}