#include <stdio.h>

// Faça um programa que leia o número de linhas N e 
// número de colunas M, e preencha os dados de uma matrix NxM
/*
[1, 2]
[3, 4]
[5, 6]
*/
int main() {
    int matriz[100][10];
    int N, M;
    
    scanf("%d %d", &N, &M);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("-----------------\n");

    for(int j = 0; j < M; j++) {
        for(int i = 0; i < N; i++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}