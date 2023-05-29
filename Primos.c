/******************************************************************************

Kaue Henrique Borotoletto
22/03/2023
Faça um programa que calcule a soma dos N primeiros números primos, sendo N definido pelo usuário na função main. O
programa ainda deverá ter as funções somaPrimos e primo, sendo que a primeira será responsável pela soma dos números
que forem primos e a segunda será responsável por verificar se o número em questão é primo ou não.

*******************************************************************************/
#include <stdio.h>

int primo (int x) {
  int retorno = 1; 
  for (int i=2; i<= x/2; i++)
    if (x%i==0) retorno = 0; 
    
  return retorno;
}
int somaPrimo (int n) {
    int soma=0, aux=1;
    while (n>0) {
        if (primo (aux)) {soma=soma+aux;n--; }
    aux++;
    }
    return soma;
}

int main(){
    int n, soma;
    printf("Quantos primos quer somar ?");
    scanf ("%d", &n);
    soma = somaPrimo (n);
    printf ("Soma=%d", soma);
    return 0;
}
