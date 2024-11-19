#include <stdio.h>

/*
//hallar el mayor de 3 numeros con vectores
int main(){
    int vec[3];
    int mayor;

    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese uno por uno los 3 numeros:");
        scanf("%i", &vec[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        if (vec[i] > mayor || i == 0)
        {
            mayor = vec[i];
        }
        
    }
    
    printf("El mayor es : %i", mayor);
    
}
*/

/*2._ Vamos a crear un programa que lea un vector de 10 posiciones, luego
determine si la quinta posición es positiva, si la primera posición es negativa y
si la ultima posición es cero.(*)
*/
/*
int main(){
    int n = 10;
    int vector[n];

    printf("Ingrese 10 valores uno por uno: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &vector[i]);
    }

        if (vector[4] > 0)
        {
            printf("La quinta posicion es positiva\n");
        }
        if (vector[0] < 0)
        {
            printf("La primera posicion es negativa\n");
        }
        if (vector[n-1] == 0)
        {
            printf("La ultima posicion es cero\n");
        }
    return 0;
    
}
*/