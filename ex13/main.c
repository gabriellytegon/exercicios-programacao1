//Imprimi o maior e o menor valor de uma sequência de elementos dados

#include <stdio.h>

int numeroMenor = 0, numeroMaior = 0, qntdNumeros;

void menorMaior (int vetor[qntdNumeros]){

    int aux;

    for (aux=0; aux<qntdNumeros; aux++){

        if (aux==0){
            numeroMenor = vetor [aux];
            numeroMaior = vetor [aux];
        }

        else {
            if (vetor [aux] < numeroMenor){
                numeroMenor = vetor [aux];
            }
            else if (vetor [aux] > numeroMaior){
                numeroMaior = vetor [aux];
            }
        }
    }
}

int main (){

    scanf("%d", &qntdNumeros);
    int vet [qntdNumeros], contador;
    
    for (contador=0; contador<qntdNumeros; contador++){
        scanf ("%d", &vet [contador]);
    }

    menorMaior (vet);

    printf ("maior valor: %d\n", numeroMaior);
    printf ("menor valor: %d\n", numeroMenor);

    return 0;
}