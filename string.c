#include <stdio.h>

#define DEBUG 1

int main() {

    char frase[10001], palavra_origem[41], palavra_para_substituir[41];
    int tam_frase = 0, tam_origem = 0, tam_substituir = 0;

    scanf("%[^\n]", frase); getchar();
    scanf("%[^\n]", palavra_origem); getchar();
    scanf("%[^\n]", palavra_para_substituir);

    for(;frase[tam_frase] != '\0'; tam_frase++) {}
    for(;palavra_origem[tam_origem] != '\0'; tam_origem++) {}
    for(;palavra_para_substituir[tam_substituir] != '\0'; tam_substituir++) {}

    int diff_palavras = tam_origem > tam_substituir ? tam_origem - tam_substituir : tam_substituir - tam_origem;

    DEBUG && printf("'%s' - %d\n", frase, tam_frase);
    DEBUG && printf("'%s' - %d\n", palavra_origem, tam_origem);
    DEBUG && printf("'%s' - %d\n", palavra_para_substituir, tam_substituir);
    DEBUG && printf("Diff: %d\n", diff_palavras);

    for(int i = 0, t = 0; frase[i] != '\0'; i++)
    {
        if(frase[i] == palavra_origem[t]) {
            t++;
        } else {
            t = 0;
        }

        if (t == tam_origem) {
            int w;
            DEBUG && printf("posicao onde termina a palavra encontrada: %d\n", i);

            if (tam_origem < tam_substituir) {
                printf("oioioioioio\n");
                for (w = tam_frase; w != i; w--) {
                    frase[w + diff_palavras] = frase[w];
                }
                w += diff_palavras;
                tam_frase += diff_palavras;
                DEBUG && printf("w: %d\n", w);
                DEBUG && printf("tam_frase: %d\n", tam_frase);

                for (int j = tam_substituir -1; w != i - t; w--, j--) {
                    frase[w] = palavra_para_substituir[j];
                }
            } else {
                printf("lalalala\n");
                for (w = i; w != tam_frase + 1; w++) {
                    frase[w - diff_palavras] = frase[w];
                }
                w = i - diff_palavras;
                tam_frase -= diff_palavras;
                DEBUG && printf("w: %d\n", w);
                DEBUG && printf("tam_frase: %d\n", tam_frase);
                DEBUG && printf("i: %d\n", i);
                DEBUG && printf("t: %d\n", t);
                DEBUG && printf("FRASE ANTES: '%s'\n", frase);

                for (int j = tam_substituir -1; w != i - t; w--, j--) {
                    frase[w] = palavra_para_substituir[j];
                }
            }

            DEBUG && printf("ALTEROU === '%s' - %d\n", frase, tam_frase);
            break;
        }
    }

    DEBUG && printf("'%s' - %d\n", frase, tam_frase);
    !DEBUG && printf("%s\n", frase);

    return 0;
}