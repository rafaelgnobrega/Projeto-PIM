#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define SIZE 200

char nome[SIZE][50];
char email[SIZE][50];
char modalidade [50];
char pais[SIZE][50];
int cpf[SIZE];
int op;
static int linha;

typedef struct{

    char nome[50];
    char login[20];
    char senha[16];
} Usuario;  
Usuario usuarios[10];

void logo ();
void cadastro();
void pesquisa();
void lista();
int login();
void carregar_base_d();
void Atualizacao_base_d();

void logo (){

    printf("\n");
    system("color 7");
    printf("\n\t########     ###    ########  ####  ######      #######    #####    #######  ##\n");
    printf("\t##     ##   ## ##   ##     ##  ##  ##    ##    ##     ##  ##   ##  ##     ## ##    ## \n");
    printf("\t##     ##  ##   ##  ##     ##  ##  ##                 ## ##     ##        ## ##    ##\n");
    printf("\t########  ##     ## ########   ##   ######      #######  ##     ##  #######  ##    ##\n");
    printf("\t##        ######### ##   ##    ##        ##    ##        ##     ## ##        ######### \n");
    printf("\t##        ##     ## ##    ##   ##  ##    ##    ##         ##   ##  ##              ##  \n");
    printf("\t##        ##     ## ##     ## ####  ######     #########   #####   #########       ##  \n");


}

void cadastro(){

    do{
        printf("--------CADASTRAMENTO DE USU�RIOS NO SISTEMA--------\n");
        printf("|----------------------------------------------------|\n\n");

        printf("Digite o Nome: ");
        scanf(" %s", nome[linha]);
        printf("Digite o Email: ");
        scanf("%s", email[linha]);
        printf("Digite o CPF: ");
        scanf("%d", &cpf[linha]);
        printf("Digite o pais: ");
        scanf ("%s", &pais[linha]);
        printf("\n\n");
        

        printf("-------------------------------\n");
        printf("1 - Continuar o Cadastramento   |\n");
        printf("2 - Voltar ao menu principal    |\n");
        printf("-------------------------------\n");
        printf("Op��o Escolhida: ");
        scanf("%d", &op);
        Atualizacao_base_d();
        
        ++linha;
        system("cls");

    }while(op == 1);



}

void pesquisa(){

    int pesquisacpf;
    char pesquisaemail[SIZE];
    char pesquisaPais;
    int i;

    do{
        printf("--------PESQUISA DE CADASTROS-------\n");
        printf("------------------------------------\n\n");

        printf("1 - Pesquisar por CPF\n");
        printf("2 - Pesquisar por Email\n\n");
        printf("3 - Pesquisar por pais\n\n");
        printf("Op��o desejada: ");
        scanf("%d", &op);
        system("cls");
            switch(op){

            case 1:
                printf("-------PESQUISA POR CPF-------\n");
                printf("------------------------------\n\n");

                printf("Por favor, digite o CPF desejado: ");
                scanf("%d", &pesquisacpf);
                printf("\n\n");

                printf("--RESULTADO DA PESQUISA--\n");
                printf("-------------------------\n\n");

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
                printf("-------PESQUISA POR EMAIL-------\n");
                printf("-------------------------------\n\n");

                printf("Por favor, digite o Email desejado: ");
                scanf("%s",pesquisaemail);
                printf("\n\n");

                printf("--RESULTADO DA PESQUISA--\n");
                printf("-------------------------\n\n");

                for(i=0; i<SIZE; ++i){
                    if (strcmp(email[i], pesquisaemail)==0){

                        printf("Nome: %s\n", nome[i]);
                        printf("Email: %s\n",email[i]);
                        printf("CPF: %d\n", cpf[i]);
                        printf("Pais: %s\n", pais[i]);
                        printf("\n\n");
                    }

                     case 3:
                printf("-------PESQUISA POR Pa�s-------\n");
                printf("-------------------------------\n\n");

                printf("Por favor, digite o pa�s desejado: ");
                scanf("%s",pesquisaPais);
                printf("\n\n");

                printf("--RESULTADO DA PESQUISA--\n");
                printf("-------------------------\n\n");

                for(i=0; i<SIZE; ++i){
                    if (strcmp(pais[i], pesquisaPais)==0){

                        printf("Nome: %s\n", nome[i]);
                        printf("Email: %s\n",email[i]);
                        printf("CPF: %d\n", cpf[i]);
                        printf("Pais: %s\n", pais[i]);
                        printf("\n\n");
                    }
                }
                }

                break;
            default:
                printf("Op��o Inv�lida!");

                break;

            }
            printf("--------------------------------\n");
            printf("1 - Continuar a pesquisa         |\n");
            printf("2 - Voltar ao menu principal     |\n");
            printf("--------------------------------\n");
            printf("Selecione a op��o desejada: ");
            scanf("%d", &op);
    }while(op == 1);



    }


