//calculo de nota

#include <stdio.h>
#include <math.h>

float media (float nota1, float nota2, char letra);

int main (){

    float nota_1;
    float nota_2;
    char caractere;

    scanf("%c %f %f", &caractere, &nota_1, &nota_2);
    printf("%.3f\n", media(nota_1, nota_2, caractere));
    return 0;

}

float media (float nota1, float nota2, char letra){

    if (letra == 'A') {
        return ((nota1 + nota2)/2);
    }

    else {
        return (sqrt (nota1 * nota2));
    }
}