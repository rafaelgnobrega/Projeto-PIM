#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<Windows.h>
#define SIZE 5000

char nome[SIZE][50];
char email[SIZE][50];
char modalidade [SIZE][50];
char pais[SIZE][50];
int cpf[SIZE];
int op;
int cont3;
static int linha,linha2,linhaq,linhac,linhaa;
char nomeq[SIZE][50];
char emailq[SIZE][50];
char modalidadeq[SIZE][50];
char paisq[SIZE][50];
int ouro[50],prata[50],bronze[50],pontuacao[SIZE];
char a[50][300];
char nomep[200][50];
char modalidadep[200][50];
char paisp[200][50];
int ourop[50],pratap[50],bronzep[50],pontuacaop[200];
char aux_paisp[200][50];
char aux_nome[200][50],aux_pais[200][50],aux_modalidade[200][50];
int aux_ouro,aux_prata,aux_bronze,aux_pontuacao;
int aux_ourop,aux_pratap,aux_bronzep,aux_pontuacaop;
int pais_ouro[50],pais_prata[50],pais_bronze[50],pais_pontuacao[200];
int linhap;
int pesoOuro = 5;
int pesoPrata = 3;
int pesoBronze = 1;
char modalidadec [SIZE][50];
char inicio [SIZE][50];
char fim [SIZE][50];
char paisa[SIZE][50];
char modalidadea[SIZE][50];
char andar[SIZE][50];
char sexo [SIZE][50];
char quarto[SIZE][50];

  
typedef struct{

    char nome[50];
    char login[20];
    char senha[16];
} Usuario;  
Usuario usuarios[10];

// AREA DE DECLARAÇÃO DE FUNÇÕES

void logo ();
void cadastro();
void pesquisa();
void lista();
int login();
void carregar_base_d();
void Atualizacao_base_d();
void base_d_atletas();
void atualizacao_d_atletas();
void carregar_d_atleta();
int input_medalhas();
void quadro_de_medalhas();
void quadro_pais();
void quadro_modalidade();
void quadro_geral();
 void abertura();
 void calendario();
 void cadastro_datas();
 void Atualizacao_base_calendario();
 void mostrarcalendario();
 void carregar_calendario();
 void carregar_alojamento();
void Atualizacao_base_alojamento();
void menualojamento();
void mostraralojamento();
void cadastro_alojamento();

 // AREA DE DECLARAÇÃO DE FUNÇÕES

