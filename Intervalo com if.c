/******************************************************************************

Kaue Henrique Bortoletto
29/03/2023
Implementar a fun��o verificaIntervalo com e sem if

*******************************************************************************/

#include <stdio.h>

int verificaIntervalo();

void main() {
    
    int max, min, n;
    
    printf("Entre com o menor valor do intervalo: \n");
    scanf("%d", &min);
    
    printf("Entre com o maior valor do intervalo: \n");
    scanf("%d", &max);
    
    printf("Entre com o valor do n�mero que ser� verificado no intervalo: \n");
    scanf("%d", &n);
    
    if(verificaIntervalo(max, min, n) == 1){
        printf("O valor %d, est� no intervalo de %d e %d!", n, min, max);
    } else {
        printf("O valor %d, n�o est� no intervalo de %d e %d!", n, min, max);
    }
    
}

int verificaIntervalo(int max, int min, int n){
    
    int ret = 0;
    
    if (n >= min && n <= max)
        ret = 1;
        
    return ret;
    
}
