/******************************************************************************
Kaue Henrique Bortoletto
6. Escreva um programa que implemente uma função que passe dado número inteiro como parâmetro, e este desenhe um número equivalente a “*” na tela.  

*******************************************************************************/
#include <stdio.h>

int parametro(int a){
    int contador = 0;
    while(contador < a){
        contador++;
    printf("* ");
    }
    
}

void main(){
    int a;
    printf("Digite um numero para dar o parametro: \n");
    scanf("%d", &a);
    parametro(a);
}
