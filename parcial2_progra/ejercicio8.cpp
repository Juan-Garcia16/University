/*8-. Se tiene la siguiente declaración de registro:
struct pais {
    char nombre[40];
    int cantidadhab;
};
Programa que solicite cinco datos de tipo país y almacenar los nombres de los países y la cantidad de habitantes de dichos países.
Mostrar seguidamente el nombre del país con mayor cantidad de habitantes (considerar que los países tienen cantidades distintas)


VSC ver 1.93.1 octubre 25/2024          Juan Pablo García
*/

#include <stdio.h>

struct pais {
    char nombre[40];
    int cantidadhab;
};

int main() {
    struct pais paises[5];
    struct pais pais_mayor_hab;

    for (int i = 0; i < 5; i++) {
        printf("Ingrese el nombre del pais %d: ", i + 1);
        scanf("%s", paises[i].nombre); // Limitar la entrada a 39 caracteres
        printf("Ingrese la cantidad de habitantes de %s: ", paises[i].nombre);
        scanf("%i", &paises[i].cantidadhab);
    }

    // inicializar el pais con mayor cantidad de habitantes
    pais_mayor_hab = paises[0];

    // pais con mayor cantidad de habitantes
    for (int i = 1; i < 5; i++) {
        if (paises[i].cantidadhab > pais_mayor_hab.cantidadhab) {
            pais_mayor_hab = paises[i];
        }
    }

    printf("\nEl pais con mayor cantidad de habitantes es: %s con %i habitantes.\n",pais_mayor_hab.nombre, pais_mayor_hab.cantidadhab);

    return 0;
}
