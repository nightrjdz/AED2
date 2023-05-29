/******************************************************************************
Kaue Henrique Bortoletto
3. Escreva um programa que calcule a área de um círculo a partir de uma função especialmente desenhada para isso; 
essa função recebe o valor do raio e retorna a área do círculo.

*******************************************************************************/
#include <stdio.h>

float area(int raio){
    return (raio * raio) * 3.14;
}

void main(){
    int raio;
    printf("Digite o valor do raio: \n");
    scanf("%d", &raio);
    
    printf("A area do circulo e %.2f\n", area(raio));
}
