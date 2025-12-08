#include <stdio.h>

// Faça um programa que leia uma dimensão N, 
// e preencha os dados de uma matrix NxN
// Depois, receba um número de coluna “k” e 
// realize e soma dos valores dessa coluna

int main() {
    int matriz[100][100];
    int N, k, soma = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("------------------------\n");

    scanf("%d", &k);

    for(int i = 0; i < N; i++) {
        soma += matriz[i][k];
    }

    printf("A soma da coluna %d eh %d\n", k, soma);

    return 0;
}