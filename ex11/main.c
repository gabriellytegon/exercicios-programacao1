//calcula e imprimi o cubo dos elementos dados para o vetor

#include <stdio.h>
#include <math.h>
#define N 10

void cubo (int elementos[N]){

    int vetCubo[N], aux;

    for (aux=0; aux<10; aux++){
        vetCubo [aux] = (pow(elementos[aux],3));
    } 

    for (aux=0; aux<10 ; aux++){
        printf ("%d\n", vetCubo [aux]);
    }
}

int main (){

    int vetElementos[N], contador;

    for (contador=0; contador<10; contador++){
        scanf("%d", &vetElementos[contador]);
    }

    cubo(vetElementos);

    return 0;

}