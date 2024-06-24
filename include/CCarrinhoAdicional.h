#include<stdio.h>

struct CarrinhoAdicional{
    int id_carrinho;
    int lavagem;
    int polimento;
    int troca_oleo;
    int ativo;
}Carrinho[5];

int criarCarrinho(){
    int i=0;
    char respCarri;
    do{
        printf("Insira o id que deseja ocupar\n1 a 5\n");
        scanf("%i",&i);
        i=i-1;
        printf("%i-Carrinho\n",i+1);
        printf("Confirme o ID\n");
        scanf("%i",&Carrinho[i].id_carrinho);
        printf("Deseja Lavagem durante o periodo que permanecera ao local R$50\n0-Nao\n1-Sim\n");
        scanf("%i",&Carrinho[i].lavagem);
        printf("Deseja Polimento durante o periodo que permanecera ao local R$100\n0-Nao\n1-Sim\n");
        scanf("%i",&Carrinho[i].polimento);
        printf("Deseja Troca de Oleo durante o periodo que permanecera ao local R$100\n0-Nao\n1-Sim\n");
        scanf("%i",&Carrinho[i].troca_oleo);
        Carrinho[i].ativo=1;
        printf("Deseja realizar mais um Cadastro?\nS-Sim\nN-Nao\n");
        scanf(" %s", &respCarri);
    }while(respCarri=='S'||respCarri=='s');
}