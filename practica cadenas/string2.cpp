/*Confeccionar un programa que pida ingresar el nombre de usuario y clave en dos
string. Mostrar un mensaje "Correcto" si se ingresa como clave la cadena "abc123"*/

#include <stdio.h>
#include <string.h>

int main(){
    char correcta[] = "abc123";
    char name[20];
    char contrasena[20];

    printf("Ingrese su nombre de usuario: ");
    scanf("%19s", name);
    printf("Ingrese su clave: ");
    scanf("%19s", contrasena);

    if (strcmp(contrasena, correcta) == 0)
    {
        printf("La contraseña es correcta");
    } else {
        printf("ERROR");
    }
    return 0;
    
}