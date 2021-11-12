#include<stdio.h>

#define COL 6

void inputMedalhas (int lin, int col, int q[lin][col],int p);
//pede para o usuario inserir as medalhas do pais que está na linha p do quadro de medalhas q

void calculaPontuacao (int lin, int col, int q[lin][col],int p);
//calcula a pontuação do pais que esta na linha p do quadro de medalhas q

void ordenaPaises (int lin, int col, int q[lin][col], int colinteresse);
//ordena as linhas em ordem decrescente da coluna de interesse

void trocaLinhas (int lin, int col, int q[lin][col], int a, int b);
//troca a linha a com a linha b da matriz q

void escreveQuadro (int lin, int col, int q[lin][col]);
//escreve na tela o quadro de medalhas
char nomeDoPais [20];

int main (){

    int paises;

    printf("Digite o numero de paises a ser considerado:\n");
    scanf("%d", &paises);


    int quadro[paises][COL];

    int i;
    for(i = 0; i < paises; i++)
    {
    inputMedalhas (paises, COL, quadro, i);
    calculaPontuacao (paises, COL, quadro, i);
    }

     ordenaPaises (paises, COL, quadro, 1);

     escreveQuadro (paises, COL, quadro);
     return 0;
}



void inputMedalhas (int lin, int col, int q[lin][col],int p)
{
        q[p][0] = p+1; //armazenando o número de país

        printf("Digite o nome do pais:");
        scanf("%s",&nomeDoPais);

        printf("Digite o numero de ouros do pais %d:\n", p+1);
        scanf("%d", &q[p][3]);

        printf("Digite o numero de pratas do pais %d:\n", p+1);
        scanf("%d", &q[p][4]);

        printf("Digite o numero de bronzes do pais %d:\n", p+1);
        scanf("%d", &q[p][5]);

printf("\n");
}


void calculaPontuacao (int lin, int col, int q[lin][col],int p) {
    int pesoOuro = 5;
    int pesoPrata = 3;
    int pesoBronze = 1;

q[p][2] = pesoOuro * q[p][3] + pesoPrata * q[p][4] + pesoBronze * q[p][5];

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

    int i, j;
     printf("Quadro de medalhas ponderado: \n"); //...
     printf("nome  Pais  Pontos  Ouros  Pratas  Bronzes\n");
     for (i=0; i<lin; i++)
     {
         for(j=0; j<col; j++)
         {
             printf("%d\t", q[i][j]);
         }
         printf("\n");
     }
}
