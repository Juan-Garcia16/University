#include <stdio.h>
#include <math.h>

//funcion para verificar si un numero es primo bajo todas las condiciones
int esPrimo(int numero) {
    if (numero <= 1) return 0;
    if (numero <= 3) return 1;
    if (numero % 2 == 0 || numero % 3 == 0) return 0;
    for (int i = 5; i * i <= numero; i += 6) 
    {
        if (numero % i == 0 || numero % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int n = 10;
    int vec[n];

    printf("Ingrese 10 numeros uno por uno:\n");

    for (int i = 0; i < n; i++) {
        scanf("%i", &vec[i]);
    }

    int vec_pares[n];
    int max_pares = 0;
    int pos_max_pares = 0; 

    int es_primo = 0;

    for (int i = 0; i < n; i++) {
        int numero = vec[i];
        int contador_digitos_pares = 0;

        //ciclo para contar la cantidad de digitos pares en cada numero
        while (numero > 0) {
            int digito = numero % 10;

            if (digito % 2 == 0) {
                contador_digitos_pares++;
            }
            numero /= 10;
        }

        //en vec_pares se almacenan la cantidad de digitos pares por cada posición
        vec_pares[i] = contador_digitos_pares;

        //verificar si el numero es primo
        if (esPrimo(vec[i])) {
            // Si es primo, se verifica y actualiza si tiene mas digitos pares
            if (contador_digitos_pares > max_pares) {
                max_pares = contador_digitos_pares;
                pos_max_pares = i;
            }
            es_primo = 1;
        }
    }

    // Imprimir el resultado
    if (es_primo) {
        printf("El numero primo con mayor cantidad de digitos pares es %i y se encuentra en la posicion %i.\n", vec[pos_max_pares], pos_max_pares);
    } else {
        printf("No se encontraron numeros primos.\n");
    }

    return 0;
}