void logo ()
 {   

    
  int b,c;
    system("cls");
    for(c=0;c < 1;c++)
    {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\n\t########     ###    ######## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf(" ####  ######      #######");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("    #####    #######  ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t##     ##   ## ##   ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##  ##    ##    ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##   ##  ##     ## ##    ## \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t##     ##  ##   ##  ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##  ##                 ## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##     ##        ## ##    ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t########  ##     ## ########   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##   ######      #######  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##     ##  #######  ##    ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t##        ######### ##   ##    ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##        ##    ##        ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##     ## ##        ######### \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t##        ##     ## ##    ##   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##  ##    ##    ##         ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##   ##  ##              ##  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t##        ##     ## ##     ## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("####  ######     #########   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("#####   #########       ##  \n");
    for(b=0;b < 200000000;b++)
    {

    }
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("\n\t########     ###    ######## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf(" ####  ######      #######");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("    #####    #######  ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("\t##     ##   ## ##   ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("##  ##    ##    ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##   ##  ##     ## ##    ## \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("\t##     ##  ##   ##  ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("##  ##                 ## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##     ##        ## ##    ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("\t########  ##     ## ########   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("##   ######      #######  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##     ##  #######  ##    ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("\t##        ######### ##   ##    ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("##        ##    ##        ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##     ## ##        ######### \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("\t##        ##     ## ##    ##   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("##  ##    ##    ##         ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##   ##  ##              ##  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("\t##        ##     ## ##     ## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("####  ######     #########   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("#####   #########       ##  \n");
    for(b=0;b < 200000000;b++)
    {

    }
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("\n\t########     ###    ######## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf(" ####  ######      #######");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("    #####    #######  ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("\t##     ##   ## ##   ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##  ##    ##    ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("##   ##  ##     ## ##    ## \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("\t##     ##  ##   ##  ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##  ##                 ## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("##     ##        ## ##    ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("\t########  ##     ## ########   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##   ######      #######  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("##     ##  #######  ##    ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("\t##        ######### ##   ##    ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##        ##    ##        ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("##     ## ##        ######### \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("\t##        ##     ## ##    ##   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##  ##    ##    ##         ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("##   ##  ##              ##  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("\t##        ##     ## ##     ## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("####  ######     #########   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("#####   #########       ##  \n");
    for(b=0;b < 200000000;b++)
    {

    }
    system("cls");
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\n\t########     ###    ######## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf(" ####  ######      #######");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("    #####    #######  ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t##     ##   ## ##   ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##  ##    ##    ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##   ##  ##     ## ##    ## \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t##     ##  ##   ##  ##     ##  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##  ##                 ## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##     ##        ## ##    ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t########  ##     ## ########   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##   ######      #######  ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##     ##  #######  ##    ##\n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t##        ######### ##   ##    ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##        ##    ##        ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##     ## ##        ######### \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t##        ##     ## ##    ##   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("##  ##    ##    ##         ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("##   ##  ##              ##  \n");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);printf("\t##        ##     ## ##     ## ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);printf("####  ######     #########   ");SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);printf("#####   #########       ##  \n");
    getch();
 }

void cadastro()
 {
    char nome2[20];
    char email2[20];
    char pais2[20];
    char modalidade2[20];
    int i, tipo;
   
    do{
        op = 1;
        printf("--------------------------------------CADASTRO DE USUARIOS-------------------------------------\n");
        printf("------------------------------------------------------------------------------------------------\n\n");
        printf("\t-----------------------------------------------------------------\n");
        printf("\t|ESCOLHA ABAIXO O TIPO DE USUARIOS QUE IRA CADASTRAR\t\t|\n");
        printf("\t|---------------------------------------------------------------|\n");
        printf("\t|\t1 - CADASTRO DE ATLETAS                           \t|\n");
        printf("\t|---------------------------------------------------------------|\n");
        printf("\t|\t2 - CADASTRO DE OUTROS USUARIOS                   \t|\n");
        printf("\t|---------------------------------------------------------------|\n");
        printf("\t|\t3 - VOLTAR AO MENU PRINCIPAL                      \t|\n");
        printf("\t-----------------------------------------------------------------\n\n");
        printf("OPCAO ESCOLHIDA: ");
        scanf("%d",&tipo);
        system("cls");
        switch (tipo)
        {
            case 1:
                printf("--------------------------------------CADASTRO DE USUARIOS-------------------------------------\n");
                printf("------------------------------------------------------------------------------------------------\n\n");
                printf("\t\t---------------------------------------------------\n");
                printf("\t\t|       CADASTRO DE ATLETAS NO SISTEMA            |\n");
                printf("\t\t---------------------------------------------------\n\n");                

                printf("DIGITE O NOME: ");
                scanf(" %s",&nome2);
                for(i=0;i<20; i++)
                {
                    nome[linha][i]= toupper(nome2[i]);
                }
                printf("DIGITE O EMAIL: ");
                scanf("%s",&email2);
                for(i=0;i<20; i++)
                {
                    email[linha][i]= toupper(email2[i]);
                }
                printf("DIGITE O CPF: ");
                scanf("%d", &cpf[linha]);
                printf("DIGITE O PAIS: ");
                scanf ("%s",&pais2);
                for(i=0;i<20; i++)
                {
                    pais[linha][i]= toupper(pais2[i]);
                }
                printf("DIGITE A MODALIDADE: ");
                scanf("%s",&modalidade2);
                 for(i=0;i<20; i++)
                {
                    modalidade[linha][i]= toupper(modalidade2[i]);
                }
                printf("\n\n");
                base_d_atletas();
                linha2++;
            break;
            case 2:
                printf("--------------------------------------CADASTRO DE USUARIOS-------------------------------------\n");
                printf("------------------------------------------------------------------------------------------------\n\n");
                printf("\t\t---------------------------------------------------\n");
                printf("\t\t|       CADASTRO DE OUTROS USUARIOS              |\n");
                printf("\t\t---------------------------------------------------\n\n");  

                printf("DIGITE O NOME: ");
                scanf(" %s",&nome2);
                for(i=0;i<20; i++)
                {
                    nome[linha][i]= toupper(nome2[i]);
                }
                printf("DIGITE O EMAIL: ");
                scanf("%s",&email2);
                for(i=0;i<20; i++)
                {
                    email[linha][i]= toupper(email2[i]);
                }
                printf("DIGITE O CPF: ");
                scanf("%d", &cpf[linha]);
                printf("DIGITE O PAIS: ");
                scanf ("%s",&pais2);
                for(i=0;i<20; i++)
                {
                pais[linha][i]= toupper(pais2[i]);
                }
                printf("\n\n");
        
            break;
            case 3:
                op = 2;
            break;

            default:
                printf("--------------------------------------CADASTRO DE USUARIOS-------------------------------------\n");
                printf("------------------------------------------------------------------------------------------------\n\n");
                printf("OPCAO INVALIDA\n");
            break;
        }
        if( op == 1)
        {
            printf("----------------------------------\n");
            printf("|1 - CONTINUAR O CADASTRAMENTO   |\n");
            printf("|--------------------------------|\n");
            printf("|2 - VOLTAR AO MENU PRINCIPAL    |\n");
            printf("----------------------------------\n");
            printf("OPCAO ESCOLHIDA: ");
            scanf("%d", &op);
            Atualizacao_base_d();
        
            ++linha;
        }
        system("cls");

    }while(op == 1);



 }

void pesquisa()
 {

    int pesquisacpf;
    char pesquisaemail[20],email1[20];
    char pesquisaPais[20],pais1[20];
    int i,j,op2;

    do{
        op = 1;
        printf("-------------------------------------PESQUISA DE CADASTROS-------------------------------------\n");
        printf("-----------------------------------------------------------------------------------------------\n\n");

        printf("\t---------------------------------------------------------\n");
        printf("\t|\t1 - PESQUISAR POR CPF       \t\t\t|\n");
        printf("\t--------------------------------------------------------|\n");
        printf("\t|\t2 - PESQUISAR POR EMAIL     \t\t\t|\n");
        printf("\t|-------------------------------------------------------|\n");
        printf("\t|\t3 - PESQUISAR POR PAIS      \t\t\t|\n");
        printf("\t--------------------------------------------------------|\n");
        printf("\t|\t4 - VOLTAR AO MENU PRINCIPAL\t\t\t|\n");
        printf("\t--------------------------------------------------------|\n\n");
        printf("OPCAO DESEJADA: ");
        scanf("%d", &op2);
        system("cls");
        switch(op2)
        {

            case 1:
                printf("-------------------------------------PESQUISA DE CADASTROS-------------------------------------\n");
                printf("-----------------------------------------------------------------------------------------------\n\n");
                printf("\t\t-----------------------------------\n");
                printf("\t\t|       PESQUISA POR CPF          |\n");
                printf("\t\t-----------------------------------\n\n"); 

                printf("POR FAVOR, DIGITE O CPF DESEJADO: ");
                scanf("%d", &pesquisacpf);
                printf("\n\n");

                printf("\t\t--RESULTADO DA PESQUISA--\n");
                printf("\t\t-------------------------\n\n");

                for(i=0; i<SIZE; ++i){
                    if(cpf[i]==pesquisacpf){

                        printf("Nome: %s\n", nome[i]);
                        printf("Email: %s\n",email[i]);
                        printf("CPF: %d\n", cpf[i]);
                        printf("Pais: %s\n", pais[i]);
                        printf("\n\n");
                    }
                }

                break;

            case 2:
            printf("-------------------------------------PESQUISA DE CADASTROS-------------------------------------\n");
            printf("-----------------------------------------------------------------------------------------------\n\n");

                printf("\t\t-----------------------------------\n");
                printf("\t\t|       PESQUISA POR EMAIL        |\n");
                printf("\t\t-----------------------------------\n\n"); 

                printf("POR FAVOR, DIGITE O EMAIL DESEJADO: ");
                scanf("%s",&email1);
                for(j = 0; j < 20;j++)
                {
                    pesquisaemail[j] = toupper(email1[j]);
                }

                printf("\n\n");

                printf("\t\t--RESULTADO DA PESQUISA--\n");
                printf("\t\t-------------------------\n\n");

                for(i=0; i<SIZE; ++i){
                    if (strcmp(email[i], pesquisaemail)==0){

                        printf("Nome: %s\n", nome[i]);
                        printf("Email: %s\n",email[i]);
                        printf("CPF: %d\n", cpf[i]);
                        printf("Pais: %s\n", pais[i]);
                        printf("\n\n");
                    }
                }
            break;
            case 3:
                printf("-------------------------------------PESQUISA DE CADASTROS-------------------------------------\n");
                printf("-----------------------------------------------------------------------------------------------\n\n");

                printf("\t\t-----------------------------------\n");
                printf("\t\t|       PESQUISA POR PAIS         |\n");
                printf("\t\t-----------------------------------\n\n"); 

                printf("POR FAVOR, DIGITE O PAIS DESEJADO: ");
                scanf("%s",&pais1);
                 for(j = 0; j < 20;j++)
                {
                    pesquisaemail[j] = toupper(email1[j]);
                }

                printf("\n\n");

                printf("\t\t--RESULTADO DA PESQUISA--\n");
                printf("\t\t-------------------------\n\n");

                for(i=0; i<SIZE; ++i){
                    if (strcmp(pais[i], pesquisaPais)==0){

                        printf("Nome: %s\n", nome[i]);
                        printf("Email: %s\n",email[i]);
                        printf("CPF: %d\n", cpf[i]);
                        printf("Pais: %s\n", pais[i]);
                        printf("\n\n");
                    }
                }

            break;
            case 4:
                op =2;
            break;

            default:
                printf("-------------------------------------PESQUISA DE CADASTROS-------------------------------------\n");
                printf("-----------------------------------------------------------------------------------------------\n\n");
                printf("OPCAO INVALIDA\n");
            break;

            }
            if(op == 1)
            {
                printf("-----------------------------------\n");
                printf("|1 - CONTINUAR A PESQUISA         |\n");
                printf("|---------------------------------|\n");
                printf("|2 - VOLTAR AO MENU PRINCIPAL     |\n");
                printf("-----------------------------------\n");
                printf("SELECIONE A OPCAO DESEJADA: ");
                scanf("%d", &op);
            }
    }while(op == 1);



 }

void lista()
 {

    int i;

    printf("----------------------------LISTA DE USUARIOS CADASTRADOS NO SISTEMA---------------------------\n");
    printf("-----------------------------------------------------------------------------------------------\n\n");

    for(i=0; i<SIZE; ++i){
        if (cpf[i]>0){

         printf("------------------------------------\n");
         printf("Nome: %s\n", nome[i]);
         printf("Email: %s\n",email[i]);
         printf("CPF: %d\n", cpf[i]);
         printf("pais: %s\n",pais[i]);
         printf("Modalidade: %s\n",modalidade[i]);
         printf("-------------------------------------\n");
         printf("\n\n");

        }
    }
    getch();
 }

int login ()
 {

    system("cls");

    char login[20], senha[16];
    int cont=0,d;
    int i=0;
    int s=0; // variavel auxiliadora de armazenamento da senha.
    char c; // variavel para pegar um caracter por vez da senha

    printf("---------------------------------------LOGIN DO PROGRAMA---------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------------\n\n");

    printf("Digite o login: ");
    gets(login);
    printf("Digite a senha: ");
    while ((c=getch())!=13)// esse laço vai ate o usarior digitar a tecla enter
    {
        if(c==8) // valor do backspace.
        {
            printf("\b");
            printf("\t");
            printf("\b");
            printf("\b");
            printf("\b");
            printf("\b");
            printf("\b");
            printf("\b");
            s--;
        }
        else
        {
        senha[s]=c; // esta colocando um caractere por vez na variavel.
        printf("*"); // essa * mostra na tela no lugar da senha.
        cont++;
        s++;
        }
    }
    senha[s]='\0'; // finalizando a senha
        if ( s < 2)
        {
            senha[0] = 'e';
            login[0] = 'e';
        }

        for(i=0; i<2; ++i){

            if(strcmp(usuarios[i].login, login)==0 && strcmp(usuarios[i].senha, senha)==0)
            {
                return 1;
            }

        }
        printf("\n\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),20);
        printf("---------------------------------------------\n");
        printf("|Login incorreto!\7\7 Por favor, tente novamente. |\n");
        printf("---------------------------------------------\n\n");
        system("pause");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),23);
        return 0;

 }

void carregar_base_d()
 {
    FILE*banco_d;
    banco_d =fopen("Base_de_dados.txt","a+");
    if(banco_d == NULL)
    {
        printf("Não foi possivel acessar a Base de dados, sera criando um arquivo de backup");
        system("pause");
        banco_d =fopen("Base_de_dados","w");
    }
    while(!feof(banco_d))
    {
    fscanf(banco_d,"%s %s %i %s %s",&nome[linha],&email[linha],&cpf[linha],&pais[linha],&modalidade[linha]);
    linha++;
    }
    fclose(banco_d);
    
 }

void Atualizacao_base_d()
 {
     FILE*banco_d;
    banco_d =fopen("Base_de_dados.txt","a+");
    if(banco_d == NULL)
    {
        printf("Não foi possivel gravar os dados");
        system("pause");
    }
    fprintf(banco_d,"%s %s %i %s %s\n",nome[linha],email[linha],cpf[linha],pais[linha],modalidade[linha]);
    fclose(banco_d);
 } 

void base_d_atletas()
 {
  FILE*ranking;
  int pontuacao1=0,ouro1=0,prata1=0,bronze1=0;
    ranking =fopen("Ranking de medalhas.txt","a+");
    if(ranking == NULL)
    {
        printf("Não foi possivel gravar os dados");
        system("pause");
    }
    fprintf(ranking,"%s %s %s %i %i %i %i\n",nome[linha],pais[linha],modalidade[linha],pontuacao1,ouro1,prata1,bronze1);
    fclose(ranking);
 }
    
void carregar_d_atleta()
    {
        linhaq=0;
        FILE*ranking;
        ranking =fopen("Ranking de medalhas.txt","a+");
        if(ranking == NULL)
        {
            printf("Não foi possivel acessar a Base de dados");

     
        }
        while(!feof(ranking))
        {
            fscanf(ranking,"%s %s %s %i %i %i %i",&nomeq[linhaq],&paisq[linhaq],&modalidadeq[linhaq],&pontuacao[linhaq],&ouro[linhaq],&prata[linhaq],&bronze[linhaq]);
            linhaq++;
            cont3++;
        }
        fclose(ranking);
    }

void atualizacao_d_atletas()
    {
    
        int c,m,f,e,i,h,j;
        FILE*ranking;
        for ( m = 0; m <= linhaq; m++)
        {
            pontuacao[m] = (ouro[m] *pesoOuro) + (prata[m] * pesoPrata) + (bronze[m] *pesoBronze);
        }
        
        for (j = 1; j <= linhaq; j++)
        {
        for (i = 1; i <= linhaq; i++) 
        {
            c = i;
            while (c > 0 && pontuacao[c-1] < pontuacao[c]) 
            {
                for (f = 0; f < 20; f++)
                {
                    aux_nome[c-1][f] = nomeq[c-1][f];
                    aux_pais[c-1][f] = paisq[c-1][f];
                    aux_modalidade[c-1][f] = modalidadeq[c-1][f];
                }
                aux_pontuacao = pontuacao[c-1];
                aux_ouro = ouro[c-1];
                aux_prata = prata[c-1];
                aux_bronze = bronze[c-1];
                for ( e = 0; e < 20; e++)
                {
                    nomeq[c-1][e] = nomeq[c][e];
                    paisq[c-1][e] = paisq[c][e];
                    modalidadeq[c-1][e] = modalidadeq[c][e];
                }
                pontuacao[c-1] = pontuacao[c];
                ouro[c-1] = ouro[c];
                prata[c-1] = prata[c];
                bronze[c-1] = bronze[c];
                for (h = 0; h < 20; h++)
                {
                    nomeq[c][h]= aux_nome[c-1][h];
                    paisq[c][h]= aux_pais[c-1][h];
                    modalidadeq[c][h]= aux_modalidade[c-1][h];
                }
           
                pontuacao[c] = aux_pontuacao;
                ouro[c] = aux_ouro;
                prata[c] = aux_prata;
                bronze[c] = aux_bronze;
            }
       
    }
        }

        i =0;
        ranking=fopen("Ranking de medalhas.txt","w");
        linhaq--;
        while (i<linhaq)
        {   
            fprintf(ranking,"%s %s %s %i %i %i %i\n",nomeq[i],paisq[i],modalidadeq[i],pontuacao[i],ouro[i],prata[i],bronze[i]);
            i++;
        }   
        fclose(ranking);

    }

int input_medalhas()
 {
    char busca_modalidade[20],modalidade[20],busca_nome[20],nome[20];
    int medalha,y,x,i, retorno=0;
    do
    {

     
        printf("--------------------------------------CADASTRO DE MEDALHAS-------------------------------------\n");
        printf("-----------------------------------------------------------------------------------------------\n\n");
        printf("QUAL MODALIDADE?\n");
        scanf("%s",&modalidade);
        for(i=0;i<20; i++)
        {
            busca_modalidade[i]= toupper(modalidade[i]);
        }
        printf("QUAL O NOME DO ATLETA?\n");
        scanf("%s",&nome);
        printf("\n\n");
        for(i=0;i<20;i++)
        {
            busca_nome[i]= toupper(nome[i]);
    
        }
        for(x=0;x<=linhaq;x++)
        {
	        if((strcmp(nomeq[x], busca_nome)==0 && strcmp(modalidadeq[x], busca_modalidade)==0))
	        {
		        y= x;
                x= linhaq;
	        }
            else
            y =linhaq;
        }
        if(y==linhaq)
        {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),20);
        printf("ATLETA NAO ENCONTRADO\n");
        getch();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),23);
        retorno = 1;
    
        }
        else
        {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),26);
        printf("ATLETA ENCONTRADO\n");
        getch();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),23);
        system("cls");
        }
        switch (retorno)
        {
        case 0:
            printf("--------------------------------------CADASTRO DE MEDALHAS-------------------------------------\n");
            printf("-----------------------------------------------------------------------------------------------\n\n");

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),26);
            printf("NOME:%s\nPAIS:%s\nMODALIDADE:%s\n\n",nomeq[y],paisq[y],modalidadeq[y]);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),23);

            printf("\t\t-------------------------------------------------------\t\t\n");
            printf("\t\t|       QUAL MEDALHA VAI SER ATRIBUIDA PARA O ATLETA? |\t\t\n");
            printf("\t\t|-----------------------------------------------------|\t\t\n");
            printf("\t\t|       [1]OURO [2]PRATA [3]BRONZE                    |\t\t\n");
            printf("\t\t-------------------------------------------------------\t\t\n\n");
            scanf("%i",&medalha);

            switch (medalha)
            {
            case 1:
            ouro[y]++;
            break;

            case 2:
            prata[y]++;
            break;

            case 3:
            bronze[y]++;
            break;
            }
          atualizacao_d_atletas();
          retorno = 1;
          break;

         default:
         retorno =1;
            break;
        }
    } while (retorno!= 1);
    
 }

