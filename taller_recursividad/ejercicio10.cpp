/*10. Se pide hacer un programa tal que, dados dos números enteros positivos, se devuelva el resultado de su suma. Sin usar el operador suma con los dos valores ingresados por teclado

Ver 5.11 septiembre 19/2024          Juan Pablo García
*/
#include <stdio.h>

int suma(int a, int b){
    if(b == 0){
        return a;
    } else {
        return 1 + suma(a, b-1);
    }
}

int main(){
    int num1, num2;

    while (true)
    {
        printf("Ingrese un numero entero positivo: ");
        scanf("%i", &num1);

        printf("Ingrese otro numero entero positivo: ");
        scanf("%i", &num2);

        if (num1 < 0 || num2 < 0)
        {
            printf("Ambos numeros deben ser positivos\n");
        } else {
            break;
        }    
    }

    int resultado = suma(num1, num2);

    printf("%i + %i = %i\n", num1, num2, resultado);

    return 0;
}