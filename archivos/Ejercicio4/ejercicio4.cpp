/*Dados dos ficheros de texto “f1.txt” y “f2.txt”, en los
que cada línea es una serie de números separados por “:”,
y suponiendo que las líneas están ordenadas por el primer
número de menor a mayor en los dos ficheros, haz un
programa que lea los dos ficheros línea por línea y escriba
en el fichero “f3.txt” las líneas comunes a ambos
ficheros, como en el siguiente ejemplo:

f1.txt  
10:4543:23
15:1:234:67
17:188:22
20:111:22

f2.txt
10:334:110
12:222:222
15:881:44
20:454:313

f3.txt
10:4543:23:334:110
15:1:234:67:881:44
20:111:22:454:313

VSC ver 1.93.1 octubre 16/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>

int main() {
    FILE *f1, *f2, *f3;
    char linea1[100], linea2[100];
    char numero1[10], numero2[10];
    int i;

    f1 = fopen("f1.txt", "r");
    f2 = fopen("f2.txt", "r");
    f3 = fopen("f3.txt", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Error al abrir los archivos.\n");
        return 1;
    }

    //se leen las lineas iniciales de cada archivo
    char *ptr1 = fgets(linea1, sizeof(linea1), f1);
    char *ptr2 = fgets(linea2, sizeof(linea2), f2);

    //eliminar saltos de line \n
    if (ptr1) 
    {
        linea1[strcspn(linea1, "\n")] = 0;
    }

    if (ptr2) 
    {
        linea2[strcspn(linea2, "\n")] = 0;
    }

    // Comparamos las líneas de ambos archivos
    while (ptr1 != NULL && ptr2 != NULL) {
        //se extraeran los numeros antes de los :

        //para linea1
        i = 0;
        while (linea1[i] != ':' && linea1[i] != '\0') {
            numero1[i] = linea1[i];
            i++;
        }
        numero1[i] = '\0';  //terminar correctamente la cadena

        //para linea2
        i = 0;
        while (linea2[i] != ':' && linea2[i] != '\0') {
            numero2[i] = linea2[i];
            i++;
        }
        numero2[i] = '\0';  //terminar correctamente la cadena

        //si los numeros son iguales se concatena y se escribe en f3.txt
        if (strcmp(numero1, numero2) == 0) {
            fprintf(f3, "%s:%s\n", linea1, strchr(linea2, ':') + 1); //strchr busca el primer carácter específico en una cadena y devuelve un puntero a la primera aparición de ese carácter. Si no encuentra el carácter, devuelve NULL. El 1 sirve para saltar el : y seguir con el siguiente numero

            //se leen las siguientes lineas en ambos archivos
            ptr1 = fgets(linea1, sizeof(linea1), f1);
            ptr2 = fgets(linea2, sizeof(linea2), f2);

            if (ptr1) 
            {
                linea1[strcspn(linea1, "\n")] = 0;
            }

            if (ptr2) 
            {
                linea2[strcspn(linea2, "\n")] = 0;
            }

        } else if (strcmp(numero1, numero2) < 0) 
        {
            //si el numero de f1 es menor, se lee una nueva línea de f1
            ptr1 = fgets(linea1, sizeof(linea1), f1);

            if (ptr1) 
            {
                linea1[strcspn(linea1, "\n")] = 0;
            }
        } else {
            //si el numero de f2 es menor, leemos una nueva línea de f2
            ptr2 = fgets(linea2, sizeof(linea2), f2);

            if (ptr2) 
            {
                linea2[strcspn(linea2, "\n")] = 0;
            }
        }
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("Las líneas comunes se han guardado en 'f3.txt'.\n");
    return 0;
}