void quadro_de_medalhas()
 {
  int op,op2;
  do
  {
      
    system("cls");
    printf("---------------------------------------QUADRO DE MEDALHAS--------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------------\n\n");

    printf("\t----------------------------------------------------------\n");
    printf("\t|\t1 - QUADRO DE MEDALHAS POR PAIS\t\t         |\n");
    printf("\t----------------------------------------------------------\n");
    printf("\t|\t2 - QUADRO DE MEDALHAS POR MODALIDADE\t\t |\n");
    printf("\t----------------------------------------------------------\n");
    printf("\t|\t3 - QUADRO DE MEDALHAS GERAL\t\t         |\n");
    printf("\t----------------------------------------------------------\n");
    printf("\t|\t4 - VOLTAR AO MENU PRINCIPAL\t\t         |\n");        
    printf("\t----------------------------------------------------------\n\n");
    printf("OPCAO ESCOLHIDA: ");
    scanf("%i",&op);
    switch(op)
    {
        case 1:
            quadro_pais();
            getch();
        break;
        case 2:
            carregar_d_atleta();
            quadro_modalidade();
        break;
        case 3:
            carregar_base_d();
            quadro_geral();
        break;
        case 4:
            op2 =2;
        break;
    }
    if(op2 != 2)
    {
        printf("---------------------------------------------\n");
        printf("|1 - CONTINUAR NO QUADRO DE MEDALHAS        |\n");
        printf("|-------------------------------------------|\n");
        printf("|2 - VOLTAR AO MENU PRINCIPAL               |\n");
        printf("---------------------------------------------\n");
        printf("SELECIONE A OPCAO DESEJADA:");
        scanf("%i", &op2);
    }
  } while (op2 != 2);
  

   
 }

