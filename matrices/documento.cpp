/*
Para ilustrar el manejo de matrices, construiremos ahora un programa que lee de
teclado dos matrices de números en coma flotante y muestra por pantalla su suma
y su producto. Las matrices leídas serán de 3 × 3 y se denominarán a y b. El
resultado de la suma se almacenará en una matriz s y el del producto en otra p.
*/
/*
#include <stdio.h>

int main(){
    float a[3][3], b [3][3], s[3][3], p[3][3];

    printf("Ingrese los datos para una matriz a\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Posicion a[%i][%i]", i, j);
            scanf("%f", &a[i][j]);
        }    
    }

        printf("\nIngrese los datos para una matriz b\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Posicion a[%i][%i]", i, j);
            scanf("%f", &b[i][j]);
        }    
    }

    printf("\nMatriz a\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }

        printf("\nMatriz b\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", b[i][j]);
        }
        printf("\n");
    }
    
    //suma
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }
    
        printf("\nSuma de las matrices\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", s[i][j]);
        }
        printf("\n");
    }

    //producto
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            p[i][j] = (a[i][j]) * (b[i][j]);
        }
        
    }
    
    printf("\nProduco de las matrices\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%f ", p[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

*/


//--------------------------------------------------

/*Crear y cargar una matriz de 4 filas por 4 columnas. Imprimir la diagonal principal.
x - - -
- x - -
- - x -
- - - x

*/
/*
#include <stdio.h>

int main(){
    int matriz[4][4];
    int diagonal[4][4];

    printf("Ingrese los valores para la matriz\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("la matriz es: \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");    
    }
    

    printf("\nDiagonal\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                printf("%i ", matriz[i][j]); 
            }
        }
    } 
}

*/

/*
Problema 3:
Crear y cargar una matriz de 3 filas por 4 columnas.
Imprimir la primera fila.
Imprimir la última fila.
Imprimir la primera columna.
*/
/*
#include <stdio.h>

int main(){
    int matriz[3][4];

        printf("Ingrese los valores para la matriz\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("posicion [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("\nmatriz\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    

    //primero fila

    printf("\nPrimera fila\n");
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i ", matriz[i][j]);
        }      
    }
    
    //ultima fila
    printf("\nUltima fila\n");
    for (int i = 2; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            {
                printf("%i ", matriz[i][j]);
            }      
    }

    //primera columna
    printf("\nPrimera columna\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("%i ", matriz[i][j]);
        }      
    }

    return 0;

}
*/

//---------------------------------------------------------

/*
Crear una matriz de 4 filas y 5 columnas. Realizar la carga de componentes por
columna (es decir primero ingresar toda la primera columna, luego la segunda
columna y así sucesivamente) Imprimir luego la matriz.
*/
/*
#include <stdio.h>

int main(){
    int matriz[4][5];

    printf("Ingrese los valores para la matriz 4*5 por columna\n");

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("posicion [%i][%i]", i, j);
            scanf("%i", &matriz[i][j]);
        }    
    }

    printf("\nMatriz\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

*/

//-------------------------------------------


/*
Crear una matriz de 3x4. Realizar la carga y luego imprimir el elemento mayor
*/

/*
#include <stdio.h>

int main(){
    int matriz[3][4];

    printf("llene la matriz\n");

    for ( int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {   
            printf("Posicion [%i][%i]", i, j);
            scanf("%i", &matriz[i][j]);
        }
        
    }

    printf("\nMatriz\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    int vector[12];

    int v = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            vector[v] = matriz[i][j];
            v++;
        }
        
        }
    
    
    //metodo de burbuja

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11-i; j++)
        {
            if (vector[j] > vector[j+1])
            {
                int aux = 0;
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
            
        }    
    }
    
    printf("\nEl mayor elemento de la matriz es: %i\n", vector[11]);

    for (int i = 0; i < 12; i++)
    {
        printf("%i ", vector[i]);
    }
    


    return 0;
}
*/

/*
Confeccionar un programa que permita :
1-Almacenar en una matriz los datos de 5 personas.
2-Imprimir los nombres.
3-Ingresar otro nombre y verificar si se encuentra almacenado en la matriz.
*/
/*
#include <stdio.h>
#include <string.h>

int main(){
    char matriz[5][31];

    printf("Ingrese los datos de 5 personas: ");
    
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre de la persona\n");
        fgets(matriz[i], sizeof(matriz), stdin);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", matriz[i]);
    }
    
    char nombre[31];
    printf("Ingrese un nombre para buscar: ");
    fgets(nombre, sizeof(nombre), stdin);
    
    int encontrado = 0;
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(matriz[i], nombre) == 0)
        {
            encontrado = 1;
        }
    }
    
    if (encontrado)
    {
        printf("EL nombre se encuentra en la lista\n");
    } else {
        printf("El nombre no se encuentra\n");
    }
    return 0;    
    
}
*/

//----------------------------------------------------
/*
Problema 3:
Elaborar un programa que permita :
1-Almacenar en una matriz los datos de 5 personas.
12
2-Imprimir los nombres.
3-Ordenar alfabéticamente los nombres.*/

/*
#include <stdio.h>
#include <string.h>

int main(){
    char matriz[5][31];

    printf("Ingrese los datos de 5 personas: ");
    
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre de la persona\n");
        fgets(matriz[i], sizeof(matriz), stdin);
    }

    //imprimir nombres
    for (int i = 0; i < 5; i++)
    {
        printf("%s", matriz[i]);
    }

    printf("Nombres en orden alfabetico");

    //burbuja con caracteres

    char aux[41];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4-i; j++)
        {
            if (strcmp(matriz[j], matriz[j+1]) > 0)
            {
                strcpy(aux,matriz[j]);
                strcpy(matriz[j],matriz[j+1]);
                strcpy(matriz[j+1], aux);
            }
            
        }
        
    }

    //orden alfabetico
    printf("\nOrdenados en orden alfabetico: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s", matriz[i]);
    }
    return 0;
    
}
*/


//-------------------------------------------

//vectores y matrices paralelos

/*
Problema 1:
Desarrollar un programa que permita cargar 5 nombres de personas y sus edades respectivas. Luego de
realizar la carga por teclado de todos los datos imprimir los nombres de las personas mayores de edad
(mayores o iguales a 18 años)
*/
#include <stdio.h>
#include <string.h>

int main(){
    char nombres[5][30];
    int edad[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese nombre de la persona:\n");
        fgets(nombres[i], sizeof(nombres), stdin);
        nombres[i][strcspn(nombres[i], "\n")] = '\0';
        printf("Ingrese la edad de la persona\n");
        scanf("%i", &edad[i]);
        getchar();
    }

    for (int i = 0; i < 5; i++)
    {
        if (edad[i] > 18)
        {
            printf("%s", nombres[i]);
        }
        
    }
    
    return 0;
    
}