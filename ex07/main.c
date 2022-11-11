//calculo do IMC de uma pessoa

#include <stdio.h>
#define N 15

int main (){

    float imc = 0;

    struct Corpo {
        float altura;
        float peso;
        char nome[N];
    } corpo;

    scanf ("%f", &corpo.altura);
    scanf ("%f", &corpo.peso);
    scanf ("%s", corpo.nome);

    imc = corpo.peso / (corpo.altura * corpo.altura);

    printf ("%0.3f\n", imc);
    return 0;
}