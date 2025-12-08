#include <stdio.h>

void imprime_mensagem(int A) {
    A = A + 100;
    printf("Mensagem dentro da funcao (%d)\n", A);
}

int main() {
    int A = 0;
    printf("ANTES da funcao = %d\n", A);
    imprime_mensagem(A);
    printf("DEPOIS da funcao = %d\n", A);
    return 0;
}
