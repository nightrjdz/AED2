/******************************************************************************
Kaue Henrique Bortoletto
4. Crie um sistema de caixa eletrônico, utilizando menus (switch) e outros recursos, que realizem operações financeiras a partir de funções especificamente projetadas para tal.
Lembre-se de que o caixa eletrônico é um programa que roda como repetição contínua, até que o usuário decida encerrar as operações.
Operações: Depósito, Saque e Saldo.  

*******************************************************************************/
#include <stdio.h>

float saldo = 0;

void deposito() {
    float deposito;
    printf("Digite o valor a ser depositado: ");
    scanf("%f", &deposito);
    saldo += deposito;
    printf("Depósito realizado com sucesso!\n\n");
}

void saque() {
    float saque;
    printf("Digite o valor a ser sacado: ");
    scanf("%f", &saque);
    if (saque > saldo) {
        printf("Erro: saldo insuficiente!\n\n");
    } else {
        saldo -= saque;
        printf("Saque realizado com sucesso!\n\n");
    }
}

void verSaldo() {
    printf("Saldo atual: %.2f\n\n", saldo);
}

int main() {
    int opcao;

    do {
        printf("Selecione uma opcao:\n");
        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Ver saldo\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                deposito();
                break;
            case 2:
                saque();
                break;
            case 3:
                verSaldo();
                break;
            case 0:
                printf("Encerrando operacoes...\n");
                break;
            default:
                printf("Opcao invalida!\n\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
