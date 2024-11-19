/*2-. Un programa que permita cargar un vector de 5 enteros y obtenga el mayor y el menor.
Implementar dos funciones:	
1-Carga del vector
2-Otra función que reciba el vector y retorne el mayor y menor elemento del vector por medio de dos parámetros de tipo puntero: 
void mayorMenor(int vec[TAMANO],int *pmayor, int *pmenor)

VSC ver 1.93.1 octubre 3/2024          Juan Pablo García
*/
#include <stdio.h>

void cargar_vector(int *pvec){
    //se llena el vector por medio de la dirección de cada valor
    printf("Ingrese 5 valores para llenar el vector: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &pvec[i]);
    }
}

void mayorMenor(int vec[5],int *pmayor, int *pmenor){
    //burbuja
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (vec[j] > vec[j+1])
            {
                int aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
            }   
        }    
    }

    //los punteros desde un inicio estan apuntando a la misma posición, simplemente el vector se modificó ordenandose
    printf("\nEl numero mayor es: %i", *pmayor);
    printf("\nEl numero menor es: %i\n", *pmenor);
    
}

int main(){
    int vec[5];
    int *pvec = vec;
    //punteros para el primer y ultimo valor del vector
    int *pmayor = vec+4;
    int *pmenor = vec;

    //se envia el puntero de vec para llenarlo
    cargar_vector(pvec);

    //se envian los 3 parametros para encontrar el menor y el mayor
    mayorMenor(vec, pmayor, pmenor);

    return 0;
}