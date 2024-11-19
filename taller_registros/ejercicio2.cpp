/*Un programa donde se ingrese la fecha actual y se compruebe si corresponde al día del cumpleaños, Mostrar un mensaje de felicitaciones. Con formato Día, Mes, Año.

VSC ver 1.93.1 octubre 9/2024          Juan Pablo García
*/
#include <stdio.h>
#include <locale.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
} fecha;

int fecha_real(int dia, int mes,int anio){
    if (mes < 1 || mes > 12) 
    {
        return 0;
    } //no existe el mes

    if (dia < 1 || dia > 31) 
    {
        return 0;
    } //no existe el dia

    // meses con 30 dias
    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) 
    {
        return 0;
    }

    //febrero para años bisiestos
    if (mes == 2) 
    { 
        if (anio % 4 == 0) {
            if (dia > 29) //max de dias en febrero para años bisiestos
            {
                return 0;//año bisiesto
            } 
        } else {
            if (dia > 28) //max de dias en febrero para años no bisiestos
            {
                return 0;
            } //año no bisiesto
        }
    }

    return 1;//si la fecha no tiene errores
}

int main(){
    setlocale(LC_ALL, "es_ES.UTF-8");
    fecha fecha_actual;
    fecha cumpleanios;

    printf("Ingrese su fecha de nacimiento");
    printf("\nDia: "); scanf("%i", &cumpleanios.dia);
    printf("Mes: "); scanf("%i", &cumpleanios.mes);
    printf("Año: "); scanf("%i", &cumpleanios.anio);

    if (!fecha_real(cumpleanios.dia, cumpleanios.mes, cumpleanios.anio))//! para negar 
    {
        printf("\nLa fecha no existe\n");
        return 1;
    }
    
    printf("\nIngrese la fecha actual");
    printf("\nDia: "); scanf("%i", &fecha_actual.dia);
    printf("Mes: "); scanf("%i", &fecha_actual.mes);
    printf("Año: "); scanf("%i", &fecha_actual.anio);

    if (!fecha_real(fecha_actual.dia, fecha_actual.mes, fecha_actual.anio))//! para negar 
    {
        printf("\nLa fecha no existe\n");
        return 1;
    }

    if (cumpleanios.dia == fecha_actual.dia && cumpleanios.mes == fecha_actual.mes)
    {
        printf("\nNaciste el %i / %i / %i", cumpleanios.dia, cumpleanios.mes, cumpleanios.anio);
        printf("\nFeliz cumpleaños numero %i\n", fecha_actual.anio - cumpleanios.anio);
    } else {
        printf("\nHoy no es tu cumpleaños\n");
    }
    
    return 0;

}
