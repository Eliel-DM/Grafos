#include<stdio.h>
#include<stdlib.h>

int main() {


    int MA[4][4], i, j;
    i = 0;
    while (i < 4) {
        j = 0;
        while (j < 4) {
            printf("\nEntre com o elemento MA[%d][%d]: ", i, j);
            scanf("%d", &MA[i][j]);
            j++;
        }
        i++;
    }

    i = 0;
    printf("\n\nO grafo digitado foi:\n");
    while (i < 4) {
        printf("\n| ");
        j = 0;
        while (j < 4) {
            printf("%d ", MA[i][j]);
            j++;
        }
        printf("|");
        i++;
    }

    return 0;
}
