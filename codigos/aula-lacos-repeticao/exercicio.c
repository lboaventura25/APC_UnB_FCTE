#include <stdio.h>

int main() {
    int N, i = 0, a, b, soma;
    scanf("%d", &N);

    // while(i < N) {
    //     scanf("%d %d", &a, &b);
    //     soma = a + b;
    //     printf("Soma = %d\n", soma);
    //     i++;
    // }
    
    for(i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        soma = a + b;
        printf("Soma = %d\n", soma);
    }

    return 0;
}