#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encriptar(char mensaje_original[], int clave) {
    char mensaje_cifrado[100];
    int longitud = strlen(mensaje_original);

    // recorrer cada caracter del mensaje original
    for (int i = 0; i < longitud; ++i) {
        char letra = mensaje_original[i];  // tomar cada letra del mensaje original

        // verifica si el caracter es alfabetico
        if (isalpha(letra)) {
            char letraMayuscula = toupper(letra); 
            int indice = letraMayuscula - 'A';  // obtener el indice de la letra en el alfabeto (0 a 25 para ingles)
            indice = (indice + clave) % 26;  // sumar la clave y ajustar con modulo 26
            mensaje_cifrado[i] = 'A' + indice;  // convertir el indice ajustado de vuelta a letra
        } else {
            mensaje_cifrado[i] = letra;  // si no es una letra, copiar el caracter tal cual (espacios, signos)
        }
    }
    mensaje_cifrado[longitud] = '\0';  // Añadir el fin de cadena al mensaje cifrado

    // mostrar el mensaje cifrado
    printf("Mensaje cifrado: %s\n", mensaje_cifrado);
}

int main() {
    char mensaje_original[100];
    int clave;

    printf("Ingrese el mensaje original: ");
    fgets(mensaje_original, 100, stdin);
    mensaje_original[strcspn(mensaje_original, "\n")] = '\0';

    printf("Ingrese la clave de cifrado (1-26): ");
    scanf("%i", &clave);

    encriptar(mensaje_original, clave);

    return 0;
}