void quadro_pais()
 {
    int z,u,j,i,h,f,e,b,c,g;
    int trava;
   
    linhap =0;
    int y=0;
    int cont=0, cont2=0;
    FILE*ranking;
        ranking =fopen("Ranking de medalhas.txt","a+");
        if(ranking == NULL)
        {
            printf("Não foi possivel acessar a Base de dados");

     
        }
        while(!feof(ranking))
        {
            fscanf(ranking,"%s %s %s %i %i %i %i",&nomep[linhap],&paisp[linhap],&modalidadep[linhap],&pontuacaop[linhap],&ourop[linhap],&pratap[linhap],&bronzep[linhap]);
                for (i = 0; i < linhap; i++)
                {
                    trava =0;
                    if(strcmp(a[i],paisp[linhap])==0)
                    {
                        trava =1;
                        i = linhap;
                        cont2++;
                        y--;
                    }   
                }
                if(trava ==0)
                {
                    for (i = 0; i < 20; i++)
                    {
                        a[y][i]= paisp[linhap][i];
                    }
                }
                y++;
                cont++;  
            linhap++;
        }
    fclose(ranking);
    cont = cont - cont2 -1;

    for (j = 0; j <= cont; j++)
    {
      for (b = 0; b < linhap; b++)
      {
           if(strcmp(a[j],paisp[b])==0)
           {
            pais_ouro[j] = pais_ouro[j] + ourop[b];
            pais_prata[j] = pais_prata[j]+ pratap[b];
            pais_bronze[j] = pais_bronze[j] + bronzep[b];
            pais_pontuacao[j] = (pais_ouro[j] *pesoOuro) + (pais_prata[j] * pesoPrata) + (pais_bronze[j] *pesoBronze);
           }
      }
      
    }
        for (u = 2; u <= cont; u++)
        {

        for (i = 2; i <= cont; i++)
    {
        g = i;
        while (g > 0 && pais_pontuacao[g-1] < pais_pontuacao[g]) 
        {
           for (f = 0; f < 20; f++)
           {
               aux_paisp[g-1][f] = a[g-1][f];
           }
           aux_pontuacaop = pais_pontuacao[g-1];
           aux_ourop = pais_ouro[g-1];
           aux_pratap = pais_prata[g-1];
           aux_bronzep = pais_bronze[g-1];
           for ( e = 0; e < 20; e++)
           {
               a[g-1][e] = a[g][e];
           }
           pais_pontuacao[g-1] = pais_pontuacao[g];
           pais_ouro[g-1] = pais_ouro[g];
           pais_prata[g-1] = pais_prata[g];
           pais_bronze[g-1] = pais_bronze[g];
           for (h = 0; h < 20; h++)
           {
               a[g][h]= aux_paisp[g-1][h];
           }
           
           pais_pontuacao[g] = aux_pontuacaop;
           pais_ouro[g] = aux_ourop;
           pais_prata[g] = aux_pratap;
           pais_bronze[g] = aux_bronzep;
        }
       
    }
        }
     system("cls");
     printf("---------------------------------------QUADRO DE MEDALHAS--------------------------------------\n");
     printf("-----------------------------------------------------------------------------------------------\n\n");
     printf("--------------------------------------------------------------\n");
     printf("|                 QUADRO DE MEDALHAS POR PAIS                | \n");
     printf("|------------------------------------------------------------|\n");
     printf("|POSICAO  |PAIS     |PONTOS   |OURO     |PRATA    |BRONZE    |\n");
     printf("|------------------------------------------------------------|\n");
    for (c = 0; c <= cont; c++)
    {
        printf("|%-9i|%-9s |%-9i|%-9i|%-9i|%-9i|\n",c+1,a[c],pais_pontuacao[c],pais_ouro[c],pais_prata[c],pais_bronze[c]);
        printf("|------------------------------------------------------------|\n");
    }

     for (z = 0; z <= cont; z++)
    {
        pais_pontuacao[z]=0,pais_ouro[z]=0,pais_prata[z]=0,pais_bronze[z]=0;
     
    }

 }

