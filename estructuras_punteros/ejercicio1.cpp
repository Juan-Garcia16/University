#include <stdio.h>
#include <string.h>

struct  pais
{
    char nombre[40];
    int cantidadhab;
};

int main(){
    pais pais1, pais2, pais3;

    printf("Ingrese el primer pais: ");
    fgets(pais1.nombre, sizeof(pais1.nombre), stdin);
    pais1.nombre[strcspn(pais1.nombre, "\n")] = '\0';
    printf("\nIngrese su cantidad de habitantes: ");
    scanf("%i", &pais1.cantidadhab);
    getchar();

    printf("\nIngrese el segundo pais: ");
    fgets(pais2.nombre, sizeof(pais2.nombre), stdin);
    pais2.nombre[strcspn(pais2.nombre, "\n")] = '\0';

    printf("\nIngrese su cantidad de habitantes: ");
    scanf("%i", &pais2.cantidadhab);

    printf("\nIngrese el tercer pais: ");
    fgets(pais3.nombre, sizeof(pais3.nombre), stdin);
    pais3.nombre[strcspn(pais3.nombre, "\n")] = '\0';

    printf("\nIngrese su cantidad de habitantes: ");
    scanf("%i", &pais2.cantidadhab);

    if (pais1.cantidadhab > pais2.cantidadhab && pais1.cantidadhab > pais3.cantidadhab)
    {
        printf("%s tiene mayor cantidad de habitantes\n", pais1.nombre);
    } else if (pais2.cantidadhab > pais1.cantidadhab && pais2.cantidadhab > pais3.cantidadhab)
    {
        printf("%s tiene mayor cantidad de habitantes\n", pais2.nombre);
    } else {
        printf("%s tiene mayor cantidad de habitantes\n", pais3.nombre);
    }

    return 0;    
}
