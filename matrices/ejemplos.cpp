#include<stdio.h>
//#include <conio.h>
void cargar(int mat[4][4])
{
int f,c;
printf("Ingrese los componentes de la matriz \n 4 filas 4 columnas:\n");
for(f=0;f<4;f++)
{
for(c=0;c<4;c++)
{
printf("Ingrese componente [%d][%d]:",f,c);
scanf("%i",&mat[f][c]);
}
}
}
void impDiagPpal(int mat[4][4])
{
int k;

for(k=0;k<4;k++)
{
printf("%3i ",mat[k][k]);
}
}
void imprimir(int mat[4][4])
{
int f,c;
for(f=0;f<4;f++)
{
for(c=0;c<4;c++)
{
printf("%3i ",mat[f][c]);
}
printf("\n");
}
}
int main()
{
int mat[4][4];
cargar(mat);
imprimir(mat);
printf("\n Los elementos de la diagonal principal son: ");
impDiagPpal(mat);
//getch();
return 0;
}