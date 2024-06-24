#include<stdlib.h>
#include<stdio.h>

int funcTicket() {
    int valor_total, valor_vaga, valor_hora, valor_carrinho, i;
    
    FILE *file;
    file = fopen("Ticket.txt", "w");
    if (file == NULL) {
        printf("ERRO COM O ARQUIVO TXT\n");
    } else {
        printf("Sucesso ao Criar Ticket\n");
    }
    
    for (i = 0; i < 5; i++) {
        if (cadastroVeiculo[i].id_veiculo == cadastroVaga[i].id_vaga &&
            cadastroVaga[i].id_vaga == cadastroEntradaSaida[i].id_transacao &&
            cadastroEntradaSaida[i].id_transacao==Carrinho[i].id_carrinho) {

            fprintf(file, "\n==============VEICULO==============\n");
            fprintf(file, "Placa do veiculo: %s\n", cadastroVeiculo[i].placa_veiculo);
            fprintf(file, "Marca do Veiculo: %s\n", cadastroVeiculo[i].marca_veiculo);
            fprintf(file, "Modelo do Veiculo: %s\n", cadastroVeiculo[i].modelo_veiculo);
            fprintf(file, "Tipo do Veiculo: %s\n", cadastroVeiculo[i].tipo_veiculo);
            fprintf(file, "Nome do Proprietario: %s\n", cadastroVeiculo[i].proprietario_veiculo);
            fprintf(file, "===================================\n");

            fprintf(file, "\n===============VAGAS===============\n");
            fprintf(file, "Nome da Vaga: %s\n", cadastroVaga[i].nome_vaga);
            if (cadastroVaga[i].tipo_vaga == 'B' || cadastroVaga[i].tipo_vaga == 'b') {
                fprintf(file, "Moto 15-R$/H\n");
                valor_vaga = 15;
            } else {
                fprintf(file, "Carro 30-R$/H\n");
                valor_vaga = 30;
            }
            fprintf(file, "Dono da Vaga: %s\n", cadastroVaga[i].dono_vaga);
            fprintf(file, "===================================\n");

            fprintf(file, "\n==============HORARIO==============\n");
            fprintf(file, "Tempo de Estadia: %d\n", cadastroEntradaSaida[i].hora_total);
            fprintf(file, "===================================\n");

            fprintf(file, "\n=============ADCIONAIS=============\n");
            if (Carrinho[i].lavagem == 1) {
                fprintf(file, "Lavagem = 50R$\n");
            }
            if (Carrinho[i].polimento == 1) {
                fprintf(file, "Polimento = 100R$\n");
            }
            if (Carrinho[i].troca_oleo == 1) {
                fprintf(file, "Troca de Oleo = 100R$\n");
            }
            fprintf(file, "===================================\n");

            fprintf(file, "\n===============TOTAL===============\n");
            valor_hora = valor_vaga * cadastroEntradaSaida[i].hora_total;
            valor_carrinho = (Carrinho[i].lavagem * 50) + (Carrinho[i].polimento * 100) + (Carrinho[i].troca_oleo * 100);
            valor_total = valor_hora + valor_carrinho;

            fprintf(file, "Valor de estadia: %dR$\n", valor_hora);
            fprintf(file, "Valor de Adicionais: %dR$\n", valor_carrinho);
            fprintf(file, "===================================\n");
            fprintf(file, "Total: %dR$\n", valor_total);
            fprintf(file, "===================================\n");
            printf("Teste\n");
        }
    }

    fclose(file);
    return 0;
}