void quadro_modalidade()
{
    int i,c,ret;
    char modalidade[20],aux_modalidade[20];
    do
    {
        system("cls");
        printf("---------------------------------------QUADRO DE MEDALHAS--------------------------------------\n");
        printf("-----------------------------------------------------------------------------------------------\n\n");
        printf("DIGITE A MODALIDADE:");
        scanf("%s",&aux_modalidade);
        for(i = 0; i< 20; i++)
        {
            modalidade[i] = toupper(aux_modalidade[i]);
        }
        system("cls");
        printf("---------------------------------------QUADRO DE MEDALHAS--------------------------------------\n");
        printf("-----------------------------------------------------------------------------------------------\n\n");
        printf("--------------------------------------------------------------------------------------------\n");
        printf("|                           QUADRO DE MEDALHAS POR MODALIDADE                              | \n");
        printf("|------------------------------------------------------------------------------------------|\n");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),20);printf("|                                  MODALIDADE:%-45s|\n",modalidade);SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),23);
        printf("|------------------------------------------------------------------------------------------|\n");
        printf("|POSICAO   |NOME      |PAIS      |MODALIDADE  |PONTOS    |OURO      |PRATA     |BRONZE     |\n");
        printf("|------------------------------------------------------------------------------------------|\n");

        for (c = 0; c <= linhaq; c++)
        {
            if(strcmp(modalidade, modalidadeq[c])==0)
            {
                printf("|%-10i|%-10s|%-10s|%-12s|%-10i|%-10i|%-10i|%-10i |\n",c+1,nomeq[c],paisq[c],modalidadeq[c],pontuacao[c],ouro[c],prata[c],bronze[c]);
                printf("|------------------------------------------------------------------------------------------|\n");
            }
        }
        getch();
        printf("---------------------------------------------------\n");
        printf("|1 - CONTINUAR NO QUADRO POR MODADELIDADE         |\n");
        printf("|-------------------------------------------------|\n");
        printf("|2 - VOLTAR                                       |\n");
        printf("---------------------------------------------------\n");
        printf("SELECIONE A OPCAO DESEJADA:");
        scanf("%i",&ret);
        printf("\n\n");
    } while(ret != 2);

}
void quadro_geral()
{
    int c;
        system("cls");
        printf("---------------------------------------QUADRO DE MEDALHAS--------------------------------------\n");
        printf("-----------------------------------------------------------------------------------------------\n\n");
        printf("--------------------------------------------------------------------------------------------\n");
        printf("|                               QUADRO DE MEDALHAS GERAL                                   | \n");
        printf("|------------------------------------------------------------------------------------------|\n");
        printf("|POSICAO   |NOME      |PAIS      |MODALIDADE  |PONTOS    |OURO      |PRATA     |BRONZE     |\n");
        printf("|------------------------------------------------------------------------------------------|\n");
        linhaq--;
        for (c = 0; c < linhaq; c++)
        {
            printf("|%-10i|%-10s|%-10s|%-12s|%-10i|%-10i|%-10i|%-10i |\n",c+1,nomeq[c],paisq[c],modalidadeq[c],pontuacao[c],ouro[c],prata[c],bronze[c]);
            printf("|------------------------------------------------------------------------------------------|\n");
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
    fscanf(d_calendario,"%s %s %s\n",&modalidadec[linhac],&inicio[linhac],&fim[linhac]);
    linhac++;
    }
    fclose(d_calendario);
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
    fprintf(d_calendario,"%s %s %s\n",modalidadec[linhac],inicio[linhac],fim[linhac]);
    fclose(d_calendario);
}

