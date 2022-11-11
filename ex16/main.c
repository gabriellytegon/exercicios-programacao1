//imprimi RA, nome e média dos alunos

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    typedef struct {
        char nome[101];
        int ra;
        float p1;
        float p2;
        float media;
    }aluno;

    int n, a;
    aluno* estudante;

    scanf("%d", &n);

    estudante = (aluno*)malloc(n * sizeof (aluno));
    getchar();

    for (a=0; a<n; a++){
        fgets(estudante[a].nome, 101, stdin);
        scanf("%d", &estudante[a].ra);
        scanf("%f", &estudante[a].p1);
        scanf("%f", &estudante[a].p2);
        getchar();
        estudante[a].media = ((estudante[a].p1 + estudante[a].p2) / 2);
    }

    for (a=0; a<n; a++){
        estudante[a].nome [strcspn(estudante[a].nome, "\n")] = '\0';
    }

    for (a=0; a<n; a++){
        printf ("%d\t%s\t%.2f\n", estudante[a].ra, estudante[a].nome, estudante[a].media);
    }
    
    return 0;
}