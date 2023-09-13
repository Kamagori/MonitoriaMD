#include <stdlib.h>
#include <math.h>
#include <stdio.h>

// int main(){
//     int inteiros[10], cont = 0;
//     scanf("%d %d %d %d %d %d %d %d %d %d", &inteiros[0], &inteiros[1], &inteiros[2], &inteiros[3], &inteiros[4], &inteiros[5], &inteiros[6], &inteiros[7], &inteiros[8], &inteiros[9]);
//     for (int i = 0; i < 10; i++){
//             if (inteiros[i] == 5){
//                 printf("%d\n", i);
//                 cont ++;
//             }
//     }
//     if(cont == 0){
//         printf("-1");
//     }
// }

// int main() {
//     int vetor[6];
//     int positivos = 0;
//     int negativos = 0;
//     for (int i = 0; i < 6; i++) {
//         scanf("%d", &vetor[i]);
//     }
//     for (int i = 0; i < 6; i++) {
//         if (vetor[i] > 0)
//             positivos++;
//         else if (vetor[i] < 0)
//             negativos++;
//     }
//     printf("Quantidade de numeros positivos: %d\n", positivos);
//     printf("Quantidade de numeros negativos: %d\n", negativos);
//     return 0;
// }

// int main() {
//     double notas[10], soma = 0.0, media;
//     for (int i = 0; i < 10; i++) {
//         printf("Digite a nota %d: ", i + 1);
//         scanf("%lf", &notas[i]);
//         soma += notas[i];
//     }
//     media = soma / 10;
//     printf("A media das notas e: %.2lf\n", media);
//     return 0;
// }

// int main() {
//     int tamanho = 15;
//     int vetor[tamanho];
//     int maior, menor;
//     int posicaoMaior, posicaoMenor;
//     printf("Digite os quinze numeros:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o numero %d: ", i + 1);
//         scanf("%d", &vetor[i]);
//         if (i == 0) {
//             maior = vetor[i];
//             menor = vetor[i];
//             posicaoMaior = i;
//             posicaoMenor = i;
//         } else {
//             if (vetor[i] > maior) {
//                 maior = vetor[i];
//                 posicaoMaior = i;
//             }
//             if (vetor[i] < menor) {
//                 menor = vetor[i];
//                 posicaoMenor = i;
//             }
//         }
//     }
//     printf("O maior numero é %d e estah na posicao %d.\n", maior, posicaoMaior);
//     printf("O menor numero é %d e estah na posicao %d.\n", menor, posicaoMenor);
//     return 0;
// }

// int main() {
//     int tamanho = 5;
//     int vetorOriginal[tamanho];
//     int vetorSubstituido[tamanho];
//     printf("Digite os 10 valores do vetor:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o valor %d: ", i + 1);
//         scanf("%d", &vetorOriginal[i]);
//     }
//     for (int i = 0; i < tamanho; i++) {
//         if (vetorOriginal[i] < 10) {
//             vetorSubstituido[i] = 1;
//         } else {
//             vetorSubstituido[i] = vetorOriginal[i];
//         }
//     }
//     printf("Vetor Original:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d ", vetorOriginal[i]);
//     }
//     printf("\n");
//     printf("Vetor Substituído:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d ", vetorSubstituido[i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main() {
//     int tamanho;
//     printf("Digite o tamanho do vetor: ");
//     scanf("%d", &tamanho);
//     if (tamanho <= 0) {
//         printf("Tamanho do vetor deve ser maior que zero.\n");
//         return 1;
//     }
//     int vetor[tamanho];
//     printf("Digite os elementos do vetor:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o elemento %d: ", i);
//         scanf("%d", &vetor[i]);
//     }
//     int soma = 0;
//     for (int i = 0; i < tamanho; i += 2) {
//         soma += vetor[i];
//     }
//     printf("A soma dos elementos de indice par e: %d\n", soma);
//     return 0;
// }

