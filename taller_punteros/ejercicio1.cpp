/*1-. Implementar una función que intercambie el contenido de dos variables enteras, utilizar punteros para solucionarlo.

VSC ver 1.93.1 octubre 3/2024          Juan Pablo García
*/
#include <stdio.h>

void intercambio(int *ptra,int *ptrb){
    int aux = *ptra;
    *ptra = *ptrb;
    *ptrb = aux;
}

int main(){
    int a = 4, b = 5;
    int *ptra, *ptrb;
    ptra = &a;
    ptrb = &b;

    printf("Variables: a = %i  b = %i", *ptra, *ptrb);

    intercambio(ptra, ptrb);

    printf("\n\nVariables intercambiadas: a = %i  b = %i\n", *ptra, *ptrb);
    return 0;
}