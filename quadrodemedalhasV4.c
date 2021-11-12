#include<stdio.h>
#include<locale.h>

int QuadroMed (){

int COL;
char nomes_paises[20];

    int paises;

    printf("Digite o numero de paises a ser considerado:\n");
    scanf("%d", &paises);
    system("cls");

    int quadro[paises][COL];    
    
    int i;
    
    for(i = 0; i < paises; i++) 
    {   
        i++;
        printf("Digite o nome do pais %d:\n", i);
        scanf("%s", &nomes_paises[i]);
        i--;
        inputMedalhas (paises, COL, quadro, i);
        calculaPontuacao (paises, COL, quadro, i);
        system("cls");
    }
     
     ordenaPaises (paises, COL, quadro, 1);

     escreveQuadro (paises, COL, quadro); 
     getch();
     return 0;
}

void inputMedalhas (int lin, int col, int q[lin][col],int p) 
{
        q[p][0] = p+1; //armazenando o número de país

        printf("Digite o numero de ouros do pais %d:\n", p+1);
        scanf("%d", &q[p][2]);

        printf("Digite o numero de pratas do pais %d:\n", p+1);
        scanf("%d", &q[p][3]);
        
        printf("Digite o numero de bronzes do pais %d:\n", p+1);
        scanf("%d", &q[p][4]);

printf("\n");
}

void calculaPontuacao (int lin, int col, int q[lin][col],int p) {
    int pesoOuro = 5;
    int pesoPrata = 3;
    int pesoBronze = 1;

q[p][1] = pesoOuro * q[p][2] + pesoPrata * q[p][3] + pesoBronze * q[p][4];

}

void ordenaPaises (int lin, int col, int q[lin][col], int colinteresse)
{    
     int i, j;
     for (i = 0; i < lin; i++) 
     {
         j=i;
         while (j>0 && q[j-1][colinteresse]<q[j][colinteresse]) 
         {
             trocaLinhas (lin, col, q, j, j-1);
            j--;
         }
     }
}

void trocaLinhas (int lin, int col, int q[lin][col], int a, int b){
    int COL;
    int j;
    int aux_troca;
    for(j=0; j<COL; j++) 
    {
        aux_troca = q[a][j];
        q[a][j] = q[b][j];
        q[b][j] = aux_troca;
    }
}

void escreveQuadro (int lin, int col, int q[lin][col]) {
    
char nomes_paises[50];

    int i, j,x,y=1;
     printf("Quadro de medalhas ponderado: \n"); //...
     printf("--------------------------------------------------------------\n");
     printf("|Posicao  |Pais     |Pontos   |Ouros     |Pratas   |Bronzes  |\n");
     printf("--------------------------------------------------------------\n");
     for (i=0; i<lin; i++)
    {
        x = q[i][0];// alinhando o nome do pais com a linha
        printf("|%i        |%-9s|", y,nomes_paises[x]);
        for(j=1; j<col; j++)
        {
         printf("%d        |", q[i][j]);
        }
        printf("\n");
        printf("|------------------------------------------------------------|\n");      
        y++;
    }
}
