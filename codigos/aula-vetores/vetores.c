#include <stdio.h>

int main() {
    int i = 0;
    int idades[5];

    for(i = 0; i < 5; i++) {
        scanf("%d", &idades[i]);
        printf("Vet[%d]: %d\n", i, idades[i]);
    }

    return 0;
}
