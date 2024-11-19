/*23. Leer 10 números enteros, almacenarlos en un vector y determinar en qué posición se
encuentra el número primo con mayor cantidad de dígitos pares

Ver 5.11 septiembre 16/2024          Juan Pablo García
*/
#include <stdio.h>

int main(){
    int n = 10;
    int vec[n];

    printf("Ingrese 10 numeros uno por uno\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &vec[i]);
    }

    //si es primo y si es mayor

    int vec_pares[n];

    for (int i = 0; i < n; i++)
    {
        int numero = vec[i];
        int contador_digitos_pares = 0;

        //ciclo para sacar la cantidad de digitos pares en cada numero
        while (numero > 0)
        {
            int digito = numero % 10;

            if (digito % 2 == 0)
            {
                contador_digitos_pares++;
            }
            numero /= 10;
        }        

        //en vec_pares se almacenan la cantidad de digitos pares por cada posicion
        vec_pares[i] =  contador_digitos_pares;
    }

    int vec_primos[n];

    //ciclo para validar que los numeros sean primos o no
    for (int i = 0; i < n; i++)
    {
        int primos = 0;
        if (vec[i] > 2 && vec[i] % 2 != 0)
        {
            primos = 1;
        }
        vec_primos[i] = primos;
    }

    //tengo vec primos y vec pares

    //ciclo para copiar un "copiar" un vector
    int vec_pares_max[n];
    for (int i = 0; i < n; i++)
    {
        vec_pares_max[i] = vec_pares[i];
    }
    

    int aux = 0;
    //ciclo para sacar la cantidad mayor de digitos pares llevandola a la ultima posicion de vec_pares
    for (int i = 0; i < n-1; i++)
    {
        if (vec_pares_max[i] > vec_pares_max[i+1])
        {
            aux = vec_pares_max[i];
            vec_pares_max[i] = vec_pares_max[i+1];
            vec_pares_max[i+1] = aux;
        }
    }
    
    //guarda el valor mayor de la cantidad de digitos
    int max = vec_pares_max[n-1];

    //ciclo para verificar en que posicion esta el primo con mayor cantidad de digitos
    for (int i = 0; i < n; i++)
    {
        if (vec_primos[i] == 1 && vec_pares[i] == max)
        {
            printf("El numero primo con mayor cantidad de digitos pares es %i y se encuentra en la posicion %i\n", vec[i], i);
        } else if (i == 9) //si llega a 9 significa que no hay primos
        {
            printf("No se encontraron numeros primos");
        }
            
    }

    return 0;
}


