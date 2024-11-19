#include <stdio.h>
/*
int main(){
    int a, *ptr;

    a = 5;

    ptr = &a;

    printf("valor de a = %i", *ptr);
    printf("\nDireccion de a = %p", ptr);

    return 0;
}

*/

//--------------------------------------------------

/*
Ejercicio 2: Intercambiar dos números usando punteros

Escribe un programa que intercambie los valores de dos variables usando punteros.
*/

/*
void cambiar(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(){
    int a = 5,b = 7;

    printf("numeros normlas: %i, %i", a, b);

    cambiar(&a, &b);

    printf("\ncambiados: %i, %i", a, b);
    return 0;
}
*/

//-------------------------------------

/*
Ejercicio 2: Acceder a valores a través de punteros

Declara una variable entera y un puntero que apunte a esa variable. Modifica el valor de la variable a través del puntero.

Pista: Usa el operador de desreferenciación * para acceder al valor de la variable a través del puntero.
*/

/*
int main(){
    int num = 5, *ptr;
    ptr = &num;

    printf("Variable normal: %i", *ptr);

    printf("\ncambie su valor");
    scanf("%i", ptr);

    printf("Nuevo valor: %i", *ptr);
    
    return 0;
    
}
*/
//--------------------------------------------------
/*
Ejercicio 3: Sumar valores de un array usando punteros

Crea un programa que sume los elementos de un array de enteros utilizando punteros en lugar de índices.

Pista: Recorre el array moviendo el puntero.
*/
/*
int main(){
    int vector[5] = {1,2,3,4,5};

    int *ptr = vector;

    int suma = 0;

    for (int i = 0; i < 5; i++)
    {
        suma += *ptr;
        ptr++;    
    }
    
    printf("La suma del vector es: %i", suma);
    return 0;

}
*/ 
//-------------------------------------------------------------

/*
Ejercicio 4: Manejo de cadenas de caracteres

Crea un programa que cuente el número de caracteres en una cadena (array de caracteres) utilizando punteros.

Pista: Usa el puntero para moverte a través de los caracteres de la cadena hasta encontrar el carácter nulo \0.
*/
/*
int main(){
    char cadena[30], *ptr;
    ptr = cadena;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);

    int contador = 0;

    while (*ptr != '\0')
    {
        if (*ptr != '\n')
        {
            contador++;
        }
        
        ptr++;
    }

    printf("La cantidad de caracteres son : %i", contador);
    
    return 0;
}
*/
//-----------------------------------------------

/*
Ejercicio: Invertir una cadena usando punteros

Crea un programa que invierta una cadena de caracteres ingresada por el usuario utilizando punteros. Debes modificar la cadena original sin crear otra copia.
Descripción:

    Ingresa una cadena por teclado.
    Utiliza dos punteros: uno para apuntar al inicio de la cadena y otro para apuntar al final.
    Intercambia los caracteres a los que apuntan estos punteros y avánzalos de manera que el puntero inicial avance hacia el final y el puntero final retroceda hacia el inicio.
    Cuando los dos punteros se crucen, la cadena estará invertida.
*/
/*
#include <string.h>

void invertir_cadena(char *inicio, char *final){
    char temp;

    while (inicio < final)
    {
        temp = *inicio;
        *inicio = *final;
        *final = temp;

        inicio++;
        final--;
    }
    
}

int main(){
    char cadena[50];

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0';

    char *inicio = cadena;
    char *final = cadena + strlen(cadena) -1;

    invertir_cadena(inicio, final);

    printf("\ncadena invertida: %s\n", cadena);

    return 0;
}
*/

//forma de acceder a los demas elementos de un array con punteros
//&Lista[i] -> &Lista[0] + (i * sizeof(Lista[0]))


//---------------------------------------------------------
//MEMORIA DINAMICA

/*
Ejercicio: Crear una lista dinámica de números enteros
Enunciado:

Crea un programa en C que realice lo siguiente:

    Pida al usuario cuántos números enteros quiere almacenar.
    Asigne dinámicamente memoria para almacenar esos números.
    Permita al usuario ingresar los números en la lista.
    Imprima la lista de números ingresados.
    Permita agregar más números a la lista:
        Primero, preguntará cuántos números adicionales se desea agregar.
        Luego, ajustará el tamaño de la lista dinámicamente para agregar esos nuevos números.
    Imprima la lista final con los números originales y los nuevos números agregados.
    Finalmente, libere la memoria reservada.

Requisitos:

    Utiliza las funciones de reserva dinámica de memoria (malloc, realloc, y free).
    Verifica que la asignación de memoria sea exitosa.
*/

/*
#include <stdlib.h>

int main(){
    int n;

    printf("Cuantos numeros deseas almacenar?: ");
    scanf("%i", &n);

    int *arr = (int*) malloc(n*sizeof(int));

    printf("Ingrese los %i valores uno a uno: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }

    printf("Numeros almacenados: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }

    int adicion;
    printf("\nCuantos numeros adicionales desea agregar?: ");
    scanf("%i", &adicion);

    arr = (int*) realloc(arr, (n + adicion)*sizeof(int));

    printf("\nIntroduce los %i numeros adicionales: \n", adicion);
    for (int i = n; i < n + adicion; i++)
    {
        scanf("%i", &arr[i]);
    }

    printf("La nueva actualizada es: ");
    for (int i = 0; i < n + adicion; i++)
    {
        printf("%i ", arr[i]);
    }

    free(arr);

    return 0;
}
*/

#include <stdio.h>

int main() {
    printf("Tamaño de char: %lu bytes\n", sizeof(char));
    printf("Tamaño de int: %lu bytes\n", sizeof(int));
    printf("Tamaño de short: %lu bytes\n", sizeof(short));
    printf("Tamaño de long: %lu bytes\n", sizeof(long));
    printf("Tamaño de long long: %lu bytes\n", sizeof(long long));
    printf("Tamaño de float: %lu bytes\n", sizeof(float));
    printf("Tamaño de double: %lu bytes\n", sizeof(double));
    printf("Tamaño de long double: %lu bytes\n", sizeof(long double));
    printf("Tamaño de bool: %lu bytes\n", sizeof(bool)); // _Bool es el tipo bool en C
    printf("Tamaño de un puntero: %lu bytes\n", sizeof(void*));

    return 0;
}
