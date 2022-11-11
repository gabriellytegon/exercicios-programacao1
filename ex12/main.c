#include <stdio.h>

void soma (int* real1, int* imaginario1, int real2, int imaginario2){

    *real1 = ((*real1) + real2);
    *imaginario1 = ((*imaginario1) + imaginario2);

}

void multiplicacao (int* real1, int* imaginario1, int real2, int imaginario2){

    int aux = *imaginario1;

    *imaginario1 = (((*real1) * imaginario2) + ((*imaginario1) * real2));
    *real1 = (((*real1) * real2) - ((aux) * imaginario2)); 
}

int main (){

    int real_1, real_2, imaginario_1, imaginario_2;
    char operador;

    scanf("%d %d %c %d %d", &real_1, &imaginario_1, &operador, &real_2, &imaginario_2);

    if (operador == '+'){
        soma(&real_1, &imaginario_1, real_2, imaginario_2);
        printf ("%d %c %di\n", real_1, operador, imaginario_1);
    }

    else {
        multiplicacao (&real_1, &imaginario_1, real_2, imaginario_2);
        printf ("%d %c %di\n", real_1, '+', imaginario_1);
    }

    return 0;
}