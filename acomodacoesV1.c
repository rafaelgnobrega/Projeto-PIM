#include <stdio.h>
#define SIZE 200
//ACOMODAÇOES PARIS 2024

 char pais [SIZE][50];
 char modalidade [SIZE][50];
 char andar [SIZE][50];
 char sexo [SIZE][50];
 char quarto [SIZE][50];
 int op;
 

 int main(void){
     predio();}

void predio(){
    static int linha;
    do{
    printf("\nDigite o país: ");
    scanf("%s", &pais[linha]);
    printf("\nDigite a modalidade: ");
    scanf("%s", &modalidade[linha]);
    printf("\nDigite o andar do predio: ");
    scanf("%s", &andar[linha]);
    printf("\nDigite o sexo do atleta: ");
    scanf("%s", &sexo[linha]);
    printf("\nDigite o quarto do atleta: ");
    scanf("%s", &quarto[linha]);
    printf("\nDigite 1 para continuar ou outro valor para sair");
    scanf("%d", &op);
    linha++;
    }while(op==1);
}

