#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define SIZE 200

char nome[SIZE][50];
char email[SIZE][50];
char modalidade [50];
char pais[50];
int cpf[SIZE];
int op;

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


int main (void){

    logo ();
    getchar();



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
       printf("|1 - CADASTRAR USUARIOS                   |\n");
       printf("|2 - PESQUISAR POR USUARIOS CADASTRADOS   |\n");
       printf("|3 - LISTAR TODOS OS USUARIOS CADASTRADOS |\n");
       printf("|4 - SAIR DO PROGRAMA                     |\n");
       printf("-----------------------------------------\n");
       printf("Selecione a opcao desejada: ");
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
                printf("Opcao Invalida!\7\7");
                break;

            }


    }while(op!=4);
    printf("--OBRIGADO POR UTILIZAR O NOSSO PROGRAMA!--\n");
    printf("-------------------------------------------\n\n");

system("pause");
}

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

    static int linha;

    do{
        printf("--------CADASTRAMENTO DE USUARIOS NO SISTEMA--------\n");
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
        printf("Opcao Escolhida: ");
        scanf("%d", &op);

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
        printf("Opcao desejada: ");
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
                printf("-------PESQUISA POR Pais-------\n");
                printf("-------------------------------\n\n");

                printf("Por favor, digite o pais desejado: ");
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
                printf("Opcao Invalida!");

                break;

            }
            printf("--------------------------------\n");
            printf("1 - Continuar a pesquisa         |\n");
            printf("2 - Voltar ao menu principal     |\n");
            printf("--------------------------------\n");
            printf("Selecione a opcao desejada: ");
            scanf("%d", &op);
    }while(op == 1);



    }


void lista(){

    int i;

    printf("--------LISTA DE USUARIOS CADASTRADOS NO SISTEMA-------\n");
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
