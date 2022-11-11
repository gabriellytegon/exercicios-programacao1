//Inverter o texto de traz para frente

#include <stdio.h>
#include <string.h>

int main () {

    char palavra[81];
    int c;

    printf ("Digite a palavra:\n");

    fgets(palavra, 81, stdin);

    for(c=strlen(palavra)-2; c>=0; c--){
        printf("%c", palavra[c]);
    }
    
    printf("\n");
    return 0;
}