#include <stdio.h>
#define N 20

int main(){

    int num_cidades, partida, destino, num_linhas, num_colunas, distancia = 0, cidade, i = 1, a = 0, valor_menor = 9999, j, contagem = 0, rota [N], matriz [N][N];

    scanf("%d", &num_cidades);
    num_linhas = num_cidades;
    num_colunas = num_cidades;

    for (int contador=0; contador<N; contador++){
        rota[contador] = -1;
    }

    /*Matriz de adjacências*/
    for (int l=0; l<num_linhas; l++){
        for (int c=0; c<num_colunas; c++){
            scanf ("%d", &matriz[l][c]);
        }
    }

    scanf("%d", &partida);
    scanf("%d", &destino);

    rota[0] = partida;

        //Analisar qual o melhor caminho
        for (int l=partida; (l<num_linhas) && (l != destino); l=cidade){
            for (int c=0; c<num_colunas;){
                while ((rota [a]!= c) && (a<num_cidades))
                    a++;                

                if (a>=num_cidades){
                    if ((matriz[l][c] <= valor_menor) && (matriz[l][c] != 0)){
                        valor_menor = matriz[l][c];
                        cidade = c;
                        c++;
                    }
                    else {
                        c++;
                    }  
                } else {
                    c++;
                }
                a = 0;
            }

            rota [i] = cidade;
            i++;
            distancia += valor_menor;
            valor_menor = 9999;
            contagem++;
            
        }
        
    /*impressão na tela:*/
    printf("Distancia total entre %d e %d: %d\n", partida, destino, distancia);
    printf("Caminho: ");
    for (j=0; j<contagem; j++){
        printf("%d->", rota[j]);
    }
    printf("%d\n", destino);

    return 0;

}