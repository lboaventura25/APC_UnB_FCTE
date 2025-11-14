#include <stdio.h>

typedef struct aluno {
    char nome[101];
    int matricula;
    float notas[3];
} Aluno;

// typedef struct aluno Aluno;

int main() {
    Aluno alunos[3];

    for(int i = 0; i < 3; i++) {
        printf("Digite os dados do aluno [%d]\n", i);
        scanf("%[^\n]", alunos[i].nome);
        getchar();
        scanf("%d", &alunos[i].matricula);
        getchar();
        alunos[i].notas[0] = 0.0;
        alunos[i].notas[1] = 0.0;
        alunos[i].notas[2] = 0.0;
    }

    for(int i = 0; i < 3; i++) {
        printf("----------------------\n[%d]\n", i);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Notas[1]: %.2f\n", alunos[i].notas[0]);
        printf("Notas[2]: %.2f\n", alunos[i].notas[1]);
        printf("Notas[3]: %.2f\n", alunos[i].notas[2]);
    }

    
    return 0;
}
