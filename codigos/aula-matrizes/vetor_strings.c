#include <stdio.h>

// Faça um programa que leia N strings e 
// as imprima na ordem inversa

int main() {
    char vet_str[10][101];

    for(int i = 0; i < 10; i++) {
        scanf("%[^\n]", vet_str[i]);
        getchar();
    }

    for(int i = 10 - 1; i >= 0; i--) {
        printf("String[%d]: '%s'\n", i, vet_str[i]);
    }

    return 0;
}