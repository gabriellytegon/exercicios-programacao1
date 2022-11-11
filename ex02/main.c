//Transformar a matriz em matriz transposta

#include <stdio.h>
#define N 20

int main () {

    int matriz[N][N], numLinhas, numColunas, c, l;

    printf ("Digite o número de linhas:\n");
    scanf ("%d", &numLinhas);
    printf ("Digite o número de colunas:\n");
    scanf ("%d", &numColunas);

    printf ("Digite os valores da matriz:\n");

    for (l=0; l<numLinhas; l++){
        for (c=0; c<numColunas; c++){
            scanf ("%d", &matriz[l][c]);
        }
    }

    for (c=0; c<numColunas; c++){
        for (l=0; l<numLinhas; l++){
            printf("%d ", matriz[l][c]);
        }

    printf("\n");
    }

    return 0;
}