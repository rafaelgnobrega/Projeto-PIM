#include <stdio.h>
#include <stdlib.h>
#define SIZE 200
//CALENDARIO JOGOS

 char modalidade [SIZE][50];
 char inicio [SIZE][50];
 char fim [SIZE][50];
 char treinamento [SIZE][50];
 char consulta [SIZE][50];
 char almoco [SIZE][50];
 int op;
 void cadastro();



void cadastro(){
    static int linha;
    do{
    printf("\ndigite a modalidade:");
    scanf("%s", &modalidade[linha]);
    printf("\ndigite o inicio da modalidade:");
    scanf("&s", &inicio[linha]);
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

int main(void){
    cadastro();   
}