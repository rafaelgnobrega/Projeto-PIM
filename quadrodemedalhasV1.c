#include<stdio.h>

#define COL 5

int main (){

    int paises;

    printf("Digite o numero de paises a ser considerado:\n");
    scanf("%d", &paises);

    int quadro[paises][COL];
    
    int i;
    for(i = 0; i < paises; i++) {
        quadro[1][0] = i+1; //armazenando o número de país

        printf("Digite o numero de ouros do pais %d:\n", i+1);
        scanf("%d", &quadro[i][2]);

        printf("Digite o numero de pratas do pais %d:\n", i+1);
        scanf("%d", &quadro[i][3]);
        
        printf("Digite o numero de bronzes do pais %d:\n", i+1);
        scanf("%d", &quadro[i][4]);

        quadro[i][1] = 5 * quadro [i][2] + 3 * quadro [i][3] + quadro [i][4];
    }
     
     int j, k;
     int aux_troca;

     for (i = 0; i < paises; i++) {
         j=i;
         while (j>0 && quadro [j-1][1]<quadro[j][1]) 
         {
            for(k=0; k<COL; k++) {
                aux_troca = quadro [j-1][k];
                quadro[j-1][k] = quadro[j][k];
                quadro[j][k] = aux_troca;
            }
            j--;
         }
     }
     
     printf("Quadro de medalhas ponderado: \n");
     printf("Pais  Pontos  Ouros  Pratas  Bronzes\n");
     for (i=0; i<paises; i++)
     {
         for(j=0; j<COL; j++)
         {
             printf("%d\t", quadro[i][j]);
         }
         printf("\n");
     }
     return 0;
}