void cadastro_datas()
{
    char modalidade[20];
    int i;
    do{
        system("cls");
        printf("------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------CALENDARIO-------------------------------------------\n\n");
        op =1;
        printf("\t\t---------------------------------------------------\n");
        printf("\t\t|         ADICIONAR DATAS DOS JOGOS                |\n");
        printf("\t\t---------------------------------------------------\n\n");  
        printf("DIGITE A MODALIDADE:");
        scanf("%s", &modalidade);
        for ( i = 0; i < 20; i++)
        {
            modalidadec[linhac][i] = toupper(modalidade[i]);
        }
    
        printf("\nDIGITE O INICIO DA DAS DISPUTAS DA MODALIDADE%s:",modalidadec[linhac]);
        scanf("%s", &inicio[linhac]);
        printf("\nDIGITE O FINAL DA DAS DISPUTAS DA MODALIDADE%s:",modalidadec[linhac]);
        scanf("%s", &fim[linhac]);
        Atualizacao_base_calendario();
        printf("---------------------------------------------\n");
        printf("|1 - CONTINUAR CADASTRANDO                  |\n");
        printf("|-------------------------------------------|\n");
        printf("|2 - VOLTAR AO MENU DE CALENDARIO           |\n");
        printf("---------------------------------------------\n");
        printf("SELECIONE A OPCAO DESEJADA:");
        scanf("%d", &op);
        linhac++;
    }while(op==1);
    system ("cls");
    
}

