#include <stdio.h>
#include <math.h>

int main(){

    struct Ponto {
        double x;
        double y;
    } ponto1, ponto2;

    scanf ("%lf %lf", &ponto1.x, &ponto1.y);
    scanf ("%lf %lf", &ponto2.x, &ponto2.y);

    double euclidiana;

    euclidiana = sqrt ((pow(ponto1.x - ponto2.x, 2)) + (pow(ponto1.y - ponto2.y, 2)));

    if (euclidiana < 0.0000001){
        printf("os pontos sao iguais\n");
    }
    else {
        printf ("os pontos nao sao iguais\n");
    }

    return 0;
}