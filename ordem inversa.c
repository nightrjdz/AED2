/******************************************************************************

Kaue Henrique Bortoletto
01/03/2023
Crie um programa que leia 6 valores inteiros.
Em seguida, mostre os valores em ordem inversa.

*******************************************************************************/
#include <stdio.h>

int main() {

    int i, vetor[6];

    for(i = 0; i < 6; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

            for(i = 5; i >= 0; i--){
                printf("%d\n", vetor[i]);
            }
            printf("\n");

    return 0;
}
