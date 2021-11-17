#include <stdio.h>
#define SIZE 200
//ACOMODAÇOES PARIS 2024

char pais [SIZE][50];
char modalidade [SIZE][50];
char andar [SIZE][50];
char sexo [SIZE][50];
char quarto [SIZE][50];
int op;
static int linha;

void alojamento();
void carregar_alojamento();
void Atualizacao_base_alojamento();
void menualojamento();




void predio()
{
    do{

    printf("\t\t ---------------------------------------------------------------------- \n");
    printf("\t\t|                ADICIONAR INFORMACOES DO ALOJAMENTO                   |\n");
    printf("\t\t ---------------------------------------------------------------------- \n\n");
    printf("\nDigite o pais: ");
    scanf("%s", &pais[linha]);
    printf("\nDigite a modalidade: ");
    scanf("%s", &modalidade[linha]);
    printf("\nDigite o andar do predio: ");
    scanf("%s", &andar[linha]);
    printf("\nDigite o sexo do atleta: ");
    scanf("%s", &sexo[linha]);
    printf("\nDigite o quarto do atleta: ");
    scanf("%s", &quarto[linha]);
    Atualizacao_base_alojamento();
    printf("\nDigite 1 para continuar ou outro valor para sair");
    scanf("%d", &op);
    linha++;
    }while(op==1);
}

void menualojamento() 
{
        int tip;
do{


        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|                             ALOJAMENTO                               |\n");
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              1 - ADICIONAR INOFORMACOES DE ALOJAMENTO                |\n");
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              2 - ACESSAR AS INFORMACOES DO ALOJAMENTO                |\n");
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              3 - ENCERRAR PROGRAMA                                   |\n");
        printf("\t\t|----------------------------------------------------------------------|\n\n\n");
        printf("Opção Escolhida: ");
        scanf("%d",&tip);
        system("cls");
        switch(tip)
        {
            case 1:
                predio();
                break;
            
 /*           case 2:
                mostrarcalendario();
                system("cls");
                break;



            default:
            if (tip!=3)
            {
                printf("Opção Inválida!\7\7"); 
            }
             break;*/
        }

        }while(tip != 1);
}

void alojamento()
{

}

void Atualizacao_base_alojamento()
{
     FILE*alojamento;
    alojamento =fopen("Alojamento.txt","a+");
    if(alojamento == NULL)
    {
        printf("Não foi possivel gravar os dados");
        system("pause");
    }
    fprintf(alojamento,"%s %s %s %s %s\n",pais[linha],modalidade[linha],andar[linha],sexo[linha],quarto[linha]);
    fclose(alojamento);
}

void carregar_alojamento()
 {
    FILE*alojamento;
    alojamento =fopen("Alojamento.txt","a+");
    if(alojamento == NULL)
    {
        printf("Não foi possivel gravar os dados");
        system("pause");
    }
    while(!feof(alojamento))
    {
    fscanf(alojamento,"%s %s %s %s\n",&pais[linha],&modalidade[linha],&andar[linha],&sexo[linha],&quarto[linha]);
    linha++;
    }
    fclose(alojamento);
} 

int main(void)
{
    carregar_alojamento();
     menualojamento();
}