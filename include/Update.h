#include<stdio.h>
#include<string.h>

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n'&&c!=EOF);
}

void atualizarVaga() {
    int i,id, encontrado = 0;
    printf("Insira o ID da vaga que deseja atualizar:");
    scanf("%i", &id);

    for (i = 0; i < 5; i++) {
        if (cadastroVaga[i].id_vaga == id) {
            encontrado = 1;
            printf("Atualizando a vaga com ID %i:\n", id);
            printf("Insira um novo nome para a vaga:\n");
            fflush(stdin);
            fgets(cadastroVaga[i].nome_vaga, 20, stdin);
            printf("Insira o novo tipo da vaga (A - Carro / B - Moto):\n");
            scanf(" %c", &cadastroVaga[i].tipo_vaga);
            printf("Qual dos usuarios acima eh o dono da respectiva vaga:\n");
            fflush(stdin); 
            fgets(cadastroVaga[i].dono_vaga, 20, stdin); 
            break;
        }
    }

    if (!encontrado) {
        printf("Vaga com ID %d nao encontrada.\n",id);
    }
}
void capturarString(char* str, int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0'; 
}

void atualizarVeiculo() {
    int id, encontrado = 0;
    printf("Insira o ID do veiculo que deseja atualizar: ");
    scanf("%d", &id);
    limparBufferEntrada(); 

    for (int i = 0; i < 5; i++) {
        if (cadastroVeiculo[i].id_veiculo == id) {
            encontrado = 1;
            printf("Atualizando veiculo com ID %d\n", id);

            printf("Insira a nova Placa do Veiculo: ");
            scanf("%49s", cadastroVeiculo[i].placa_veiculo); 
            limparBufferEntrada(); 

            printf("Insira a nova Marca do Veiculo: ");
            scanf("%49s", cadastroVeiculo[i].marca_veiculo);
            limparBufferEntrada(); 

            printf("Insira o novo Modelo do Veiculo: ");
            scanf("%49s", cadastroVeiculo[i].modelo_veiculo);
            limparBufferEntrada(); 

            printf("Insira o novo Tipo do Veiculo: ");
            scanf("%49s", cadastroVeiculo[i].tipo_veiculo);
            limparBufferEntrada(); 

            printf("Qual o novo Nome do Proprietario do Veiculo: ");
            scanf("%49s", cadastroVeiculo[i].proprietario_veiculo);
            limparBufferEntrada(); 

            break;
        }
    }

    if (!encontrado) {
        printf("Veículo com ID %d não encontrado.\n", id);
    }
}

int atualizarSaidaEntradaRafa(){
    int i;
    char respAtuSaiEn;
    do{
        printf("Insira o id que deseja ATUALIZAR\n1 a 5\n");
        scanf("%i",&i);
        i=i-1;
        printf("Confirme o ID\n");
        scanf("%i",&cadastroEntradaSaida[i].id_transacao);
        printf("Insira a quantidade de Horas que permanecera ao local\n");
        scanf("%i",&cadastroEntradaSaida[i].hora_total);
        cadastroEntradaSaida[i].ativo=1;
        printf("Deseja realizar mais uma Atualizacao\nS/N\n");
        scanf(" %s", &respAtuSaiEn);
    }while(respAtuSaiEn=='s'||respAtuSaiEn=='S');
}
int atualizarCarrinhoRafa(){
    int i;
    char respAtuCarrinho;
    do{
        printf("Insira o id que deseja atualizar\n1 a 5\n");
        scanf("%i",&i);
        i=i-1;
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
        scanf(" %s", &respAtuCarrinho);
    }while(respAtuCarrinho=='S'||respAtuCarrinho=='s');
}