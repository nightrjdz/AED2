/******************************************************************************

15/02/23
Nome: Kauê Henrique

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

int main (){
	
	int carros;
	float valor, salario, comissao;
	
	printf ("Digite o salario do funcionario: ");
    scanf ("%f", &salario);
    
    	printf ("Digite o numero de carros vendidos: ");
    scanf ("%d", &carros);
    
    	printf ("Digite o total de carros vendidos: ");
    scanf ("%f", &valor);
    
    	printf ("Digite a comissao por carros: ");
    scanf ("%f", &comissao);
	
	salario = salario + carros * comissao + 0.05 * valor;
	
	printf ("O salario final e : %.1f", salario);
	
	
	return 0;
}