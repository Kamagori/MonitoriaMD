#include <stdio.h>
#include <stdlib.h>

// int main(){
//     for(int i = 1; i <= 3; i++){
//         int num, cubo;
//         printf("Informe um numero: ");
//         scanf("%d",&num);
//         cubo = num * num * num;
//         printf("O cubo do numero informado eh %d\n", cubo);
//     }
// }

// int main(){
//     int N, i, soma = 0;
//     scanf("%d", &N);
//     for(i = 1; i <= N; i++){
//         soma += i;
//     }
//     printf("%d", soma);
// }

// int main(){
//     int quantos, n, i, maior = 0;
//     scanf("%d", &quantos);
//     for(i = 1; i <= quantos; i++){
//         scanf("%d", &n);
//         if (maior < n){
//             maior = n;
//         }
//     }
//     printf("O maior numero informado foi: %d", maior);
// }

// int main(){
//     int n, pares = 0, impares = 0;
//     for(int i = 1; i <= 3; i++){
//         scanf("%d", &n);
//         if (n % 2 == 0)
//             pares ++;
//         else
//             impares ++;
//     }
//     printf("Foram %d pares.\n", pares);
//     printf("Foram %d impares.\n", impares);
// }

// int main(){
//     int n, num, soma_pares = 0;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         scanf("%d", &num);
//         if(num % 2 == 0)
//             soma_pares += num;
//     }
//     printf("Soma dos numeros pares: %d.\n", soma_pares);
// }

// int main(){
//     int n, fat = 1;
//     scanf("%d", &n);
//     for (int i = n; i >= 1; i--){
//         fat = fat * i;
//     }
//     printf("%d", fat);
// }

// int main(){
//     int N, num;
//     float media, soma = 0;
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++){
//         scanf("%d", &num);
//         soma += num;
//     }
//     media = soma/N;
//     printf("%.2f", media);
// }

// int main(){
//     float prest, salario;
//     while(1){
//         scanf("%f", &salario);
//         if (salario < 0)
//             break;
//         scanf("%f", &prest);
//         if (prest >= salario * 0.3)
//             printf("Emprestimo nao pode ser concedido.\n");
//         else
//             printf("Emprestimo pode ser concedido.\n");
//     }
// }

// int main(){
//     int m, j, card, cons;
//     scanf("%d %d", &j, &m);
//     card = j % m;
//     cons = j;
//     for (int i = 0; i <= 5; i++){
//         cons += card + 1;
//         printf("%d\n", cons);
//     }
// }

// int main(){
//     int N;
//     double E = 1.0;
//     printf("Digite um valor inteiro e positivo para N: ");
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++){
//         E += 1.0 / i;
//     }
//     E--;
//     printf("O valor de E para N = %d eh: %.2lf\n", N, E);
//     return 0;
// }

// int main() {
//     int N;
//     double E = 0.0;
//     int i = 1;
//     printf("Digite um valor inteiro e positivo para N: ");
//     scanf("%d", &N);
//     while (i <= N) {
//         E += 1.0 / i;
//         i++;
//     }
//     printf("O valor de E para N = %d eh: %lf\n", N, E);
//     return 0;
// }

// int main() {
//     int N;
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++) {
//         printf("%d X %d = %d\n", i, N, i * N);
//     }
// }

// int main() {
//     int N;
//     scanf("%d", &N);
//     int i = 1;
//     while (i <= N) {
//         printf("%d X %d = %d\n", i, N, i * N);
//         i++;
//     }
// }
