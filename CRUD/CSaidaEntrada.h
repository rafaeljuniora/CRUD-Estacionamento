#include<stdio.h>
struct SaidaEntrada{
    int id_transacao;
    int hora_entrada;
    int hora_saida;
    int hora_total
}cadastroEntradaSaida[5];

int criarEntradaSaida(){
    int i=0;
    char respEntSai;
    do{
        printf("%i-Horario\n",i+1);
        printf("Insira o ID");
        scanf("%i",&cadastroEntradaSaida[i].id_transacao);
        printf("Insira o horario de entrada\n");
        scanf("%i",&cadastroEntradaSaida[i].hora_entrada);
        printf("Inira o horario de saida\n");
        scanf("%i",&cadastroEntradaSaida[i].hora_saida);
        if (cadastroEntradaSaida[i].hora_entrada>cadastroEntradaSaida[i].hora_saida){
            cadastroEntradaSaida[i].hora_total=cadastroEntradaSaida[i].hora_saida-cadastroEntradaSaida[i].hora_entrada;
        }else if(cadastroEntradaSaida[i].hora_entrada<cadastroEntradaSaida[i].hora_saida)
    }while(respEntSai=='s'||respEntSai=='S')
}

