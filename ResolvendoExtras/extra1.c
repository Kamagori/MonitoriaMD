#include <stdio.h>
int main() {
    int pares[3][3] = {0};
    int impares[3][3] = {0};
    int valor;
    int count_pares = 0;
    int count_impares = 0;
    for (int i = 0; i < 25; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);
        if (valor % 2 == 0) {
            pares[count_pares / 3][count_pares % 3] = valor;
            count_pares++;
            if (count_pares == 9) {
                printf("Matriz de numeros pares cheia:\n");
                for (int j = 0; j < 3; j++) {
                    for (int k = 0; k < 3; k++) {
                        printf("%d ", pares[j][k]);
                    }
                    printf("\n");
                }
                count_pares = 0;
            }
        } else {
            impares[count_impares / 3][count_impares % 3] = valor;
            count_impares++;
            if (count_impares == 9) {
                printf("Matriz de numeros impares cheia:\n");
                for (int j = 0; j < 3; j++) {
                    for (int k = 0; k < 3; k++) {
                        printf("%d ", impares[j][k]);
                    }
                    printf("\n");
                }
                count_impares = 0;
            }
        }
    }
    printf("Conteudo restante da matriz de numeros impares:\n");
    for (int i = 0; i < count_impares; i++) {
        printf("%d ", impares[i / 3][i % 3]);
    }
    printf("\n");
    printf("Conteudo restante da matriz de numeros pares:\n");
    for (int i = 0; i < count_pares; i++) {
        printf("%d ", pares[i / 3][i % 3]);
    }
    printf("\n");
    return 0;
}