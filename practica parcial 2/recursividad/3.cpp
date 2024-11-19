/*
/3. Se pide hacer un programa tal que, dados dos números enteros positivos, se devuelva el resultado de su
multiplicación. Condición: Use solo el operador de suma (+)
*/
#include <stdio.h>

int multiplicacion(int num1, int num2){
    if (num2 == 0)
    {
        return 0;
    } else {
        return num1 + multiplicacion(num1, num2 -1);
    }
    
}

int main(){
    int num1, num2;

    printf("Ingrese un numero: ");
    scanf("%i", &num1);
    printf("Ingrese otro numero: ");
    scanf("%i", &num2);

    printf("El resultado de su multiplicacion es: ");
    int resultado = multiplicacion(num1, num2);
    printf ("%i", resultado);

    return 0;
}