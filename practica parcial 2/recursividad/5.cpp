/*/5- Se pide hacer un programa tal que, dado un número entero positivo, indique si es primo (Un número es primo si y solo si es divisible exactamente por si mismo y por la unidad). Puede utilizar la función anterior
que calcula la cantidad de divisores de un número.
*/
#include <stdio.h>

int contar_divisores(int n, int divisor) {
    if (divisor == 1) {
        return 1; // Siempre cuenta 1 como divisor
    } else if (n % divisor == 0) {
        // Si es divisible, cuenta 1 más el siguiente divisor
        return 1 + contar_divisores(n, divisor - 1);
    } else {
        // Si no es divisible, solo cuenta los siguientes divisores
        return contar_divisores(n, divisor - 1);
    }
}

int main(){
    int num;
    
    printf("Ingrese un numero: ");
    scanf("%i", &num);

        // Contamos los divisores desde el número mismo hasta 1
    int divisores = contar_divisores(num, num);

    // Si tiene exactamente dos divisores (1 y el mismo número), es primo
    if (divisores == 2) {
        printf("%i es un número primo.\n", num);
    } else {
        printf("%i no es un número primo.\n", num);
    }

}
