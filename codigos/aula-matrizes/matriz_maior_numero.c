#include <stdio.h>

// Faça um programa que possui uma matriz 3 x 3 inicializada 
// com as chaves e imprima o maior número da matriz

int main() {
    int mat[3][3] = {{20, -45, 67}, {-3, 63, 432}, {4235, -4234, 543}};
    int maior = mat[0][0];
    int menor = mat[0][0];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(mat[i][j] > maior) {
                maior = mat[i][j];
                // printf("Maior numero eh %d\n", maior);
            }
            if(mat[i][j] < menor) {
                menor = mat[i][j];
            }
        }
    }

    printf("Maior numero eh %d\n", maior);
    printf("Menor numero eh %d\n", menor);

    return 0;
}