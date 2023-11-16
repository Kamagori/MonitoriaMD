// #include <stdio.h>

// int main() {
//     int n = 5;
//     double matrizOriginal[n][n];
//     double matrizCubo[n][n];
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {

//             scanf ("%lf", &matrizOriginal[i][j]);

//         }
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {

//             matrizCubo[i][j] = matrizOriginal[i][j] * matrizOriginal[i][j] * matrizOriginal[i][j];

//         }
    
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
            
//             printf ("%.2lf ", matrizCubo[i][j]);
//             // if ((j = n-1) && (i!= n-1))
//             //     printf("\n");
//         }
//         if (i!= (n-1))
//             printf("\n");
//     }
// }

#include <stdlib.h>
#include <stdio.h>

int main(){
    int a = 92;

    printf("%d", sizeof(a));
}