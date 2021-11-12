#include <stdio.h>
#define SIZE 200
//CALENDARIO JOGOS
//
//

 char modalidade [SIZE][50];
 char inicio [SIZE][50];
 char fim [SIZE][50];
 char treinamento [SIZE][50];
 char consulta [SIZE][50];
 char almoco [SIZE][50];
 int op;
 char i;
 char iniciopesquisa[200];
 char modalidadepesquisa[200];
 void cadastro();
 void pesquisa();

int main(void){
    cadastro();
    getch();    
}

void cadastro(){
    static int linha;
    do{
    printf("\ndigite a modalidade:");
    scanf("%s", &modalidade[linha]);
    printf("\ndigite o inicio da modalidade:");
    scanf("%s", &inicio[linha]);
    printf("\ndigite o fim da modalidade:");
    scanf("%s", &fim[linha]);
    printf("\ndigite o dia de treinamento:");
    scanf("%s", &treinamento[linha]);
    printf("\ndigite a hora da consulta:");
    scanf("%s", &consulta[linha]);
    printf("\ndigite a hora de almoco:");
    scanf("%s", &almoco[linha]);
    printf("\ndigite 1 para continuar ou outro valor para sair");
    scanf("%d", &op);
    linha++;
    }while(op==1);
}

void pesquisa(){

    do{
    printf("\ndigite 1 para pesquisar por modalidade ou 2 para pesquisar por dia");
    scanf("%d", &op);
switch (op){
    case 1:
    printf("\ndigite a modalidade");
    scanf("%s", modalidadepesquisa);
for (i=0; i<SIZE ;i++){
    if (strcmp (modalidade[i], modalidadepesquisa)){
        printf("\nmodalidade: %s\ninicio: %s\nfim: %s\ntreinamento: %s\nconsulta: %s\nalmoco: %s", modalidade[i], inicio[i], fim[i], treinamento[i], consulta[i], almoco[i]);
    }
}

break;
case 2:
printf("\ndigite o inicio");
scanf("%s", iniciopesquisa);
for (i=0;i<SIZE;i++){
    if (strcmp (inicio[i], iniciopesquisa)){
        printf("\nmodalidade: %s\ninicio: %s\nfim: %s\ntreinamento: %s\nconsulta: %s\nalmoco: %s", modalidade[i], inicio[i], fim[i], treinamento[i], consulta[i], almoco[i]);
    }
}


break;
    default:
printf("\nopcao invalida");
break;
}
printf("\ndigite 1 para continuar pesquisando");
scanf("%d, &op");
    }while(op==2);

}
