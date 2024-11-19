/*
//1. Calcular la potencia de un número: Ej: 5^3=125 recursivamente. Sin el uso de la función pow
*/
#include <stdio.h>

int calculo_potencia(int n, int p){
    if (p == 0)
    {
        return 1;
    } else{
        return n * calculo_potencia(n, p-1);
    }
    

}

int main(){
    int num;
    int potencia;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    printf("Ingrese la potencia a calcular: ");
    scanf("%i", &potencia);

    int resultado = calculo_potencia(num, potencia);

    printf("%i^%i = %i", num, potencia, resultado);

    return 0;
}