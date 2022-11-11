// Avalia se a palavra é um palindromo

#include <stdio.h>
#include <string.h>

int main (){

    char palavra [100], palavra2 [100];
    int i, a, j;

    printf ("Digite a palavra:\n");
    scanf ("%s", palavra);

    for(i=strlen(palavra)-1, j=0; (i>=0) && (j<=strlen(palavra)-1); i--, j++){
        palavra2 [j] = palavra [i];
    }
    
    for (i=0; i<=strlen (palavra)-1; i++){
        if ((palavra[i] == palavra2[i]) || (palavra[i] +32 == palavra2[i]) || (palavra[i] == palavra2[i] +32)){
            a=2;
        }
        
        else {
            printf("Esta palavra nao e um palindromo.\n");
            a=0;
            break;
        }
    }
    
    if (a!=0) {
        printf("Esta palavra e um palindromo.\n");
    }
     
    return 0;
}