void abertura()
{
    printf("\t\t|----------------------------------------------------------------------|\n");
    printf("\t\t|  CERIMONIA DE ABERTURA DOS JOGOS OLIMPICOS PARIS 2024, 26 DE JULHO   |\n");
    printf("\t\t|----------------------------------------------------------------------|\n");
    printf("\t\t|CERIMONIA DE ENCERRAMENTO DOS JOGOS OLIMPICOS PARIS 2024, 11 DE AGOSTO|\n");
    printf("\t\t|----------------------------------------------------------------------|\n\n");

}

void mostrarcalendario()
{
    system("cls");
    int c;
     printf("------------------------------------------------------------------------------------------------\n");
     printf("-------------------------------------------CALENDARIO-------------------------------------------\n\n");
     printf("----------------------------------------------------\n");
     printf("|  CADASTRO DE DATAS DOS JOGOS POR MODALIDADE      |\n");
     printf("|--------------------------------------------------|\n");
     printf("|MODALIDADE      |DATA INICIAL    |DATA FINAL      |\n");
     printf("|--------------------------------------------------|\n");
    for (c = 0; c < linhac; c++)
    {
        printf("|%-16s|%-16s|%-16s|\n", modalidadec[c], inicio[c], fim[c]);
        printf("|--------------------------------------------------|\n");
    }
    getch();
}

void calendario() 
{
        int tipo;
    do{
        system("cls");
        op = 1;
        printf("------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------CALENDARIO-------------------------------------------\n\n");

        abertura();
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              1 - CADASTRAR DATAS DOS JOGOS POR MODALIDADE            |\n");
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              2 - ACESSAR AS DATAS DOS JOGOS                          |\n");
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              3 - VOLTAR AO MENU INICIAL                              |\n");
        printf("\t\t|----------------------------------------------------------------------|\n\n\n");
        printf("OPCAO ESCOLIDA: ");
        scanf("%d",&tipo);
        system("cls");
        switch(tipo)
        {
            case 1:
                cadastro_datas();
                break;
            
            case 2:
                mostrarcalendario();
                break;

            case 3:
            op = 2;
            break;

            default:
                printf("OPCAO INVALIDA"); 
             break;
        }
        if(tipo != 3)
            printf("---------------------------------------------\n");
            printf("|1 - CONTINUAR NO MENU DO CALENDARIO        |\n");
            printf("|-------------------------------------------|\n");
            printf("|2 - VOLTAR AO MENU PRINCIPAL               |\n");
            printf("---------------------------------------------\n");
            printf("SELECIONE A OPCAO DESEJADA:");
            scanf("%i", &op);

    }while(op != 2);

    
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
    fscanf(alojamento,"%s %s %s %s %s\n",&paisa[linhaa],&modalidadea[linhaa],&andar[linhaa],&quarto[linhaa],&sexo[linhaa]);
    linhaa++;
    }
    fclose(alojamento);
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
    fprintf(alojamento,"%s %s %s %s %s\n",paisa[linhaa],modalidadea[linhaa],andar[linhaa],quarto[linhaa],sexo[linhaa]);
    fclose(alojamento);
}

void cadastro_alojamento()
{
    int i;
    char pais[20],modalidade[20],andar2[20],sexo2[20],quarto2[20];
    do
    {
        op =1;
        system("cls");
        printf("|---------------------------------ALOJAMENTO--------------------------------------------------|\n");
        printf("-----------------------------------------------------------------------------------------------\n\n");
        printf("\t\t ---------------------------------------------------------------------- \n");
        printf("\t\t|                ADICIONAR INFORMACOES DO ALOJAMENTO                   |\n");
        printf("\t\t ---------------------------------------------------------------------- \n\n");
        printf("\n DIGITE O PAIS: ");
        scanf("%s", &pais);
        for ( i = 0; i < 20; i++)
        {
            paisa[linhaa][i] = toupper(pais[i]);
        }
        printf("\n DIGITE A MODALIDADE: ");
        scanf("%s", &modalidade);
        for ( i = 0; i < 20; i++)
        {
            modalidadea[linhaa][i] = toupper(modalidade[i]);
        }
        printf("\n DIGITE O ANDAR DO PREDIO: ");
        scanf("%s", &andar2);
        for ( i = 0; i < 20; i++)
        {
            andar[linhaa][i] = toupper(andar2[i]);
        }
        printf("\n DIGITE O SEXO DO(A) ATLETA: ");
        scanf("%s", &sexo2);
        for ( i = 0; i < 20; i++)
        {
            sexo[linhaa][i] = toupper(sexo2[i]);
        }
        printf("\n DIGITE O QUARTO DO(A) ATLETA: ");
        scanf("%s", &quarto2);
        for ( i = 0; i < 20; i++)
        {
            quarto[linhaa][i] = toupper(quarto2[i]);
        }
        Atualizacao_base_alojamento();
        printf("---------------------------------------------\n");
        printf("|1 - CONTINUAR CADASTRANDO                  |\n");
        printf("|-------------------------------------------|\n");
        printf("|2 - VOLTAR AO MENU DE ALOJAMENTO           |\n");
        printf("---------------------------------------------\n");
        scanf("%d", &op);
        linhaa++;
    }while(op==1);
}

