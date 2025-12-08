#include <stdio.h>

int main() {
    int mat[10][10];
    int N;

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("----------------------\n");

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}