#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función para el Cifrado César (tanto para encriptar como desencriptar)
void cifrado_cesar(char *mensaje, int desplazamiento, int encriptar) {
    char letra;
    int i = 0;
    while (mensaje[i]) {
        letra = mensaje[i];
        if (isalpha(letra)) {
            char base = isupper(letra) ? 'A' : 'a';
            if (encriptar)
                letra = (letra - base + desplazamiento) % 26 + base;
            else
                letra = (letra - base - desplazamiento + 26) % 26 + base;
        }
        mensaje[i] = letra;
        i++;
    }
}

// Función para el Cifrado XOR
void cifrado_xor(char *mensaje, char clave) {
    int i = 0;
    while (mensaje[i]) {
        mensaje[i] ^= clave;
        i++;
    }
}

// Probar todas las combinaciones de Cifrado César + César
void probar_cesar_combinaciones(char *mensaje) {
    char mensaje_temp[100];
    for (int d1 = 1; d1 <= 25; ++d1) {
        strcpy(mensaje_temp, mensaje);
        cifrado_cesar(mensaje_temp, d1, 0); // Primer descifrado con César
        for (int d2 = 1; d2 <= 25; ++d2) {
            char mensaje_doble[100];
            strcpy(mensaje_doble, mensaje_temp);
            cifrado_cesar(mensaje_doble, d2, 0); // Segundo descifrado con César
            printf("César %d + César %d: %s\n", d1, d2, mensaje_doble);
        }
    }
}

// Probar todas las combinaciones de Cifrado XOR + XOR
void probar_xor_combinaciones(char *mensaje) {
    char mensaje_temp[100];
    for (int clave1 = 1; clave1 <= 255; ++clave1) {
        strcpy(mensaje_temp, mensaje);
        cifrado_xor(mensaje_temp, clave1); // Primer descifrado con XOR
        for (int clave2 = 1; clave2 <= 255; ++clave2) {
            char mensaje_doble[100];
            strcpy(mensaje_doble, mensaje_temp);
            cifrado_xor(mensaje_doble, clave2); // Segundo descifrado con XOR
            printf("XOR %d + XOR %d: %s\n", clave1, clave2, mensaje_doble);
        }
    }
}

// Probar combinaciones de Cifrado César + XOR
void probar_cesar_xor(char *mensaje) {
    char mensaje_temp[100];
    for (int d = 1; d <= 25; ++d) {
        strcpy(mensaje_temp, mensaje);
        cifrado_cesar(mensaje_temp, d, 0); // Descifrar con César
        for (int clave = 1; clave <= 255; ++clave) {
            char mensaje_doble[100];
            strcpy(mensaje_doble, mensaje_temp);
            cifrado_xor(mensaje_doble, clave); // Descifrar con XOR
            printf("César %d + XOR %d: %s\n", d, clave, mensaje_doble);
        }
    }
}

int main() {
    char mensaje[] = "40UQ XE2COOD ZUTG-M-J"; // Mensaje encriptado

    printf("Probando combinaciones César + César:\n");
    probar_cesar_combinaciones(mensaje);
    
    printf("\nProbando combinaciones XOR + XOR:\n");
    probar_xor_combinaciones(mensaje);

    printf("\nProbando combinaciones César + XOR:\n");
    probar_cesar_xor(mensaje);

    return 0;
}



/*40UQ XE2COOD ZUTG-M-J*/