/*3-. Implementar un programa recursivo al que se le pase como parámetro de función un número en base 2 (binario), leído por teclado, se debe validar que no se escriban números diferentes de 0 y 1, y se debe devolver el equivalente en base 10 (decimal) y en base 8 (octal).		Valor 0.5

VSC ver 1.93.1 octubre 25/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>

// Función recursiva para validar si un número binario contiene solo 0 y 1
int es_binario_valido(char binario[], int indice) {
    if (indice >= strlen(binario)) 
    {
        return 1; // punto de parada
    }
    char digito = binario[indice];
    if (digito != '0' && digito != '1') 
    {
        return 0;
    }
    return es_binario_valido(binario, indice + 1); // Llama a la recursiva con el siguiente indice
}

int binario_a_decimal(char binario[], int longitud) {
    if (longitud == 0) 
    {
        return 0; // caso base
    }
    return (binario[longitud - 1] - '0') + 2 * binario_a_decimal(binario, longitud - 1); // convierte y acumula el resultado
}

int decimal_a_octal(int decimal) {
    if (decimal == 0) 
    {
        return 0; // Caso base
    }
    return decimal % 8 + 10 * decimal_a_octal(decimal / 8); // convierte a octal
}

int main() {
    char binario[30];

    printf("Ingrese un numero binario: ");
    scanf("%s", binario);

    if (!es_binario_valido(binario, 0)) {
        printf("El numero no es binario, solo ingrese digitos 0 y 1\n");
        return 1;
    }

    int decimal = binario_a_decimal(binario, strlen(binario)); 

    int octal = decimal_a_octal(decimal);

    printf("El numero en decimal es: %i\n", decimal);
    printf("El numero en octal es: %i\n", octal);

    return 0;
}
