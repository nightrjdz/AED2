/******************************************************************************

15/02/23
Nome: Kauê Henrique

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

int main()
{
    int total, nulo, branco, valido;
    float pNulo, pBranco, pValido;
    
    printf ("Digite o total de votos NULOS: ");
    scanf ("%d", &nulo);
    printf ("Digite o total de votos BRANCOS: ");
    scanf ("%d", &branco);
    printf ("Digite o total de votos TOTAL: ");
    scanf ("%d", &total);
    
    valido = total - nulo - branco;
    
    printf ("\nVotos validos: %d", valido);
    
    
    pNulo = (nulo*1.0) / total*100;
    
    printf ("\nPorcetagem de nulo: %0.2f", pNulo);
    
    
    
    return 0;
}
