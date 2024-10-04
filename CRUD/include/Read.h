//Read.h
#include <stdio.h>

void lerVeiculos() {
    int i,respVerif;
    char respRep;
    do{
        printf("Qual deseja Verificar\n");
        printf("1-Veiculo\n");
        printf("2-Vagas\n");
        printf("3-Horario\n");
        printf("4-Itens Adcionais\n");
        scanf("%i",&respVerif);
        switch(respVerif){
            case 1:
                printf("Insira o ID que deseja conferir 1-5\n");
                scanf("%i",&i);
                i=i-1;
                if(cadastroVeiculo[i].ativo==1){
                    printf("Placa: %s\n", cadastroVeiculo[i].placa_veiculo);
                    printf("Marca: %s\n", cadastroVeiculo[i].marca_veiculo);
                    printf("Modelo: %s\n", cadastroVeiculo[i].modelo_veiculo);
                    printf("Tipo: %s\n", cadastroVeiculo[i].tipo_veiculo);
                    printf("Proprietario: %s\n", cadastroVeiculo[i].proprietario_veiculo);
                }else{
                    printf("O ID em questao esta inativo\n");
                }
            break;
            case 2:
                printf("Insira o ID que deseja conferir 1-5\n");
                scanf("%i",&i);
                i=i-1;
                if(cadastroVaga[i].ativo==1){
                    printf("Vaga: %s\n", cadastroVaga[i].nome_vaga);
                    if (cadastroVaga[i].tipo_vaga == 'B' || cadastroVaga[i].tipo_vaga == 'b') {
                        printf("Moto 15-R$/H\n");
                    } else {
                        printf("Carro 30-R$/H\n");
                    }
                    printf("Proprietario da Vaga: %s\n", cadastroVaga[i].dono_vaga);
                }else{
                    printf("O ID em questao esta inativo\n");
                }
            break;
            case 3:
                printf("Insira o ID que deseja conferir 1-5\n");
                scanf("%i",&i);
                i=i-1;
                if(cadastroEntradaSaida[i].ativo==1){
                    printf("Tempo Estimado: %d\n", cadastroEntradaSaida[i].hora_total);
                }else{
                    printf("O ID em questao esta inativo\n");
                }
            break;
            case 4:
                if(Carrinho[i].ativo==1){
                    if (Carrinho[i].lavagem == 1) {
                        printf("Lavagem = 50R$\n");
                    }
                    if (Carrinho[i].polimento == 1) {
                        printf("Polimento = 100R$\n");
                    }
                    if (Carrinho[i].troca_oleo == 1) {
                        printf("Troca de Oleo = 100R$\n");
                    }
                }else{
                    printf("O ID em questao esta inativo\n");
                }
            break;
            default:
                printf("Algo deu ERRADO\n");
                break;
        }
    printf("Deseja Verificar mais algum item\nS/N\n");
    scanf("%s",&respRep);
    }while(respRep=='s'||respRep=='S');
}