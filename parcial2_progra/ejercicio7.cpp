/*7-. Realizar un programa que calcule para una matriz cuadrada, los siguientes puntos:  
(Valor 0.8)

a)-. Verificar que las filas y columnas son iguales; si lo son entonces realizar las operaciones propuestas, en caso contrario sacar el error correspondiente.

b)-. Hallar la sumatoria de todos los valores ingresados por teclado o generados aleatoriamente.

c)-. Hallar la sumatoria de todos los valores de la DIAGONAL PRINCIPAL, y la sumatoria de los valores de la DIAGONAL SECUNDARIA.

d)-. Hallar la sumatoria de todos los valores de la TRIANGULAR SUPERIOR y la sumatoria de la TRIANGULAR INFERIOR.


VSC ver 1.93.1 octubre 25/2024          Juan Pablo García
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[10][10]; //soluciona el punt a
    int n; // tamaño de la matriz
    int suma_total = 0;
    int suma_diag_principal = 0;
    int suma_diag_secundaria = 0;
    int suma_triangular_superior = 0;
    int suma_triangular_inferior = 0;

    printf("Ingrese el tamano de la matriz (1 a 10): ");
    scanf("%i", &n);

    // Verificar que el tamaño es valido
    if (n < 1 || n > 10) {
        printf("Tamano no valido, debe ser entre 1 y 10\n");
        return 1;
    }

    // Llenar la matriz con valores aleatorios 
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 10; 
            printf("%i ", matriz[i][j]); 
            suma_total += matriz[i][j];
        }
        printf("\n");
    }

    // Calcular sumas de las diagonales
    for (int i = 0; i < n; i++) {
        suma_diag_principal += matriz[i][i]; // Sumar diagonal principal
        suma_diag_secundaria += matriz[i][n - 1 - i]; // Sumar diagonal secundaria
    }

    // Calcular sumas de las partes triangulares
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                suma_triangular_superior += matriz[i][j]; // Sumar triangular superior
            }
            if (j < i) {
                suma_triangular_inferior += matriz[i][j]; // Sumar triangular inferior
            }
        }
    }

    // Imprimir resultados
    printf("\nSumatoria total: %d\n", suma_total);
    printf("Sumatoria diagonal principal: %d\n", suma_diag_principal);
    printf("Sumatoria diagonal secundaria: %d\n", suma_diag_secundaria);
    printf("Sumatoria triangular superior: %d\n", suma_triangular_superior);
    printf("Sumatoria triangular inferior: %d\n", suma_triangular_inferior);

    return 0;
}
