/*7. Leer 10 números enteros, almacenarlos en un vector. Luego leer un entero y determinar cuántos números de los almacenados en el vector terminan en el mismo dígito que el último valor leído

Ver 5.11 septiembre 16/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    int n = 10;
    int vec[n];

    printf("Ingrese 10 numeros uno por uno: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &vec[i]);
    }
    
    int vec_digitos[n];
    //se llena un vector con los ultimos digitos de lo numeros ingresados en el primer vector
    for (int i = 0; i < n; i++)
    {
        vec_digitos[i] = vec[i] % 10;
    }

    int entero;
    int entero_digito;
    printf("\nIngrese un numero entero: ");
    scanf("%i", &entero);
    //se calcula el ultimo digito de un numero ingresado
    entero_digito = entero % 10;

    int contador = 0;

    //se compara posicion por posicion si lo digitos son iguales para aumentar un contador
    for (int i = 0; i < n; i++)
    {
        if (entero_digito == vec_digitos[i])
        {
            contador++;
        }   
    }

    printf("Hay %i numeros que terminan en %i\n", contador, entero_digito);
    
    return 0;
}