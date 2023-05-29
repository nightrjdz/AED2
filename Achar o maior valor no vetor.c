/******************************************************************************
Kaue Henrique Bortoletto
lISTA 2 - EXERCERCIO 4
          A) imprima o maior elemento 
          B) imprima a posicao do maior elemento

******************************************************************************/
#include <stdio.h>
#define TAM 10
int main()
{
    int v[TAM], maior, posicao;
    // entrada
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    // processamento
    for (int i=0; i<TAM; i++) {
        if(v[i] > maior) maior = v[i];
        posicao = i;
    }+
    printf("\nO maior elemento : %d e está na posicao %d", maior, posicao);

    return 0;
}

