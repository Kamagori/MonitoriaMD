#include <stdio.h>
#include <unistd.h>

int main() {
    FILE *arquivoNumeros, *arquivoPares;
    int numero;

    arquivoNumeros = fopen("numeros.txt", "r");

    if (arquivoNumeros == NULL) {
        printf("Erro ao abrir o arquivo numeros.txt.\n");
        return 1;
    }

    arquivoPares = fopen("pares.txt", "w");

    if (arquivoPares == NULL) {
        printf("Erro ao abrir o arquivo pares.txt.\n");
        return 1;
    }

    while (fscanf(arquivoNumeros, "%d", &numero) != EOF) {
        if (numero % 2 == 0) {
            fprintf(arquivoPares, "%d\n", numero);
        }
    }

    fclose(arquivoNumeros);
    fclose(arquivoPares);

    printf("Numeros pares foram copiados para o arquivo pares.txt.\n");

    return 0;
}
