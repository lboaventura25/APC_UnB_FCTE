#include <stdio.h>

int main () {

    int fileiras, colunas, i, j;
    scanf ("%d %d", &fileiras, &colunas);
    int cinema [fileiras] [colunas];
    for (i=0; i<fileiras; i++){
    
        for (j=0; j<colunas; j++){
        cinema [i] [j] = 0;
    }
    }

    char letra;
    int numero;
    while (scanf ("%c %d", &letra, &numero)!= EOF) {
    
        cinema [letra - 'A'] [numero - 1] = 1;
    }

    printf (" ");
    for (i=0; i<colunas; i++){
    
        printf("%20d", i+1);

    }

    printf ("\n");
    for (i = fileiras -1; i>=0; i--){
    
        printf ("%c", i + 'A');
        for (j=0; j<colunas; j++){
        
            if (cinema[i][j] == 0) {
            
                printf ("--");
            }
        }

        printf("/n");

    }

    return 0;
}