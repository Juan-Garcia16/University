#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encriptar(char mensaje[], char clave[]) {
    char mensaje_cifrado[100];  // arreglo para almacenar el mensaje cifrado
    int longitud_mensaje = strlen(mensaje);  // longitud del mensaje
    int longitud_clave = strlen(clave);  // longitud de la clave
    int j = 0;  // indice para recorrer la clave

    // recorrer cada caracter del mensaje
    for (int i = 0; i < longitud_mensaje; ++i) {
        char letra = mensaje[i];  // tomar cada letra del mensaje

        // verficación alfabetica
        if (isalpha(letra)) {
            char letraMayuscula = toupper(letra);  
            char letraClave = toupper(clave[j % longitud_clave]);  // Tomar la letra de la clave
            // Calcular el indice del mensaje cifrado
            char letraCifrada = 'A' + (letraMayuscula - 'A' + letraClave - 'A') % 26;  
            mensaje_cifrado[i] = letraCifrada;  // guardar la letra cifrada

            // Aumentar el indice de la clave solo si la letra del mensaje es alfabetica
            j++;  
        } else {
            mensaje_cifrado[i] = letra;  // Si no es una letra, copiar el caracter tal cual
        }
    }
    mensaje_cifrado[longitud_mensaje] = '\0';  // añadir el fin de cadena al mensaje cifrado

    printf("Mensaje cifrado: %s\n", mensaje_cifrado);
}

int main() {
    char mensaje[100];
    char clave[100];

    printf("Ingrese el mensaje a encriptar: ");
    fgets(mensaje, 100, stdin);
    mensaje[strcspn(mensaje, "\n")] = '\0';  

    printf("Ingrese la clave: ");
    fgets(clave, 100, stdin);
    clave[strcspn(clave, "\n")] = '\0';  

    encriptar(mensaje, clave);

    return 0;
}
