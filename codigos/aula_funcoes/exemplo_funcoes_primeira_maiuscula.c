#include <stdio.h>

int CONT = 0;

char primeira_maiuscula(char X[]) {
    printf("End. str (funcao): %p - '%s'\n", &X, X);
    for(int i = 0; X[i] != '\0'; i++) {
        if(X[i] >= 'A' && X[i] <= 'Z') {
            return X[i];
        }
    }
    CONT += 10;
    printf("CONT (funcao)=%d\n", CONT);

    return '\0';
}

int main() {
    printf("CONT (main)=%d\n", CONT);
    char str[250];
    char letra;
    scanf("%s", str);
    printf("End. str (main): %p - '%s'\n", &str, str);
    letra = primeira_maiuscula(str);
    printf("A primeira letra maiuscula eh '%c'\n", letra);
    printf("CONT (main)=%d\n", CONT);
    return 0;
}
