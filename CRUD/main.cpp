#include<stdio.h>
#include"CVeiculo.h"
#include"CVagas.h"

int main(){
    int i,respmenu,respcriar;
    do{
        printf("===========MENU===========\n");
        printf("1-Criar\n");
        printf("2-Ler\n");
        printf("3-Atualizar\n");
        printf("4-Remover\n");
        printf("5-Sair\n");
        printf("==========================\n");
        scanf("%i",&respmenu);
        switch(respmenu){
            case 1:
                printf("===========CRIAR===========\n");
                printf("1-Veiculos\n");
                printf("2-Vagas\n");
                printf("3-Entradas e Saidas\n");
                printf("===========================\n");
                scanf("%i",&respcriar);
                switch(respcriar){
                    case 1:    
                        criarVeiculo();
                    break;
                    case 2:
                        criarVagas();
                    break;
                    case 3:

                    break;
                    default:
                        printf("Algo deu ERRADO\n");
                    break;
                }
                
            break;
            case 2:
                for(i=0;i<2;i++){
                printf("%i\n",cadastroVeiculo[i].id_veiculo);
                printf("%s\n",cadastroVeiculo[i].placa_veiculo);
                printf("%s\n",cadastroVeiculo[i].marca_veiculo);
                printf("%s\n",cadastroVeiculo[i].modelo_veiculo);
                printf("%s\n",cadastroVeiculo[i].tipo_veiculo);
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            break;
            case 3:

            break;
            case 4:

            break;
            case 5:
            break;
            default:
                printf("Algo deu ERRADO!\n");
            break;
        }
    }while(respmenu!=5);
}