/*1-. Implementar un programa recursivo que imprima los dígitos de un número natural n, leído por teclado y mayor de 10000, en orden inverso. Por ejemplo, para n=10000 la salida debería ser 00001. 						Valor 0.5
Sin usar vectores y lectura del número completo, debe funcionar para el ejemplo.

VSC ver 1.93.1 octubre 25/2024          Juan Pablo García
*/
#include <stdio.h>

// Función recursiva para imprimir los dígitos en orden inverso
void invertir_digitos(int n) {
    if (n > 0) {
        printf("%i", n % 10); //ultimo digito
        invertir_digitos(n / 10); //actualizar el ultimo digito
    }
}

int main() {
    int n;

    printf("Ingrese un numero natural mayor que 10000: ");
    scanf("%i", &n);

    if (n > 10000) {
        invertir_digitos(n);
        printf("\n"); 
    } else {
        printf("El numero debe ser mayor que 10000\n");
    }

    return 0;
}
