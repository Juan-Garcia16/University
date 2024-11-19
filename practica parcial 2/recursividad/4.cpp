/*
//4. Se pide hacer un programa tal que, dados dos números enteros positivos, el primero debe ser mayor que el segundo y será considerado como dividendo y el segundo como divisor, se devuelva el resultado de su división entera. Condición: Use solo el operador de resta (-).

Sugerencia de function:
int division (int a, int b)
{
if(b > a) {
return 0;
}
else {
return division(a-b, b) + 1;
}
}
*/
#include <stdio.h>

int division (int a, int b)
{
    if(b > a) {
        return 0;
    }
    else {
        return division(a-b, b) + 1;
    }
}

int main(){
    int num1, num2;

    while (true)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &num1);
        printf("Ingrese otro numero: ");
        scanf("%i", &num2);

        if (num1 < num2)
        {
            printf("\nEl primero debe ser mayor al segundo\n");
        } else {
            break;
        }    
    }

    int resultado = division(num1, num2);

    printf("%i / %i = %i", num1, num2, resultado);

    return 0;
    
}
