//calculo do volume de uma esfera

#include <stdio.h>
#include <math.h>

double volumeEsfera (double r){

    double volume = 0.0;

    //volume de uma esfera = (4 * 3.14159 * (raio ^ 3)) / 3
    volume = (4 * 3.14159 * (pow(r, 3)))/3; 

    return volume;

}

int main() {

    double raio;
    scanf("%lf", &raio);
    printf ("%.2lf\n", volumeEsfera(raio));
    return 0;

}