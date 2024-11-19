/*8. Se pide hacer un programa recursivo, tal que, dado un entero positivo mayor de 4 dígitos, indique si es capicúa (Capicúa es un número que se lee igual de izquierda a derecha que de derecha a izquierda Ej: 1221,
3333, 8558, 1001, 2332.

Ver 5.11 septiembre 19/2024          Juan Pablo García
*/
#include <stdio.h>
#include <stdbool.h>

bool es_capicua(int num) {
    //cuando solo queda un digito
    if (num < 10) 
    {
        return true;
    }

    //encuentra el divisor para extraer el primer digito
    int divisor = 1;
    while (num / divisor >= 10) 
    {
        divisor *= 10;
    }

    int primer_digito = num / divisor;
    int ultimo_digito = num % 10;

    if (primer_digito != ultimo_digito) 
    {
        return false;
    }

    //se encarga de eliminar el primer y ultimo digito para hacer recursion
    int nuevo_numero = (num % divisor) / 10;

    return es_capicua(nuevo_numero);
}

int main() {
    int num;

    while (true) {
        printf("Ingrese un numero entero positivo mayor de 4 digitos: ");
        scanf("%i", &num);

        if (num < 1000) 
        {  
            printf("Debe ser mayor de 4 digitos\n\n");
        } else {
            break;
        }
    }

    if (es_capicua(num)) {
        printf("%i es un numero capicua\n", num);
    } else {
        printf("%i no es un numero capicua\n", num);
    }

    return 0;
}


