#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#define SIZE 5000

char nome[SIZE][50];
char email[SIZE][50];
char modalidade [SIZE][50];
char pais[SIZE][50];
int cpf[SIZE];
int op;
int cont3;
static int linha,linha2,linhaq;
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
void base_d_atletas();
void atualizacao_d_atletas();
void carregar_d_atleta();
int input_medalhas();
void quadro_de_medalhas();
void quadro_pais();
void quadro_modalidade();
void quadro_geral();

void logo ()
 {   

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

void cadastro()
 {
    char nome2[20];
    char email2[20];
    char pais2[20];
    char modalidade2[20];
    int i, tipo;
   
    do{
        printf("\t\t-----------------------------------------------------------\n");
        printf("\t\t|      CADASTRAMENTO DE USUÁRIOS NO SISTEMA               |\n");
        printf("\t\t|-----------------------------------------------------------|\n");
        printf("\t\t|      ESCOLHA ABAIXO O TIPO DE USUÁRIOS QUE IRA CADASTRAR|\n");
        printf("\t\t|-----------------------------------------------------------|\n");
        printf("\t\t|       1 - CADASTRO DE ATLETAS                             |\n");
        printf("\t\t|-----------------------------------------------------------|\n");
        printf("\t\t|       2 - CADASTRO DE OUTROS USUÁRIOS                   |\n");
        printf("\t\t-------------------------------------------------------------\n\n");
        printf("Opção Escolhida: ");
        scanf("%d",&tipo);
        system("cls");
        switch (tipo)
        {
            case 1:
                printf("\t\t---------------------------------------------------\n");
                printf("\t\t|       CADASTRO DE ATLETAS NO SISTEMA            |\n");
                printf("\t\t---------------------------------------------------\n\n");                

                printf("Digite o Nome: ");
                scanf(" %s",&nome2);
                for(i=0;i<20; i++)
                {
                    nome[linha][i]= toupper(nome2[i]);
                }
                printf("Digite o Email: ");
                scanf("%s",&email2);
                for(i=0;i<20; i++)
                {
                    email[linha][i]= toupper(email2[i]);
                }
                printf("Digite o CPF: ");
                scanf("%d", &cpf[linha]);
                printf("Digite o pais: ");
                scanf ("%s",&pais2);
                for(i=0;i<20; i++)
                {
                    pais[linha][i]= toupper(pais2[i]);
                }
                printf("Digite a modalidade: ");
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
                printf("\t\t---------------------------------------------------\n");
                printf("\t\t|       CADASTRO DE OUTROS USUÁRIOS              |\n");
                printf("\t\t---------------------------------------------------\n\n");  

                printf("Digite o Nome: ");
                scanf(" %s",&nome2);
                for(i=0;i<20; i++)
                {
                    nome[linha][i]= toupper(nome2[i]);
                }
                printf("Digite o Email: ");
                scanf("%s",&email2);
                for(i=0;i<20; i++)
                {
                    email[linha][i]= toupper(email2[i]);
                }
                printf("Digite o CPF: ");
                scanf("%d", &cpf[linha]);
                printf("Digite o pais: ");
                scanf ("%s",&pais2);
                for(i=0;i<20; i++)
                {
                pais[linha][i]= toupper(pais2[i]);
                }
                printf("\n\n");
        
            break;

            default:
                printf("Op��o Inv�lida!\7\7");
                break;
        }

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

void pesquisa()
 {

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

void lista()
 {

    int i;

    printf("--------LISTA DE USUÁRIOS CADASTRADOS NO SISTEMA-------\n");
    printf("|-------------------------------------------------------|\n\n");

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
    getchar();
    getchar();
 }

int login ()
 {

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
        /*for(i = 0; i < 6;i++)
        {
            pontuacao[i] =0, ouro[i]=0, prata[i] =0,bronze[i] =0;
        }*/

    }

int input_medalhas()
 {
    char busca_modalidade[20],modalidade[20],busca_nome[20],nome[20];
    int medalha,y,x,i, retorno=0;
    do
    {

        printf("\t\t----------------------------------\t\t\n");
        printf("\t\t|      CADASTRO DE MEDALHAS      |\t\t\n");
        printf("\t\t----------------------------------\t\t\n\n");
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
        printf("ATLETA NAO ENCONTRADO\n");
        getch();
        retorno = 1;
    
        }
        else
        {
        printf("ATLETA ENCONTRADO\n");
        getch();
        system("cls");
        }
        switch (retorno)
        {
        case 0:
            printf("\t\t----------------------------------\t\t\n");
            printf("\t\t|      CADASTRO DE MEDALHAS      |\t\t\n");
            printf("\t\t----------------------------------\t\t\n\n");

            printf("NOME:%s\nPAIS:%s\nMODALIDADE:%s\n\n",nomeq[y],paisq[y],modalidadeq[y]);

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
      
    printf("----------------------------------------------\n");
    printf("|          CADASTRO DE MEDALHAS              |\n");
    printf("----------------------------------------------\n\n");

    printf("----------------------------------------------\n");
    printf("|1 - QUADRO DE MEDALHAS POR PAIS              |\n");
    printf("|2 - QUADRO DE MEDALHAS POR MODALIDADE        |\n");
    printf("|3 - QUADRO DE MEDALHAS GERAL                 |\n");
    printf("----------------------------------------------\n");
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
    }
    printf("---------------------------------------------\n");
    printf("1 - CONTINUAR NO QUADRO DE MEDALHAS         |\n");
    printf("2 - VOLTAR AO MENU PRINCIPAL                |\n");
    printf("---------------------------------------------\n");
    printf("SELECIONE A OPCAO DESEJADA:                   ");
    scanf("%i", &op2);
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
        printf("DIGITE A MODALIDADE:");
        scanf("%s",&aux_modalidade);
        for(i = 0; i< 20; i++)
        {
            modalidade[i] = toupper(aux_modalidade[i]);
        }
        system("cls");
        printf("--------------------------------------------------------------------------------------------\n");
        printf("|                           QUADRO DE MEDALHAS POR MODALIDADE                              | \n");
        printf("|------------------------------------------------------------------------------------------|\n");
        printf("|                                  MODALIDADE:%-45s|\n",modalidade);
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
        printf("----------------------------------\n");
        printf("1 - CONTINUAR NO QUADRO          |\n");
        printf("2 - VOLTAR AO MENU PRINCIPAL     |\n");
        printf("----------------------------------\n");
        printf("SELECIONE A OPCAO DESEJADA:");
        scanf("%i",&ret);
    } while(ret != 2);

}
void quadro_geral()
{
    int c;
        system("cls");
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

int main (void) 
 {

    setlocale(LC_ALL,"portuguese");
    logo ();
    getchar();
    carregar_base_d();
    carregar_d_atleta();


    

    strcpy(usuarios[0].nome, "Rafael");
    strcpy(usuarios[0].login, "Admin");
    strcpy(usuarios[0].senha, "123456");
    while(login()==0);

    do{
       system("cls");

       printf("-------------MENU PRINCIPAL--------------\n");
       printf("-----------------------------------------\n\n");

       printf("-------------------------------------------\n");
       printf("|1 - CADASTRAR USUÁRIOS                   |\n");
       printf("|2 - PESQUISAR POR USUÁRIOS CADASTRADOS   |\n");
       printf("|3 - LISTAR TODOS OS USUÁRIOS CADASTRADOS |\n");
       printf("|4 - CADASTRAR MEDALHA                    |\n");
       printf("|5 - QUADRO DE MEDALHAS                   |\n");
       printf("|6 - SAIR DO PROGRAMA                     |\n");
       printf("-------------------------------------------\n");
       printf("Selecione a opção desejada: ");
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
                system("exit");

                break;

            default:
                printf("Op��o Inv�lida!\7\7");
                break;

            }


    }while(op!=6);
    printf("--OBRIGADO POR UTILIZAR O NOSSO PROGRAMA!--\n");
    printf("-------------------------------------------\n\n");

    system("pause");
 }