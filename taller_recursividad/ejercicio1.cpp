/*1. Calcular la potencia de un número: 
Ej: 5^3=125 recursivamente. Sin el uso de la función pow

Ver 5.11 septiembre 19/2024          Juan Pablo García
*/
#include <stdio.h>
int calculo_potencia(int a, int b){
    if (b == 0)
    {
        return 1;
    } else {
        return a * calculo_potencia(a,b-1);
    }
    
}

int main(){
    int num;
    int potencia;

    printf("Ingrese un numero: ");
    scanf("%i", &num);
    printf("Ingrese la potencia que desea calcular: ");
    scanf("%i", &potencia);

    int resultado = calculo_potencia(num, potencia);

    printf("%i ^ %i = %i\n", num, potencia, resultado);
    
    return 0;
}