/******************************************************************************

15/02/23
Nome: Kauê Henrique

*******************************************************************************/

int main(){

float precoMaca, valorTotal, qtdeMaca;

printf("\nDigite a quantidade de macas compradas: ");
scanf("%f",&qtdeMaca);

if(qtdeMaca<12){
precoMaca = 1.3;
}else if(qtdeMaca>=12){
precoMaca = 1.0;
}

valorTotal = qtdeMaca * precoMaca;

printf("\nO valor total de macas e: R$ %0.2f",valorTotal);


return 0;
}
