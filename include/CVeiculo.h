#include<stdio.h>

struct Veiculos{
int id_veiculo;
char placa_veiculo[20];
char marca_veiculo[20];
char modelo_veiculo[20];
char tipo_veiculo[20];
char proprietario_veiculo[50];
int ativo;
}cadastroVeiculo[5];

int criarVeiculo(){
    int i=0;
    char respcont;
    do{
        printf("Insira o id que deseja ocupar\n1 a 5\n");
        scanf("%i",&i);
        i=i-1;
        printf("Confirme o ID\n");
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
        cadastroVeiculo[i].ativo=1;
        printf("Deseja fazer mais um Registro?\nS/N\n");
        scanf(" %s",&respcont);
    }while(respcont=='s'||respcont=='S');
    
}