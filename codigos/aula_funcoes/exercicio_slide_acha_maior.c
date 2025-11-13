#include <stdio.h>

int acha_maior(int vetor_func[], int tamanho_vetor) {
    int maior_numero = vetor_func[0];

    for(int i = 0; i < tamanho_vetor; i++) {
        if(maior_numero < vetor_func[i]) {
            maior_numero = vetor_func[i];
        }
    }

    return maior_numero;
}

int main() {
    int N, vetor[100];
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior = acha_maior(vetor, N);

    printf("O maior numeor do vetor eh %d\n", maior);

    return 0;
}
