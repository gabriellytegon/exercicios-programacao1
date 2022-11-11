#include <stdio.h>

int main() {

    char vetor1[13], vetor2[13];
    int aux=0, d=0, vezes;

    //quantidade de pares que serão analisados.
    scanf ("%d", &vezes);

    for (; vezes>0; vezes--){
    
        d=0;
        
        scanf("%s", vetor1);
        scanf("%s", vetor2);

         //Ordenar vetores.
        for (int j=11; j>0; j--) {
            for (int i=0; i<j; i++){
                if (vetor1[i]>vetor1[i+1]) {
                    aux = vetor1[i];
                    vetor1[i] = vetor1[i+1];
                    vetor1[i+1] = aux;
                }
            }
        }

        for (int j=11; j>0; j--){
            for (int i=0; i<j; i++){
                if (vetor2[i]>vetor2[i+1]) {
                    aux = vetor2[i];
                    vetor2[i] = vetor2[i+1];
                    vetor2[i+1] = aux; 
                }
            }
        }

        //Comparar vetores
        for (int i=0; i<12; i++){
            if (vetor1[i]!=vetor2[i]) {
                d = 2;
                break;
            }
        }

        if (d==2) {
            printf("Caracteristicas Diferentes\n");
        } else {
            printf("Caracteristicas Iguais\n");
        }    
    }
    
    return 0;
}