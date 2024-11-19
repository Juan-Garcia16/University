#include <stdio.h>

int main() {
    int matriz[2][3];  // Matriz de 2 filas y 3 columnas
    int i, j;

    // Llenar la matriz
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Introduce un valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Mostrar la matriz
    printf("\nLa matriz es:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