void mostraralojamento()
{
    int c;

     printf("|---------------------------------ALOJAMENTO--------------------------------------------------|\n");
     printf("-----------------------------------------------------------------------------------------------\n\n");
     printf("|------------------------------------------------------------------------------------|\n");
     printf("|PAIS            |MODALIDADE      |ANDAR           |QUARTO          |SEXO            |\n");
     printf("|------------------------------------------------------------------------------------|\n");
    for (c = 0; c < linhaa; c++)
    {
        printf("|%-16s|%-16s|%-16s|%-16s|%-16s|\n", paisa[c],modalidadea[c],andar[c],quarto[c],sexo[c]);
        printf("|------------------------------------------------------------------------------------|\n");
    }
    getch();
}

void menualojamento() 
{
        int tip;
do{
        op =1;
        system("cls");
        printf("|---------------------------------ALOJAMENTO--------------------------------------------------|\n");
        printf("-----------------------------------------------------------------------------------------------\n\n");
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              1 - ADICIONAR INOFORMACOES DE ALOJAMENTO                |\n");
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              2 - ACESSAR AS INFORMACOES DO ALOJAMENTO                |\n");
        printf("\t\t|----------------------------------------------------------------------|\n");
        printf("\t\t|              3 - VOLTAR AO MENU INICIAL                              |\n");
        printf("\t\t|----------------------------------------------------------------------|\n\n\n");
        printf("OPCAO ESCOLIDA: ");
        scanf("%d",&tip);
        system("cls");
        switch(tip)
        {
            case 1:
                cadastro_alojamento();
                break;
            
            case 2:
                mostraralojamento();
                break;
            case 3:
            op = 2;
            break;



            default:                
                printf("OPCAO INVALIDA"); 
             break;
        }
        if(tip != 3)
            printf("---------------------------------------------\n");
            printf("|1 - CONTINUAR NO MENU DE ALOJAMENTO        |\n");
            printf("|-------------------------------------------|\n");
            printf("|2 - VOLTAR AO MENU PRINCIPAL               |\n");
            printf("---------------------------------------------\n");
            printf("SELECIONE A OPCAO DESEJADA:");
            scanf("%i", &op);

    }while(op != 2);
}

int main (void) 
 {

    setlocale(LC_ALL,"portuguese");
    logo ();
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),23);
    carregar_base_d();
    carregar_d_atleta();
    carregar_calendario();
    carregar_alojamento();


    

    strcpy(usuarios[0].nome, "Rafael");
    strcpy(usuarios[0].login, "Admin");
    strcpy(usuarios[0].senha, "123456");
    while(login()==0);

    do{
       system("cls");

       printf("\n");
       printf("---------------------------------MENU PRINCIPAL---------------------------------\n");
       printf("--------------------------------------------------------------------------------\n\n");


       printf("\t-----------------------------------------------------------------\n");
       printf("\t|\t1 - CADASTRAR USUARIOS                   \t\t|\n");
       printf("\t|---------------------------------------------------------------|\n");
       printf("\t|\t2 - PESQUISAR POR USUARIOS CADASTRADOS   \t\t|\n");
       printf("\t|---------------------------------------------------------------|\n");
       printf("\t|\t3 - LISTAR TODOS OS USUARIOS CADASTRADOS \t\t|\n");
       printf("\t|---------------------------------------------------------------|\n");
       printf("\t|\t4 - CADASTRAR MEDALHA                     \t\t|\n");
       printf("\t|---------------------------------------------------------------|\n");
       printf("\t|\t5 - QUADRO DE MEDALHAS                    \t\t|\n");
       printf("\t|---------------------------------------------------------------|\n");
       printf("\t|\t6 - CALENDARIO                            \t\t|\n");
       printf("\t|---------------------------------------------------------------|\n");
       printf("\t|\t7 - ALOJAMENTO                            \t\t|\n");
       printf("\t|---------------------------------------------------------------|\n");
       printf("\t|\t8 - SAIR DO PROGRAMA                      \t\t|\n");
       printf("\t-----------------------------------------------------------------\n\n");
       printf("SELECIONE A OPCAO DESEJADA: ");
       scanf("%d", &op);
       system("cls");

            switch(op){

            case 1:
                cadastro();

                break;

            case 2:
                pesquisa();

                break;


            case 3:
                lista();

                break;
            case 4:
                carregar_d_atleta();
                input_medalhas();
                break;

            case 5:
                quadro_de_medalhas();
                break;
            case 6:
                calendario();
                break;

            case 7:
                menualojamento();
                break;

            case 8:
                system("exit");
                break;

            default:
                printf("OPCAO INVALIDA");
                break;

            }


    }while(op!=8);
    printf("--OBRIGADO POR UTILIZAR O NOSSO PROGRAMA!--\n");
    printf("-------------------------------------------\n\n");

    system("pause");
 }