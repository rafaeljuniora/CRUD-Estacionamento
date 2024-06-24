#include<stdio.h>
struct SaidaEntrada{
    int id_transacao;
    int hora_total;
    int ativo;
}cadastroEntradaSaida[5];

int criarEntradaSaida(){
    int i=0;
    char respEntSai;
    do{
        printf("Insira o id que deseja ocupar\n1 a 5\n");
        scanf("%i",&i);
        i=i-1;
        printf("Confirme o ID\n");
        scanf("%i",&cadastroEntradaSaida[i].id_transacao);
        printf("Insira a quantidade de Horas que permanecera ao local\n");
        scanf("%i",&cadastroEntradaSaida[i].hora_total);
        cadastroEntradaSaida[i].ativo=1;
        printf("Deseja Inserir Novamente\nS/N\n");
        scanf(" %s", &respEntSai);
    }while(respEntSai=='s'||respEntSai=='S');
}

