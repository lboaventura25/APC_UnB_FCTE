#include <stdio.h>

struct tipoFiliacao {
    char nome[80]; 
    char nomeMae[80]; 
    char nomePai[80]; 
};

struct tipoFiliacao separaLinhaCSV(char linha[240]) {
    struct tipoFiliacao resultado;
    int v1 = -1, v2, tam, i, j;

    for(tam = 0; linha[tam] != '\0'; tam++) {
        if(linha[tam] == ',' && v1 < 0) v1 = tam;
        else if(linha[tam] == ',' && v1 >= 0) v2 = tam;
    }

    // printf("tam=%d - v1=%d - v2=%d\n\n", tam, v1, v2);

    for(i = 0; i < v1; i++) {
        resultado.nome[i] = linha[i];
    }
    resultado.nome[i] = '\0';

    for(i = 0, j = v1+1; j < v2; i++, j++) {
        resultado.nomeMae[i] = linha[j];
    }
    resultado.nomeMae[i] = '\0';

    for(i = 0, j = v2+1; j < tam; i++, j++) {
        resultado.nomePai[i] = linha[j];
    }
    resultado.nomePai[i] = '\0';

    return resultado;
}

// int main() { // v1=10 | v2=22 | tam=33
//     // char linha[240] = "Joao Silva,Maria Silva,Jose Silva";
//     char linha[240] = "Joao Silva Texeira,Maria Silva da Luz,Jose Bernardes Teixeira";

//     struct tipoFiliacao resultado = separaLinhaCSV(linha);

//     printf("NOME: (%s)\n", resultado.nome);
//     printf("MAE: (%s)\n", resultado.nomeMae);
//     printf("PAI: (%s)\n", resultado.nomePai);

//     return 0;
// }
