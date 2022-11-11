//calculadora

#include <stdio.h>
#include <math.h>

float soma (float numero_1, float numero_2){
    return numero_1 + numero_2;
}

float subtracao (float numero_1, float numero_2){
    return numero_1 - numero_2;
}

float multiplicacao (float numero_1, float numero_2){
    return numero_1 * numero_2;
}

float divisao (float numero_1, float numero_2){
    return numero_1 / numero_2;
}

float potencia (float numero_1, float numero_2){
    return (pow(numero_1,numero_2));
}

int main (){

    float numero1;
    float numero2;
    char operador;

    scanf("%f %c %f", &numero1, &operador, &numero2);

    switch (operador)
    {
    case '+' :
        printf("%.3f\n", soma (numero1, numero2));
        break;
    case '-' :
        printf("%.3f\n", subtracao (numero1, numero2));
        break;
    case '*' :
        printf("%.3f\n", multiplicacao (numero1, numero2));
        break;
    case '/' :
        printf("%.3f\n", divisao (numero1, numero2));
        break;
    case '^' :
        printf("%.3f\n", potencia (numero1, numero2));
        break;
    default:
        printf ("Operador inválido\n");
        break;
    }

    return 0;
}

