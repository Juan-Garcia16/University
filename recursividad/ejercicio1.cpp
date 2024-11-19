/*/El programa que calcula 2 elevado a n de forma recursida puede quedar asi la salida

intriduce un numero entero mayor o igual a 0: 10
2^10 = 1024*/
#include <stdio.h>

int potencia(int n){
    int total = 1;
    if (n == 0)
    {
        return total;
    } else {
        return 2 * potencia(n-1);
    }
    

}

int main(){
    int num;

    printf("Introduce un numero entero mayor o igual que 0: ");
    scanf("%i", &num);

    int resultado = potencia (num);

    printf("2 ^ %i = %i",num, resultado );

    return 0;
}