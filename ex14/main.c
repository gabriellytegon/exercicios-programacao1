#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int grau = 0, contador=0, l=0, j=0, m=0;
    float* coeficientes, x = 0.0;

    scanf ("%d", &grau);

    j = grau + 1;
    m = grau;

    coeficientes = (float*) malloc (j * sizeof (float));

    for (contador = m; (contador <= m) && (contador >= 0); contador--){
        scanf("%f", &coeficientes[contador]);
    }

    scanf ("%f", &x);

    float potencia [j], resultado [j], result = 0;

    while (grau>=0 && l<=m){
        potencia[l] = pow(x,grau);
        l++;
        grau--;
    }

    for (contador=0; contador<=m; contador++){
        resultado [contador] = coeficientes [contador] * potencia [contador];
    }

    for (contador=0; contador<=m; contador++){
        result += resultado [contador];
    }

    printf ("%.2f\n", result);

    free (coeficientes);
    
    return 0;

}