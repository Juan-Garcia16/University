#include <stdio.h>

int main(){
    double lista[3];
    double *p, *p1, *p2;

    int k;
    lista[0] = 1;
    lista[1] = 1.1;
    lista[2] = 1.2;

    p = lista;

    p = p + 2;

    printf("*p= %d con suma ", *p);
    p = p - 1;
    printf("\n*p= %d con resta ", *p);
    p1 = lista + 2;
    p2 = &lista[0];
    k = p1 - p2;
    printf("\n k = %i ", k);

    return 0;
}