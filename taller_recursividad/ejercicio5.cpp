/*5. Se pide hacer un programa tal que, dado un número entero positivo, indique si es primo (Un número es primo si y solo si es divisible exactamente por si mismo y por la unidad). Puede utilizar la función anterior que calcula la cantidad de divisores de un número.

Ver 5.11 septiembre 19/2024          Juan Pablo García
*/
#include <stdio.h>
#include <stdbool.h>

int division(int a, int b) {
    if (b > a) {
        return 0;
    } else {
        return division(a - b, b) + 1;
    }
}

int contar_divisores(int n) {
    int divisores = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (division(n, i) * i == n) 
        { //se valida si i divide a n
            divisores++;
        }
    }
    return divisores;
}

//forma booleana de verificar
bool es_primo(int n) {
    return contar_divisores(n) == 2;
}

int main() {
    int num;

    while (true)
    {
        printf("Ingrese un numero entero positivo: ");
        scanf("%i", &num);

        if (num <= 0)
        {
            printf("Debe ser un entero positivo\n\n");
        } else {
            break;
        }
        
    }
    

    if (num <= 1) {
        printf("%i no es primo.\n", num);
    } else if (es_primo(num)) {
        printf("%i es un numero primo\n", num);
    } else {
        printf("%i no es un numero primo\n", num);
    }

    return 0;
}
