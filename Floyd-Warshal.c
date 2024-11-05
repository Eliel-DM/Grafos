#include<stdlib.h>
#include<stdio.h>


 int matrizFuncPosicoesPadroes(int linhas, int colunas, int MA[linhas][colunas]) {
    int i, j;
    int matrizTemp[linhas][colunas];
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (i == j) {
                matrizTemp[i][j] = MA[i][j];
            } 
        }
    }
}

void getMatriz(int linhas, int colunas, int MA[linhas][colunas]) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("\nEntre com o elemento MA[%d][%d]: ", i, j);
            scanf("%d", &MA[i][j]);
        }
    }
}

void mostrarMatriz(int linhas, int colunas, int MA[linhas][colunas]) {
    int i, j;
    printf("\n\nO grafo digitado foi:\n");
    for (i = 0; i < linhas; i++) {
        printf("| ");
        for (j = 0; j < colunas; j++) {
            printf("%d ", MA[i][j]);
        }
        printf("|\n");
    }
}

int main (){
   int MA[3][3];

    getMatriz(3,3,MA);
    mostrarMatriz(3,3,MA);  
    matrizFuncPosicoesPadroes(3,3,MA);
    return 0;
}