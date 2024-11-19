/*2-. Implementar un programa recursivo que devuelva true si el número que se le pasa a una función como parámetro es primo y false en caso contrario.		Valor 0.5


VSC ver 1.93.1 octubre 25/2024          Juan Pablo García
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Función recursiva auxiliar para verificar divisibilidad hasta la raíz cuadrada de n
bool es_divisible(int n, int divisor) {
    if (divisor > sqrt(n)) 
    { // si el divisor supera la raiz cuadrada es primo
        return true;
    }
    if (n % divisor == 0) 
    { // si es divisible no es primo
        return false;
    }
    return es_divisible(n, divisor + 1); // llama la funcion recursiva con el siguiente divisor
}

bool es_primo(int n) {
    if (n < 2) {
        return false;  // menores a 2 no son primos
    }
    return es_divisible(n, 2); // a partir de 2 ya que 1 divide a todo numero
}

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%i", &n);

    if (es_primo(n)) {
        printf("El %i es primo\n", n);
    } else {
        printf("El %i NO es primo\n", n);
    }

    return 0;
}
