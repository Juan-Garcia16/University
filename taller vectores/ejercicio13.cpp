/*13. Leer 10 números enteros, almacenarlos en un vector y determinar si la semisuma entre el valor mayor y el valor menor es un número primo.

Ver 5.11 septiembre 16/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    int n = 10;
    int vec[10];

    printf("Ingrese 10 numeros uno por uno\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &vec[i]);
    }

    int vec_menor_mayor[n];

    //metodo de burbuja

    //ciclo para recorrer el vector hasta n-1
    for (int i = 0; i < n-1; i++)//con el n-1 se asegura mas eficiencia ya que no es necesaria la iteracion con la posicion final
    {
        //con este ciclo se acomodan los numeros mayores encontrados uno detras del otro
        for (int j = 0; j < n-i-1; j++)
        {
            if(vec[j] > vec[j+1]){
                int aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
            }
        }
        
    }

    printf("Valor menor %i", vec[0]);
    printf("\nValor mayor %i", vec[n-1]);

    if (((vec[0] + vec[n-1]) % 2) != 0)
    {
        printf("\nLa semisuma no da un numero entero, es imposible que sea primo");
        return 0;
    } 

    int semisuma = (vec[0] + vec[n-1]) / 2;

    int contador = 0;
    
    for (int i = 1; i <= semisuma; i++)
    {
        if (semisuma % i == 0)
        {
            contador++;
        }
        
    }

    if (contador == 2)
    {
        printf("\nEl resultado de la semisuma fue %i, es un numero primo\n", semisuma);
    } else {
        printf("\nEl resultado de la semisuma fue %i, NO es un numero primo\n", semisuma);
    }
    
    return 0;
}