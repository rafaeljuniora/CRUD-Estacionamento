#include<stdio.h>
#include"CVeiculo.h"
struct Vagas{
    int numero_vaga;
    char tipo_vaga[20];
    char status_vaga[20];
    char dono_vaga[20];
    char veiculo_vagaid[20];
}cadastroVaga[5];



int criarVagas(){
    int i=0,FA1=0,FA2=0,FA3=0,FA4=0,FA5=0,FB6=0,FB7=0,FB8=0,FB9=0,FB0=0;//Flags de vagas
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
        scanf("%i",&cadastroVaga[i].numero_vaga);
        if(cadastroVaga[i].numero_vaga==1){
            FA1==1;
        }else if(cadastroVaga[i].numero_vaga==2){
            FA2==1;
        }else if(cadastroVaga[i].numero_vaga==3){
            FA3==1;
        }else if(cadastroVaga[i].numero_vaga==4){
            FA4==1;
        }else if(cadastroVaga[i].numero_vaga==5){
            FA5==1;
        }else if(cadastroVaga[i].numero_vaga==6){
            FB6==1;
        }else if(cadastroVaga[i].numero_vaga==7){
            FB7==1;
        }else if(cadastroVaga[i].numero_vaga==8){
            FB8==1;
        }else if(cadastroVaga[i].numero_vaga==9){
            FB9==1;
        }else if(cadastroVaga[i].numero_vaga==0){
            FB0==1;
        }

        printf("Deseja selecionar outra Vagas\n");
        scanf("%c",&respVagas);
    }while(respVagas=='s'||respVagas=='S');
}