/*17. Leer 10 números enteros, almacenarlos en un vector y determinar cuántos números con
cantidad par de dígitos pares hay almacenados en dicho vector

Ver 5.11 septiembre 16/2024          Juan Pablo García
*/
#include <stdio.h>

int main() {
    int n = 10;
    int vec[n];

    printf("Ingrese 10 numeros uno por uno:\n");

    for (int i = 0; i < n; i++) 
    {
        scanf("%i", &vec[i]);
    }

    int cantidad_pares = 0;

    for (int i = 0; i < n; i++) {
        int numero = vec[i];
        int contador_digitos_pares = 0;

        //ciclo para contar cuantos digitos pares tiene el numero de la posicion
        while (numero > 0) {
            int digito = numero % 10;

            if (digito % 2 == 0) 
            { 
                contador_digitos_pares++;
            }

            numero /= 10;
        }

        //verificar si la cantidad de digitos pares es par
        if (contador_digitos_pares > 0 && contador_digitos_pares % 2 == 0) {
            cantidad_pares++;
        }
    }

    printf("\nHay %i numeros con una cantidad par de dígitos pares\n", cantidad_pares);

    return 0;
}
