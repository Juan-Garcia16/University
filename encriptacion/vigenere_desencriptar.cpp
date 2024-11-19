#include <stdio.h>
#include <string.h>
#include <ctype.h>

void descifrar(char mensaje_cifrado[], char clave[]) {
    char mensaje_descifrado[100];  // arreglo para almacenar el mensaje descifrado
    int longitud_mensaje = strlen(mensaje_cifrado);  // longitud del mensaje cifrado
    int longitud_clave = strlen(clave);  // longitud de la clave
    int j = 0;  // indice para recorrer la clave

    // eecorrer cada carácter del mensaje cifrado
    for (int i = 0; i < longitud_mensaje; ++i) {
        char letra = mensaje_cifrado[i];  // tomar cada letra del mensaje cifrado

        // verificación alfabetica
        if (isalpha(letra)) {
            char letraMayuscula = toupper(letra);  
            char letraClave = toupper(clave[j % longitud_clave]);  // tomar la letra de la clave
            // calcular el indice del mensaje descifrado
            char letraDescifrada = 'A' + (letraMayuscula - letraClave + 26) % 26;  
            mensaje_descifrado[i] = letraDescifrada;  // guardar la letra descifrada

            j++;  
        } else {
            mensaje_descifrado[i] = letra;  // si no es una letra, copiar el carácter tal cual
        }
    }
    mensaje_descifrado[longitud_mensaje] = '\0';  

    printf("Mensaje descifrado: %s\n", mensaje_descifrado);
}

int main() {
    char mensaje_cifrado[100];
    char clave[100];

    printf("Ingrese el mensaje cifrado: ");
    fgets(mensaje_cifrado, 100, stdin);
    mensaje_cifrado[strcspn(mensaje_cifrado, "\n")] = '\0'; 

    printf("Ingrese la clave: ");
    fgets(clave, 100, stdin);
    clave[strcspn(clave, "\n")] = '\0';  

    descifrar(mensaje_cifrado, clave);

    return 0;
}
