#include <stdio.h>
#include <stdlib.h>

// int main(){
//     float sm, sp, qm;
//     scanf("%f", &sm);
//     scanf("%f", &sp);
//     qm = sp/sm;
//     printf("Essa pessoa ganha %.2f salários mínimos.\n", qm);
// }

// int main(){
//     float n1, n2, n3;
//     scanf ("%f %f %f", &n1, &n2, &n3);
//     if (n1>(n2+n3))
//         printf("%.2f é maior do que a soma de %.2f e %.2f\n", n1, n2, n3);
//     else
//         printf("%.2f não é maior do que a soma de %.2f e %.2f\n", n1, n2, n3);
// }

// int main(){
//     float X, z;
//     int i;
//     scanf("%f %f", &X, &z);
//     for (i = 1; i <= 12; i++){
//         X = X+(X/100)*z;
//     }
//     printf("O montante no final dos 12 meses é de: R$%.2f. \n", X);
// }

// int main(){
//     int qntd, tipo;
//     float total;
//     scanf("%d %d", &qntd, &tipo);
//     if (tipo == 1)
//         total = 0.10 * qntd;
//     else
//         total = 0.15 * qntd;
//     printf("O total a ser pago é: R$%.2f. \n", total);
// }

// int main(){
//     float vm, va;
//     scanf("%f %f", &vm, &va);
//     if (va < vm)
//         printf("Não haverá multa.\n");
//     if ((va >vm) && (va - vm) <= 10)
//         printf("A multa será de 50 reais.\n");
//     if ((va - vm) >= 11 && (va - vm) <=30)
//         printf("A multa será de 100 reais.\n");
//     if (va - vm >30)
//         printf("A multa será de 200 reais.\n");
// }

// int main(){
//     float cc, cf, pd, impostos;
//     scanf("%f", &cf);
//     pd = (cf/100)*28;
//     impostos = (cf/100)*45;
//     cc = cf + pd + impostos;
//     printf("O custo do consumidor será de R$%.2f.\n", cc);
// }

// int main(){
//     int A, B, r;
//     scanf("%d %d", &A, &B);
//     r = A%B;
//     if (r == 0)
//         printf("A é divisível por B.\n");
//     else
//         printf("A não é divisível por B.\n");
// }

// int main(){
//     float A, B, aux;
//     scanf("%f %f", &A, &B);
//     aux = A;
//     A = B;
//     B = aux;
//     printf("%.2f %.2f\n", A, B);
// }

// int main(){
//     float s, p;
//     scanf("%f %f", &s, &p);
//     if (p > ((s/100)*30))
//         printf("O empréstimo não pode ser concedido.\n");
//     else
//         printf("O empréstimo pode ser concedido.\n");
// }

// int main(){
//     float salario;
//     scanf("%f", &salario);
//     if (salario < 500){
//         salario += (salario/100)*15;
//         printf("O salário reajustado é de R$%.2f.\n", salario);
//     }
//     else
//         printf("Não tem direito ao aumento.\n");
// }

// int main() {
//     float L, M, N, temp;
//     scanf("%f %f %f", &L, &M, &N);
//     if (L > M) {
//         temp = L;
//         L = M;
//         M = temp;
//     }
//     if (M > N) {
//         temp = M;
//         M = N;
//         N = temp;
//     }
//     if (L > M) {
//         temp = L;
//         L = M;
//         M = temp;
//     }
//     printf("Valores em ordem crescente: %.2f %.2f %.2f\n", L, M, N);
// }

//Switch case dias da semana.
// int main(){
//     int dia;
//     scanf("%d", &dia);
//     switch(dia){
//         case 1:
//             printf("Domingo.\n");
//             break;
//         case 2:
//             printf("Segunda-feira.\n");
//             break;
//         case 3:
//             printf("Terça-feira.\n");
//             break;
//         case 4:
//             printf("Quarta-feira.\n");
//             break;
//         case 5:
//             printf("Quinta-feira.\n");
//             break;
//         case 6:
//             printf("Sexta-feira.\n");
//             break;  
//         case 7:
//             printf("Sábado.\n");
//             break; 
//     }
//     return 0;
// }