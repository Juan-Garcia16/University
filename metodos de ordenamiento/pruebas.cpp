#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main() {
int a[TAM], temp, i, j, num;
srand(time(NULL)); //Inicializa el generador de numeros aleatorios
printf ("Llenando arreglo con números aleatorios\n");
for (i=0; i< TAM; i++)
a[i]=rand()%100;
printf ("Numero a buscar? ");
scanf ("%d", &num);
for (i=0; i< TAM; i++)
if (a[i] == num){
printf ("\nValor encontrado");
printf ("\nPosicion: %d", i);
}
else
printf ("\nNo existe");
printf ("El arreglo era:\n");
for (i=0; i< TAM; i++)
printf ("%d ", a[i]);
return 0;
}