// int main() {
//     int tamanho = 5;
//     int vetor1[tamanho];
//     int vetor2[tamanho];
//     int vetorResultado[2 * tamanho];
//     int indiceVetor1 = 0;
//     int indiceVetor2 = 0;
//     printf("Digite os elementos do primeiro vetor:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o elemento %d: ", i + 1);
//         scanf("%d", &vetor1[i]);
//     }
//     printf("Digite os elementos do segundo vetor:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o elemento %d: ", i + 1);
//         scanf("%d", &vetor2[i]);
//     }
//     for (int i = 0; i < 2 * tamanho; i++) {
//         if (i % 2 == 0) {
//             vetorResultado[i] = vetor1[indiceVetor1];
//             indiceVetor1++;
//         } else {
//             vetorResultado[i] = vetor2[indiceVetor2];
//             indiceVetor2++;
//         }
//     }
//     printf("Vetor resultante da intercalacao:\n");
//     for (int i = 0; i < 2 * tamanho; i++) {
//         printf("%d ", vetorResultado[i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main() {
//     int n;
//     printf("Digite o valor de n: ");
//     scanf("%d", &n);
//     if (n <= 0) {
//         printf("O valor de n deve ser maior que zero.\n");
//         return 1;
//     }
//     double A[n], B[n], C[n], D[n];
//     printf("Digite os elementos do vetor A:\n");
//     for (int i = 0; i < n; i++) {
//         printf("A[%d] = ", i);
//         scanf("%lf", &A[i]);
//     }
//     printf("Digite os elementos do vetor B:\n");
//     for (int i = 0; i < n; i++) {
//         printf("B[%d] = ", i);
//         scanf("%lf", &B[i]);
//     }
//     for (int i = 0; i < n; i++) {
//         if (A[i] > B[i]) {
//             C[i] = A[i];
//         } else {
//             C[i] = B[i];
//         }
//         D[i] = (A[i] + B[i]) / 2.0;
//     }
//     printf("Vetor C (Máximo):\n");
//     for (int i = 0; i < n; i++) {
//         printf("%.2lf ", C[i]);
//     }
//     printf("\n");
//     printf("Vetor D (Média):\n");
//     for (int i = 0; i < n; i++) {
//         printf("%.2lf ", D[i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main() {
//     int tamanho = 5;
//     int vetor1[tamanho];
//     int vetor2[tamanho];
//     int vetorResultado[tamanho];
//     printf("Digite os elementos do primeiro vetor:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o elemento %d: ", i + 1);
//         scanf("%d", &vetor1[i]);
//     }
//     printf("Digite os elementos do segundo vetor:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o elemento %d: ", i + 1);
//         scanf("%d", &vetor2[i]);
//     }
//     for (int i = 0; i < tamanho; i++) {
//         vetorResultado[i] = vetor1[i] + vetor2[i];
//     }
//     printf("Vetor Resultado (soma dos elementos):\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d ", vetorResultado[i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main() {
//     int tamanho;
//     printf("Digite o tamanho do vetor (até 50 posições): ");
//     scanf("%d", &tamanho);
//     if (tamanho <= 0 || tamanho > 50) {
//         printf("Tamanho do vetor inválido. Deve ser maior que zero e no máximo 50.\n");
//         return 1;
//     }
//     int vetor[tamanho];
//     int maior, menor;
//     int posicaoMaior, posicaoMenor;
//     printf("Digite os valores do vetor:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o valor para a posição %d: ", i);
//         scanf("%d", &vetor[i]);
//         if (i == 0) {
//             maior = vetor[i];
//             menor = vetor[i];
//             posicaoMaior = i;
//             posicaoMenor = i;
//         } else {
//             if (vetor[i] > maior) {
//                 maior = vetor[i];
//                 posicaoMaior = i;
//             }
//             if (vetor[i] < menor) {
//                 menor = vetor[i];
//                 posicaoMenor = i;
//             }
//         }
//     }
//     printf("O maior número é %d e está na posição %d.\n", maior, posicaoMaior);
//     printf("O menor número é %d e está na posição %d.\n", menor, posicaoMenor);
// }

// int main() {
//     int tamanho = 5;
//     int vetor[tamanho];
//     int A;
//     printf("Digite os 30 valores do vetor:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o valor para a posição %d: ", i + 1);
//         scanf("%d", &vetor[i]);
//     }
//     printf("Digite o valor da variável A: ");
//     scanf("%d", &A);
//     printf("Produtos de A pelos elementos do vetor e paridade:\n");
//     for (int i = 0; i < tamanho; i++) {
//         int produto = A * vetor[i];
//         printf("A * vetor[%d] = %d", i, produto);
//         if (produto % 2 == 0) {
//             printf(" (Par)\n");
//         } else {
//             printf(" (Ímpar)\n");
//         }
//     }
// }

// int main() {
//     int tamanho = 10;
//     int vetor[tamanho];
//     int numero;
//     printf("Digite os valores do vetor de 10 elementos:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o elemento %d: ", i + 1);
//         scanf("%d", &vetor[i]);
//     }
//     printf("Digite um número: ");
//     scanf("%d", &numero);
//     printf("Valores no vetor menores que %d:\n", numero);
//     for (int i = 0; i < tamanho; i++) {
//         if (vetor[i] < numero) {
//             printf("%d ", vetor[i]);
//         }
//     }
//     printf("\n");
// }

// int main() {
//     int tamanho = 5;
//     int vetor[tamanho];
//     printf("Digite os valores do vetor de 20 elementos:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o elemento %d: ", i + 1);
//         scanf("%d", &vetor[i]);
//     }
//     printf("Vetor original:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d ", vetor[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < tamanho / 2; i++) {
//         int temp = vetor[i];
//         vetor[i] = vetor[tamanho - 1 - i];
//         vetor[tamanho - 1 - i] = temp;
//     }
//     printf("Vetor após a troca:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d ", vetor[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int tamanho = 10;
//     int primeiroVetor[tamanho];
//     int segundoVetor[tamanho];
//     for (int i = 0; i < tamanho; i++) {
//         scanf("%d", &primeiroVetor[i]);
//     }
//     for (int i = 0; i < tamanho; i++) {
//         segundoVetor[i] = primeiroVetor[tamanho - 1 - i];
//     }
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d ", segundoVetor[i]);
//     }
// }

