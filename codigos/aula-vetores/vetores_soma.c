#include <stdio.h>

int main() {
    int vetor[1000] = {};
    int N, soma = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        printf("Digite o numero vetor[%d]: ", i);
        scanf("%d", &vetor[i]);

        printf("Somando o vet[%d] = %d\n", i, vetor[i]);
        soma += vetor[i];
        // soma = soma + vetor[i];
        printf("Soma: %d\n\n", soma);
        printf("---------------------\n");
    }

    return 0;
}