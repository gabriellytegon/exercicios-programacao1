//Quantidade de letras maiúsculas, minúsculas e digítos até a palavra FIM e a probabilidade de cada caractere

#include <stdio.h>
#include <string.h>

int main (){

    char texto [1002]; 
    int aux=0, contador=0, indice=0, quant=0;
    int vet_maiusculo [26], vet_minusculo [26], vet_numero [10];
    char vetletras_M [26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char vetletras_m [26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char vet_num [10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (aux=0; aux<1002; aux++){  
        texto[aux] = '\0';
    }

    for (aux=0; aux<26; aux++){    
        vet_maiusculo[aux] = 0;
        vet_minusculo[aux] = 0;
    }

    for (aux=0; aux<10; aux++){    
        vet_numero[aux] = 0;
    }

    while (1){
    
        fgets (texto, 1002, stdin);
        if ((texto[0]=='F') && (texto[1]=='I') && (texto[2]=='M')){
            break;
        }

        for (aux=0; aux<strlen(texto); aux++){   //rodar vetor de texto

            indice=0;

            if ((texto[aux]>=65)&& (texto[aux]<=90)){  //condição para caracteres maiúsculos
                for (contador=65; contador<=90; contador++, indice++){
                    if (texto[aux]==contador){
                        vet_maiusculo[indice]++;
                        quant++;
                    }
                }
            }

            else if((texto[aux]>=97) && (texto[aux]<=122)){   //condição para caracteres minúsculos
                for (contador=97; contador<=122; contador++, indice++){
                    if (texto[aux]==contador){
                        vet_minusculo[indice]++;
                        quant++;
                    }
                }
            }

            else if((texto[aux]>=48) && (texto[aux]<=57)){  //condição para dígitos
                for (contador=48; contador<=57; contador++, indice++){
                    if (texto[aux]==contador){
                        vet_numero[indice]++;
                        quant++;
                    }
                }
            }
        }
        
        texto[0] = '\0';  

    }

    printf("Caracteres Maiusculos:\n");  
    for (aux=0; aux<26; aux++){
        contador=0;
        printf ("%c: ", vetletras_M[aux]);
        while (contador<vet_maiusculo[aux]){
            printf ("*");
            contador++;
        }
        printf (" ");
        float probabilidade = ((float)vet_maiusculo [aux]) / quant;
        printf ("(%d - %.2f)", vet_maiusculo[aux], probabilidade);
        printf ("\n");
    }

    printf ("\n");

    printf("Caracteres Minusculos:\n"); 
    for (aux=0; aux<26; aux++){
        contador=0;
        printf ("%c: ", vetletras_m[aux]);
        while (contador<vet_minusculo[aux]){
            printf ("*");
            contador++;
        }
        printf (" ");
        float probabilidade = ((float)vet_minusculo [aux]) / quant;
        printf ("(%d - %.2f)", vet_minusculo[aux], probabilidade);
        printf ("\n");
    }

    printf("\n");

    printf("Digitos:\n");
    for (aux=0; aux<10; aux++){
        contador=0;
        printf ("%c: ", vet_num[aux]);
        while (contador<vet_numero[aux]){
            printf ("*");
            contador++;
        }
        printf (" ");
        float probabilidade = ((float)vet_numero [aux]) / quant;
        printf ("(%d - %.2f)", vet_numero[aux], probabilidade);
        printf ("\n");
    }

    return 0;
}
