/******************************************************************************

15/02/23
Nome: Kauê Henrique

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

  int main (){
  	
  	int a, b;
  	float div;
  	
  	printf("\nDigite o primeiro numero: ");
  	scanf ("%d", &a);
  	printf("\nDigite o segundo numero: ");
  	scanf ("%d", &b);
  	
  	while (b==0){
  	 printf ("\nDigite o segundo numero novamente: ");
  	 scanf ("%d", &b);
  }
  
  div = a / b;
  
  printf ("\nO resultado da divisao e: %f", div);
  
	
  	
 	
  	return 0;
  }
