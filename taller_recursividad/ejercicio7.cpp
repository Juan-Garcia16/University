/*7. Se pide hacer un programa tal que, imprima los primeros números primos después del uno ( 1) hasta el número n que le ingrese por teclado. (Ejemplo: 1 2 3 5..).

Ver 5.11 septiembre 19/2024          Juan Pablo García
*/
#include <stdio.h>
#include <stdbool.h>

//forma booleana de verificar
bool es_primo(int num) {
    if (num <= 1) 
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
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
        printf("No hay numeros primos hasta %i\n", num);
        return 0;
    }

    // Imprime los números primos desde 2 hasta n
    printf("Los numeros primos hasta %i son: ", num);
    for (int i = 2; i <= num; i++) {
        if (es_primo(i)) {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}


