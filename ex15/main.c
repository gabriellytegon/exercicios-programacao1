//imprimi se a matriz é transposta ou nao

#include <stdio.h>
#include <stdlib.h>

int main(){

    int** matriz, linhas, colunas, i=0, a=0, l=0, transposta [linhas][colunas];


    scanf ("%d %d", &linhas, &colunas);

    matriz = (int**) malloc (linhas * sizeof (int*));

    for (i=0; i<linhas; i++){
        matriz[i] = (int*) malloc (colunas * sizeof (int));
    }
    
    for (i=0; i<linhas; i++){
        for (a=0; a<colunas; a++){
            scanf ("%d", &matriz [i][a]);
        }
    }

    //transposta da matriz
    for (a=0; a<linhas; a++){
        for (i=0; i<colunas; i++){
            transposta [i][a] = matriz [a][i];
        }
    }

    for (i=0; i<linhas; i++){
        for (a=0; a<colunas; a++){
            if (matriz [i][a] == transposta [i][a]){
            break;
            }
            else {
                l++;
            }
        }
    }

    if (linhas == colunas){
        if (l!=0){
            printf("Nao eh simetrica\n");
        }
        else {
            printf("Eh simetrica\n");
        }
    }

    else {
        printf ("Nao eh simetrica\n");
    }

    for (i=0; i<linhas; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}