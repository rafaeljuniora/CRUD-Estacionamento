#include<stdio.h>
#include"../include/CVeiculo.h"
#include"../include/CVagas.h"
#include"../include/CSaidaEntrada.h"
#include"../include/CCarrinhoAdicional.h"
#include"../include/Delete.h"
#include"../include/Ticket.h"
#include"../include/Read.h"
#include"../include/Update.h"

int main(){
    int i,respmenu,respcriar,respatu;
    do{
        printf("============MENU============\n");
        printf("1-Criar\n");
        printf("2-Ler\n");
        printf("3-Atualizar\n");
        printf("4-Remover\n");
        printf("5-Imprimir Ticket\n");
        printf("6-Sair\n");
        printf("===========================\n");
        scanf("%i",&respmenu);
        switch(respmenu){
            case 1:
                printf("===============CRIAR===============\n");
                printf("1-Veiculos\n");
                printf("2-Vagas\n");
                printf("3-Horarios\n");
                printf("4-Carrinho de Compras\n");
                printf("Lembrando que todos os id devem estar de acordo com os espacos no banco\n");
                printf("===================================\n");
                scanf("%i",&respcriar);
                switch(respcriar){
                    case 1:    
                        criarVeiculo();
                    break;
                    case 2:
                        criarVaga();
                    break;
                    case 3:
                        criarEntradaSaida();
                    break;
                    case 4:
                        criarCarrinho();
                    break;
                    default:
                        printf("Algo deu ERRADO\n");
                    break;
                }
            break;
            case 2:
                lerVeiculos();
            break;
            case 3:
                printf("=============ATUALIZAR=============\n");
                printf("1-Atualizar Veiculos\n");
                printf("2-Atualizar Vagas\n");
                printf("3-Atualizar Horarios\n");
                printf("4-Atualizar Carrinho de Compras\n");
                printf("===================================\n");
                scanf("%i",&respatu);
                switch(respatu){
                    case 1:
                        atualizarVeiculo();
                    break;
                    case 2:
                        atualizarVaga();
                    break;
                    case 3:
                        atualizarSaidaEntradaRafa();
                    break;
                    case 4:
                        atualizarCarrinhoRafa();
                    break;
                }
                
            break;
            case 4:
                deleteh();
            break;
            case 5:
                funcTicket();
            break;
            case 6:
            break;
            default:
                printf("Algo deu ERRADO!\n");
            break;
        }
    }while(respmenu!=6);
}