//Delete.h
#include<stdio.h>
#include<stdlib.h>

void deletarVeiculo() {
    

    
}


int deleteh(){
int des, i, opc, id;
des = 0;


while (des != 5){
    printf("=============================\n");
    printf("            REMOVER          \n");
    printf("=============================\n");
    printf("O que deseja remover\n");
    printf("[1] Veiculo\n");
    printf("[2] Vaga\n");
    printf("[3] Entrada/Saida\n");
    printf("[4] Carrinho de Compras\n");
    printf("[5] Sair\n");
    printf("=============================\n");
    scanf("%i", &des);
        switch (des)
                {
                case 1:
                    printf("Insira o ID do veiculo que deseja deletar (1-5): ");
                    scanf("%d", &id);
                    id--;

                    if (id >= 0 && id < 5) {
                    if (cadastroVeiculo[id].ativo==1) {
                    cadastroVeiculo[id].ativo = 0;
                    printf("Veiculo com ID %d foi deletado com sucesso!\n", id + 1);
                    } else {
                    printf("Veiculo com ID %d já está inativo.\n", id + 1);
                    }
                    } else {
                    printf("ID inválido. Insira um ID entre 1 e 5.\n");
                    }
                    break;
                case 2:
                    printf("Insira o ID da Vaga que deseja deletar (1-5): ");
                    scanf("%d", &id);
                    id--;

                    if (id >= 0 && id < 5) {
                    if (cadastroVeiculo[id].ativo==1) {
                    cadastroVeiculo[id].ativo = 0;
                    printf("Vaga de ID %d foi deletado com sucesso!\n", id + 1);
                    } else {
                    printf("Vaga de ID %d ja esta inativo.\n", id + 1);
                    }
                    } else {
                    printf("ID invalido. Insira um ID entre 1 e 5.\n");
                    }
                break;
                case 3:
                    printf("Insira o ID do Horario que deseja deletar (1-5): ");
                    scanf("%d", &id);
                    id--;

                    if (id >= 0 && id < 5) {
                    if (cadastroVeiculo[id].ativo==1) {
                    cadastroVeiculo[id].ativo = 0;
                    printf("Horario com ID %d foi deletado com sucesso!\n", id + 1);
                    } else {
                    printf("Horario com ID %d ja esta inativo.\n", id + 1);
                    }
                    } else {
                    printf("ID invalido. Insira um ID entre 1 e 5.\n");
                    }
                break;
                case 4:
                    printf("Insira o ID do Carrinho que deseja deletar (1-5): ");
                    scanf("%d", &id);
                    id--;
                    if (id >= 0 && id < 5) {
                    if (cadastroVeiculo[id].ativo==1) {
                    cadastroVeiculo[id].ativo = 0;
                    printf("Carrinho de ID %d foi deletado com sucesso!\n", id + 1);
                    } else {
                    printf("Carrinho de ID %d ja esta inativo.\n", id + 1);
                    }
                    } else {
                    printf("ID invalido. Insira um ID entre 1 e 5.\n");
                    }
                break;
                case 5:
                
                break;
                default:
                    printf("Algo deu ERRADO!\n");
                    system("Pause");
                break;
                }
}
    return 0;
}
