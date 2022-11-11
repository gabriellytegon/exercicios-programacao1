#include <stdio.h>

int main() {

    float produtos[10], valor[10], lucro = 0.0, total[10];
    int i, soma = 0;
    
    for (i=0; i<10; i++) {
        scanf("%f", &produtos[i]);
        soma += produtos[i];
    }
         
    for (i=0; i<10; i++){
        scanf("%f", &valor[i]);
    } 
    
    for (i=0; i<10; i++) {
        total[i] = produtos[i] * valor[i];
    }
    
    for (i=0; i<10; i++){
        lucro += total[i];
    }

    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", lucro , soma);

    return 0;
}