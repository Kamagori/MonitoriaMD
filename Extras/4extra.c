#include <stdio.h>

int main() {
    float alturas[5][10];
    float maior_altura[5] = {0};
    for (int i = 0; i < 5; i++) {
        printf("Delegação %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Digite a altura do atleta %d: ", j + 1);
            scanf("%f", &alturas[i][j]);
            if (alturas[i][j] > maior_altura[i]) {
                maior_altura[i] = alturas[i][j];
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("Maior altura da delegação %d: %.2f metros\n", i + 1, maior_altura[i]);
    }
    return 0;
}
