#include <stdio.h>
#define SIZE 200
//CALENDARIO JOGOS
//INICIO DAS OLIMPIADAS PARIS DIA 26 DE JULHO DE 2024
//TERMINO DAS OLIMPIADAS PARIS DIA 11 DE AGOSTO DE 2024
 char modalidade [SIZE][50];
 char inicio [SIZE][50];
 char fim [SIZE][50];
 char treinamento [SIZE][50];
 char consulta [SIZE][50];
 char almoco [SIZE][50];
 int op;
 static int linha;

 void abertura();
 void calendario();
 void menucalendario();
 void Atualizacao_base_calendario();
 void mostrarcalendario();
 void carregar_calendario();





void abertura(){
    printf("\t\t|----------------------------------------------------------------------|\n");
    printf("\t\t|  CERIMONIA DE ABERTURA DOS JOGOS OLIMPICOS PARIS 2024, 26 DE JULHO   |\n");
    printf("\t\t|----------------------------------------------------------------------|\n");
    printf("\t\t|CERIMONIA DE ENCERRAMENTO DOS JOGOS OLIMPICOS PARIS 2024, 11 DE AGOSTO|\n");
    printf("\t\t|----------------------------------------------------------------------|\n\n\n");

}

void calendario(){
    do{
    printf("\t\t---------------------------------------------------\n");
    printf("\t\t|    ADICIONAR INFORMAÇÕES AO CALENDARIO        |\n");
    printf("\t\t---------------------------------------------------\n\n");  
    printf("\nDigite a modalidade:");
    scanf("%s", &modalidade[linha]);
    printf("\nDigite o inicio da modalidade:");
    scanf("%s", &inicio[linha]);
    printf("\nDigite o fim da modalidade:");
    scanf("%s", &fim[linha]);
    Atualizacao_base_calendario();
    printf("\nDigite 1 para Continuar\nDigite 2 para voltar ao menu do Calendario\n");
    scanf("%d", &op);
    linha++;
    }while(op==1);
    system ("cls");
        if (op==2)
    {
        menucalendario();
    }
    
} //fim da funcao cadastro

void menucalendario() 
{
        int tipo;
do{


        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|                             CALENDARIO                               |\n");
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              1 - ADICIONAR INOFORMACOES AO CALENDARIO                |\n");
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              2 - ACESSAR AS INFORMACOES DO CALENDARIO                |\n");
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              3 - ENCERRAR PROGRAMA                                   |\n");
        printf("\t\t|----------------------------------------------------------------------|\n\n\n");
        printf("Opção Escolhida: ");
        scanf("%d",&tipo);
        system("cls");
        switch(tipo)
        {
            case 1:
                calendario();
                break;
            
            case 2:
                mostrarcalendario();
                system("cls");
                break;



            default:
            if (tipo!=3)
            {
                printf("Opção Inválida!\7\7"); 
            }
             break;
        }

        }while(tipo != 3);
}

void Atualizacao_base_calendario()
{
     FILE*d_calendario;
    d_calendario =fopen("Calendario.txt","a+");
    if(d_calendario == NULL)
    {
        printf("Não foi possivel gravar os dados");
        system("pause");
    }
    fprintf(d_calendario,"%s %s %s\n",modalidade[linha],inicio[linha],fim[linha]);
    fclose(d_calendario);
}

void mostrarcalendario()
{
    int c;

     printf("----------------------------------------------------\n");
     printf("|           QUADRO DE MEDALHAS POR PAIS            |\n");
     printf("|--------------------------------------------------|\n");
     printf("|MODALIDADE      |DATA INICIAL    |DATA FINAL      |\n");
     printf("|--------------------------------------------------|\n");
    for (c = 0; c < linha; c++)
    {
        printf("|%-16s|%-16s|%-16s|\n", modalidade[c], inicio[c], fim[c]);
        printf("|--------------------------------------------------|\n");
    }
    getch();
}

void carregar_calendario()
 {
    FILE*d_calendario;
    d_calendario =fopen("Calendario.txt","a+");
    if(d_calendario == NULL)
    {
        printf("Não foi possivel gravar os dados");
        system("pause");
    }
    while(!feof(d_calendario))
    {
    fscanf(d_calendario,"%s %s %s\n",&modalidade[linha],&inicio[linha],&fim[linha]);
    linha++;
    }
    fclose(d_calendario);
 }
 
int main(void){
    abertura();  
    carregar_calendario();
    menucalendario(); 
}