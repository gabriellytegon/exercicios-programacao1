//Diz se um retângulo está contido no outro

#include <stdio.h>

int main(){

    double alturaRetangulo1 = 0, baseRetangulo1 = 0, alturaRetangulo2 = 0, baseRetangulo2 = 0;

    typedef struct Ponto {
        double x;
        double y;
    } Ponto;

    struct Retangulo {
        Ponto infEsquerdo;
        Ponto supDireito;
    } retangulo1, retangulo2;

    scanf ("%lf %lf", &retangulo1.infEsquerdo.x, &retangulo1.infEsquerdo.y);
    scanf ("%lf %lf", &retangulo1.supDireito.x, &retangulo1.supDireito.y);
    scanf ("%lf %lf", &retangulo2.infEsquerdo.x, &retangulo2.infEsquerdo.y );
    scanf ("%lf %lf", &retangulo2.supDireito.x, &retangulo2.supDireito.y);

    alturaRetangulo1 = retangulo1.supDireito.y - retangulo1.infEsquerdo.y;
    baseRetangulo1 = retangulo1.supDireito.x - retangulo1.infEsquerdo.x;
    alturaRetangulo2 = retangulo2.supDireito.y - retangulo2.infEsquerdo.y;
    baseRetangulo2 = retangulo2.supDireito.x - retangulo2.infEsquerdo.x;

    if ((baseRetangulo2<=baseRetangulo1) && (alturaRetangulo2<=alturaRetangulo1)){
        printf ("o segundo retangulo esta contido no primeiro\n");
    }
    else {
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }

    return 0;    
    
}