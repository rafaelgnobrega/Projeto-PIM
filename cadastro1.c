#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SIZE 200


char nome [SIZE][50];
char email [SIZE][50];
int cpf [SIZE];
int op;

void cadastro();
void pesquisa();
void lista();

int main (void){

    do{
        system("cls");
        printf("\n----Menu----\n1 - cadastro\n2 - listar todos\n3 - pesquisar\n4 - sair\n\n");
        scanf("%d", &op);
        switch(op){
        case 1:
            cadastro();
            break;
            case 2:
                lista();
                break;
            case 3:
                pesquisa();
                break;
            case 4:
                system("exit");
                break;
            default:
                printf("opocao invalida.");
                getchar();
                getchar();
                break;
        }

    }while(op!=4);

}
void lista(){
int i;
for(i=0;i<SIZE;i++){
    if(cpf[i]>0){
    printf("\nNome: %s\nemail: %s\ncpf: %d",nome[i],email[i],cpf[i]);
    }else{
        break;
    }
}
getchar();
getchar();
}
void cadastro(){
    static int linha;
    do{
        printf ("\nDigite o nome:");
        scanf ("%s",&nome[linha]);
        printf ("\nDigite o e-mail:");
        scanf("%s", &email[linha]);
        printf ("\nDigite o cpf:");
        scanf ("%d", &cpf[linha]);
        printf("\nDigite 1 para continuar ou outro valor para sair");
        scanf("%d", &op);
        linha++;

    }while(op==1);

} // FIM DA FUNCAO CADASTRO.

void pesquisa () {
    int cpfPesquisa;
    int i;
    char emailPesquisa[50];
    do{
        printf("\n Digite 1 para pesquisar cpf ou 2 para pesquisar por email:");
        scanf("%d", &op);
        switch(op){
        case 1:
            printf("\nDigite o cpf:");
            scanf("%d",&cpfPesquisa);
            for (i=0;i<SIZE;i++){
                    if(cpf[i]==cpfPesquisa){
                            printf("\nNome: %s\nemail: %s\ncpf: %d",nome[i],email[i],cpf[i]);
                    }
            }
            break;
        case 2:
            printf("\nDigite o email:");
            scanf("%s",&emailPesquisa);
            for (i=0;i<SIZE;i++){
                    if(strcmp(email[i],emailPesquisa)==0){
                            printf("\nNome: %s\nemail: %s\ncpf: %d",nome[i],email[i],cpf[i]);
                    }
            }

            break;
        default:
            printf("\nOpcao invalida.");

            break;


        }
      printf("\nDigite 1 para continuar pesquisando");
      scanf("%d",&op);
    }while(op==1);

}



