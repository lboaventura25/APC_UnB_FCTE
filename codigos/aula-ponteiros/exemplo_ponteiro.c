#include <stdio.h>

int main() {
    int i = 78;
    int *p = NULL;
    p = &i;

    *p = 56;
    printf("Endereço de i (&i): %p\n", &i);
    printf("Endereço armazenado em p (p = &i): %p\n", p);
    printf("Valor de i (i): %d\n", i);
    printf("Valor armazenado no endereço de p (*p): %d\n", *p);

    return 0;
}
