/*4-. Escriba un programa que acepte como entrada desde teclado un número natural mayor que 10.000 y dé como salida el resultado de sumar dos a dos los dígitos que aparecen en posiciones simétricas respecto al dígito central dentro del número dado como entrada.  Sin usar vectores y lectura del número completo. 		Valor 0.6

VSC ver 1.93.1 octubre 25/2024          Juan Pablo García
*/
#include <stdio.h>


int contar_digitos(int n) {
    if (n == 0) 
    {
        return 0;
    }
    return 1 + contar_digitos(n / 10);
}

int obtener_digito(int n, int posicion) {
    while (posicion > 1) {
        n /= 10; // Reduce el numero
        posicion--;
    }
    return n % 10; // digito en la posicion deseada
}

// Función para sumar los dígitos simétricos
void suma_simetrica(int n, int num_digitos) 
{
    for (int i = 1; i <= num_digitos / 2; i++) 
    {
        int digito_izquierdo = obtener_digito(n, i);
        int digito_derecho = obtener_digito(n, num_digitos - i + 1);

        printf("%d + %d = %d\n", digito_derecho, digito_izquierdo, digito_izquierdo + digito_derecho);
    }
}

int main() {
    int n;

    printf("Ingrese un numero mayor que 10000: ");
    scanf("%i", &n);

    if (n <= 10000) {
        printf("El numero debe ser mayor que 10000.\n");
        return 1;
    }

    int num_digitos = contar_digitos(n);

    suma_simetrica(n, num_digitos);

    return 0;
}

