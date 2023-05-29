/******************************************************************************

Kaue Henrique Bortoletto
08/03/2023
Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado
das componentes deste vetor, armazenando o resultado em outro vetor. Os
conjuntos têm 10 elementos cada. Imprimir todos os conjuntos (vetores).

*******************************************************************************/
#include <stdio.h>
#define TAM 10

void main()
{
    float v[TAM], vQuadrado[TAM];
    
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%f", &v[i]);
    }
    
    for (int i=0; i<TAM;i++){
        vQuadrado[i] = (v[i] * v[i]);
        printf("valor de v[%d]: %.1f e o seu quadrado e: %.1f\n", i, v[i], vQuadrado[i]);
    }
}