void lista(){

    int i;

    printf("--------LISTA DE USU�RIOS CADASTRADOS NO SISTEMA-------\n");
    printf("|-------------------------------------------------------|\n\n");

    for(i=0; i<SIZE; ++i){
        if (cpf[i]>0){

         printf("------------------------------------\n");
         printf("Nome: %s\n", nome[i]);
         printf("Email: %s\n",email[i]);
         printf("CPF: %d\n", cpf[i]);
         printf("pais: %s\n",pais[i]);
         printf("-------------------------------------\n");
         printf("\n\n");

        }
    }
    getchar();
    getchar();
}

int login (){

    system("cls");

    char login[20], senha[16];
    int i=0;
    int s=0; // variavel auxiliadora de armazenamento da senha.
    char c; // variavel para pegar um caracter por vez da senha

    printf("------LOGIN DO PROGRAMA------\n");
    printf("-----------------------------\n\n");

    printf("Digite o login: ");
    gets(login);
    printf("Digite a senha: ");
    while ((c=getch())!=13)// esse laço vai ate o usarior digitar a tecla enter
    {
        
        senha[s]=c; // esta colocando um caractere por vez na variavel.
        printf("*"); // essa * mostra na tela no lugar da senha.
        s++;
    }
    senha[s]='\0'; // finalizando a senha


        for(i=0; i<2; ++i){

            if(strcmp(usuarios[i].login, login)==0 && strcmp(usuarios[i].senha, senha)==0){
                return 1;
            }

        }
        printf("\n\n");
        printf("---------------------------------------------\n");
        printf("|Login incorreto!\7\7 Por favor, tente novamente. |\n");
        printf("---------------------------------------------\n\n");

        system("pause");
        return 0;

}

void carregar_base_d(){
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
    fscanf(banco_d,"%s %s %i %s",&nome[linha],&email[linha],&cpf[linha],&pais[linha]);
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
    fprintf(banco_d,"%s %s %i %s\n",nome[linha],email[linha],cpf[linha],pais[linha]);
    fclose(banco_d);
}

int main (void){

    logo ();
    getchar();
    carregar_base_d();


    setlocale(LC_ALL,"portuguese");

    strcpy(usuarios[0].nome, "Rafael");
    strcpy(usuarios[0].login, "Admin");
    strcpy(usuarios[0].senha, "123456");
    while(login()==0);

    do{
       system("cls");

       printf("-------------MENU PRINCIPAL--------------\n");
       printf("-----------------------------------------\n\n");

       printf("-----------------------------------------\n");
       printf("|1 - CADASTRAR USU�RIOS                   |\n");
       printf("|2 - PESQUISAR POR USU�RIOS CADASTRADOS   |\n");
       printf("|3 - LISTAR TODOS OS USU�RIOS CADASTRADOS |\n");
       printf("|4 - SAIR DO PROGRAMA                     |\n");
       printf("-----------------------------------------\n");
       printf("Selecione a op��o desejada: ");
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
                system("exit");

                break;

            default:
                printf("Op��o Inv�lida!\7\7");
                break;

            }


    }while(op!=4);
    printf("--OBRIGADO POR UTILIZAR O NOSSO PROGRAMA!--\n");
    printf("-------------------------------------------\n\n");

system("pause");
}