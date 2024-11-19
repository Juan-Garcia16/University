/*Programa que calcule el cociente de dos numeros enteros de forma recursiva,
por ejemplo. para dividir 10 entre 3 hariamos:
10-3 = 7
7-3 = 4
4- 3 = 1

NO se puede seguir restando ya que el ultimo valor obtenido (1) es menor que el
divisor, como se han realizado 3 restas el cociente es 3*/
#include <stdio.h>

int cociente(int a, int b, int contador){
    if (a < b)
    {
        return contador;
    } else {
        contador++;
        return cociente(a - b, b, contador);    
    }
    
}

int main(){
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    int resultado = cociente(num1, num2, 0);

    printf("El cociente es: %i", resultado);

    return 0;
}