// int main() {
//     int tamanho = 10;
//     int vetor[tamanho];
//     printf("Digite dez números:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o número %d: ", i + 1);
//         int numero;
//         scanf("%d", &numero);
//         vetor[i] = numero * numero;
//     }
//     printf("Quadrados dos números inseridos:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d ", vetor[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int tamanho = 15;
//     double vetor[tamanho];
//     printf("Digite quinze números:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("Digite o número %d: ", i + 1);
//         double numero;
//         scanf("%lf", &numero);
//         if (numero >= 0) {
//             vetor[i] = sqrt(numero);
//         } else {
//             vetor[i] = -1;
//         }
//     }
//     printf("Valores armazenados no vetor:\n");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%.2lf ", vetor[i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main() {
//     int numAtletas = 10;
//     double alturaAtleta[numAtletas];
//     double somaAltura = 0.0;
//     printf("Digite as alturas dos 10 atletas:\n");
//     for (int i = 0; i < numAtletas; i++) {
//         printf("Altura do atleta %d: ", i + 1);
//         scanf("%lf", &alturaAtleta[i]);
//         somaAltura += alturaAtleta[i];
//     }
//     double mediaAltura = somaAltura / numAtletas;
//     printf("Alturas dos atletas com altura maior que a média (%.2lf):\n", mediaAltura);
//     for (int i = 0; i < numAtletas; i++) {
//         if (alturaAtleta[i] > mediaAltura) {
//             printf("%.2lf\n", alturaAtleta[i]);
//         }
//     }
//     return 0;
// }

// int main() {
//     int numMercadorias = 100;
//     float precos[numMercadorias];
//     int quantidadesVendidas[numMercadorias];
//     float faturamentoMensal = 0.0;
//     for (int i = 1; i <= numMercadorias; i++) {
//         scanf("%d", &quantidadesVendidas[i]);
//     }
//     for (int i = 1; i <= numMercadorias; i++) {
//         scanf("%f", &precos[i]);
//     }
//     for (int i = 1; i <= numMercadorias; i++) {
//         faturamentoMensal += precos[i] * quantidadesVendidas[i];
//     }
//     printf("%.2f", faturamentoMensal);
//     return 0;
// }

// int main() {
//     int maxClientes = 5;
//     int idClientes[maxClientes];
//     double valorPagamento[maxClientes];
//     double faturamentoTotal = 0.0;
//     int numClientes = 0;
//     printf("Digite o id do cliente e o valor a pagar (digite um id negativo para encerrar):\n");
//     while (1) {
//         int id;
//         double valor;
//         printf("ID do cliente: ");
//         scanf("%d", &id);
//         if (id < 0) {
//             break;
//         }
//         printf("Valor a pagar: ");
//         scanf("%lf", &valor);
//         if (numClientes < maxClientes) {
//             idClientes[numClientes] = id;
//             valorPagamento[numClientes] = valor;
//             numClientes++;
//             faturamentoTotal += valor;
//         } else {
//             printf("Número máximo de clientes atingido. Não é possível adicionar mais clientes.\n");
//         }
//     }
//     printf("\nDados dos clientes:\n");
//     for (int i = 0; i < numClientes; i++) {
//         printf("ID do cliente: %d, Valor a pagar: %.2lf\n", idClientes[i], valorPagamento[i]);
//     }
//     printf("Faturamento total do dia: %.2lf\n", faturamentoTotal);
//     return 0;
// }

// int main() {
//     int maxAlunosProgramacao = 5;
//     int maxAlunosCalculo = 12;
//     int P[maxAlunosProgramacao + 1];
//     int C[maxAlunosCalculo + 1];
//     printf("Digite as matrículas dos alunos em Programação (9999 para encerrar):\n");
//     int matricula;
//     int numAlunosProgramacao = 0;
//     while (1) {
//         scanf("%d", &matricula);
//         if (matricula == 9999) {
//             break;
//         }
//         P[numAlunosProgramacao] = matricula;
//         numAlunosProgramacao++;
//     }
//     printf("Digite as matrículas dos alunos em Cálculo I (9999 para encerrar):\n");
//     int numAlunosCalculo = 0;
//     while (1) {
//         scanf("%d", &matricula);
//         if (matricula == 9999) {
//             break;
//         }
//         C[numAlunosCalculo] = matricula;
//         numAlunosCalculo++;
//     }
//     printf("Alunos matriculados em ambas as disciplinas:\n");
//     for (int i = 0; i < numAlunosProgramacao; i++) {
//         for (int j = 0; j < numAlunosCalculo; j++) {
//             if (P[i] == C[j]) {
//                 printf("%d\n", P[i]);
//             }
//         }
//     }
//     return 0;
// }

