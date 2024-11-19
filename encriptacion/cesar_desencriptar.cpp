#include <stdio.h>
#include <string.h>
#include <ctype.h>

void descifrar(char mensaje_cifrado[]) {
    char mensaje_descifrado[100]; 
    int longitud = strlen(mensaje_cifrado);  // 

    // probar claves desde 1 hasta 26 (posibles desplazamientos en el cifrado Cesar)
    for (int clave = 1; clave <= 26; ++clave) {
        // recorrer cada caracter del mensaje cifrado
        for (int i = 0; i < longitud; ++i) {
            char letra = mensaje_cifrado[i];  // tomar cada letra del mensaje cifrado

            // verifica si el caracter es alfabetico
            if (isalpha(letra)) {
                char letraMayuscula = toupper(letra); 
                int indice = letraMayuscula - 'A';  // obtener el indice de la letra en el alfabeto (0 a 25)
                indice = (indice - clave + 26) % 26;  // restar la clave y ajustar con modulo 26 para evitar negativos
                mensaje_descifrado[i] = 'A' + indice;  // convertir el indice ajustado de vuelta a letra
            } else {
                mensaje_descifrado[i] = letra;  // si no es una letra, copiar el caracter tal cual (espacios, signos)
            }
        }
        mensaje_descifrado[longitud] = '\0';  // añadir el fin de cadena al mensaje descifrado

        // mostrar el mensaje descifrado con la clave actual
        printf("Con la clave %d: %s\n", clave, mensaje_descifrado);
    }
}

int main() {
    char mensaje_cifrado[100];

    printf("Ingrese el mensaje cifrado: ");
    fgets(mensaje_cifrado, 100, stdin);
    mensaje_cifrado[strcspn(mensaje_cifrado, "\n")] = '\0';

    descifrar(mensaje_cifrado);

    return 0;
}
