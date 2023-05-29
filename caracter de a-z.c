/******************************************************************************
Kaue Henrique Bortoletto
5. Crie uma função que determine se dado caracter está entre ‘a’ e ‘z’. Dica: Use a tabela ASCII.  

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
char caracter(int a){
   if (isalpha(a) == 0){
       printf("Nao esta entre a e z");
   }else{
       printf("Esta entre a e z");
   }
}

void main(){
    char a;
    printf("Digite um caracter: \n");
    scanf("%c", &a);
    
    caracter(a);
}
