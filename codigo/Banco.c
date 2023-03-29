#include <stdio.h>
#include <stdlib.h>

int main (){
    int senha, opcao, saldo = 500, saque, deposito;
    
    printf("Bem-vindo ao banco do Pedril\n");
    printf("Digite a sua senha");
    scanf("%d", &senha);
    
    if (senha == 1234){
        printf("1. Saldo\n");
        printf("2. Saque \n");
        printf("3. Deposito\n");
        printf("digite a sua opção:");
        scanf("%d", &opcao);
        
        switch (opcao){
            case 1:
                printf("seu saldo atual é: R$ %d", saldo);
                break;
            case 2:
                printf("Digite o valor do saque:");
                scanf("%d", &saque);
                if (saque <= saldo){
                    saldo =- saque;
                    printf("retire seu dinheiro.\n");
                    printf("seu saldo atual é: R$%d\n,",saldo);
                } else{
                    printf("Saldo insuficiente");
                }
                break;
            case 3:
                printf("digite o valor do deposito:");
                scanf("%d", &deposito);
                saldo+=deposito;
                printf("Deposito realizado com sucesso.\n");
                printf("Seu saldo atual é: R$ %d",saldo);
                break;
            default:
                printf("Operação invalida.\n");
                break;
        }
    }else{
        printf("Senha invalida.\n");
        
    }
    return 0;
}