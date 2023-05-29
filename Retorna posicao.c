/******************************************************************************

Kaue Henrique Bortoletto
29/03/2023
Implementar e testar a função retorna posicao.

*******************************************************************************/
#include <stdio.h>

int retornaPosicao();

void main() {
    
    int a, b, c, posicao;
    
    printf("Entre com o valor da primeira posicao: \n");
    scanf("%d", &a);
    
    printf("Entre com o valor da segunda posicao: \n");
    scanf("%d", &b);
    
    printf("Entre com o valor da terceira posicao: \n");
    scanf("%d", &c);
    
    posicao = retornaPosicao(a, b, c);
    
    printf("A posicao do maior numero entre os tres é %d", posicao);
    
}

int retornaPosicao(int a, int b, int c) {
    
    int posicao = 1;
    if(b > a) posicao = 2;
    if(c > a) posicao = 3;
    
    return posicao;
    
}

