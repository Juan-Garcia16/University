/*3. Se pide hacer un programa tal que, dados dos números enteros positivos, se devuelva el resultado de su
multiplicación. Condición: Use solo el operador de suma (+)

Ver 5.11 septiembre 19/2024          Juan Pablo García
*/
#include <stdio.h>

int multiplicacion(int a, int b){
    if(a == 0 || b == 0){
        return 0;
    } else {
        return a + multiplicacion(a, b-1);
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

    int resultado = multiplicacion(num1, num2);

    printf("%i * %i = %i\n",num1, num2, resultado);
    return 0;
}