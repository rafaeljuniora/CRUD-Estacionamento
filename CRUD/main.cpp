#include<stdio.h>
#include"CVeiculo.h"
#include"CVagas.h"

int criarVeiculo(){
    int i=0;
    char respcont;
    do{
        printf("%i-Veiculo\n",i+1);
        printf("Insira o ID do Veiculo\n");
        scanf("%i", &cadastroVeiculo[i].id_veiculo);
        printf("Insira a Placa do Veiculo\n");
        fflush(stdin);
        gets(cadastroVeiculo[i].placa_veiculo);
        printf("Insira a Marca do Veiculo\n");
        fflush(stdin);
        gets(cadastroVeiculo[i].marca_veiculo);
        printf("Insira o modelo do Veiculo\n");
        fflush(stdin);
        gets(cadastroVeiculo[i].modelo_veiculo);
        printf("Insira o Tipo do Veiculo\n");
        fflush(stdin);
        gets(cadastroVeiculo[i].tipo_veiculo);
        printf("Qual o Nome do Proprietario do Veiculo\n");
        fflush(stdin);
        gets(cadastroVeiculo[i].proprietario_veiculo);
        printf("Deseja fazer mais um Registro?\nS/N\n");
        scanf("%c",&respcont);
        i++;
    }while(respcont=='s'||respcont=='S');
    for(i=0;i<2;i++){
        printf("%i\n",cadastroVeiculo[i].id_veiculo);
        printf("%s\n",cadastroVeiculo[i].placa_veiculo);
        printf("%s\n",cadastroVeiculo[i].marca_veiculo);
        printf("%s\n",cadastroVeiculo[i].modelo_veiculo);
        printf("%s\n",cadastroVeiculo[i].tipo_veiculo);
        printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
    }
}

int criarVaga(){
    int i=0,FA1=0,FA2=0,FA3=0,FA4=0,FA5=0,FB6=0,FB7=0,FB8=0,FB9=0,FB0=0,numero_vaga;//Flags de vagas
    char respVagas;
    do{
        printf("Escolha a Vaga do cliente\nVagas de 0-9\n");
        if(FA1==0){
            printf("|1-A1|");
        }
        if(FA2==0){
            printf("|2-A2|");
        }
        if(FA3==0){
            printf("|3-A3|");
        }
        if(FA4==0){
            printf("|4-A4|");
        }
        if(FA5==0){
            printf("|5-A5|");
        }
        printf("\n");
        if(FB6==0){
            printf("|6-B6|");
        }
        if(FB7==0){
            printf("|7-B7|");
        }
        if(FB8==0){
            printf("|8-B8|");
        }
        if(FB9==0){
            printf("|9-B9|");
        }
        if(FB0==0){
            printf("|0-B0|");
        }
        printf("\n");
        scanf("%i",&numero_vaga);
        switch (numero_vaga)
        {
        case 1:
            FA1=1;
            printf("Insira o ID da criacao da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a A1, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 2:
            FA2=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a A2, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 3:
            FA3=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a A3, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 4:
            FA4=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a A4, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 5:
            FA5=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a A5, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 6:
            FB6=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a B6, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 7:
            FB7=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a B7, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 8:
            FB8=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a B8, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 9:
            FB9=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a B9, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        case 0:
            FB0=1;
            printf("Insira o ID da criação da Vaga\n");
            scanf("%i",&cadastroVaga[i].id_vaga);
            printf("A vaga seleciona foi a B0, insira novamente o nome para confirmar a Vaga\n");
            fflush(stdin);
            gets(cadastroVaga[i].nome_vaga);
            printf("Insira o Tipo da Vaga\nTipo-A(Carro)R$30\nTipo-B(Moto)R$15\n");
            scanf("%c",&cadastroVaga[i].tipo_vaga);
            for(i=0;i<5;i++){
                printf("%s\n",cadastroVeiculo[i].proprietario_veiculo);
            }
            printf("Qual dos usuarios acima eh o dono da respectiva vaga");
            fflush(stdin);
            gets(cadastroVaga[i].dono_vaga);
        break;
        default:
            printf("Algo deu ERRADO!\n");
        break;
        }
        i++;
        printf("Deseja adcionar outra Vagas\n");
        scanf("%c",&respVagas);
    }while(respVagas=='s'||respVagas=='S');
}

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
                        criarVaga();
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