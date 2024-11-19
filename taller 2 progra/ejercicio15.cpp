#include <iostream>
#include <locale>
using namespace std;

/*En una sala de cine muy conocida de Bogotá, desean hacer uso de la tecnología para
el manejo de la boletería. Para esto, le cuentan a usted los siguientes datos al
respecto del costo de las boletas:
 Primera clase, costo igual a $5500 si es de Lunes a Jueves.
 Segunda clase, costo igual a $2500 si es de Lunes a Jueves.
 Si es un viernes, sábado o domingo, el costo es de $1500 sin importar la
clase.
 Si un estudiante y el día es un miércoles o un jueves le hacen un descuento de
$500.
Con todo esto, hay que decirle a una persona en cuánto le sale el costo de su boleta

ver 5.11 agosto 19/2024     Juan Pablo García
*/

int main(){
    setlocale (LC_ALL, "es_ES.UTF-8");
    int clase, dia, estudiante, costo;

    //entrada de datos
    cout<<"\tCompra de boletas para cine"<<endl;
    cout<<"\nEs estudiante?.\nIngrese (1) para SI, (2) para NO: ";
    cin>>estudiante;
    cout<<"\nSelección de clase.\nIngrese (1) para primera clase, (2) para segunda clase: ";
    cin>>clase;
    cout<<"\nQué día desea ir?:\n(1)Lunes--(2)Martes--(3)Miércoles--(4)Jueves--(5)Viernes--(6)Sábado--(7)Domingo: ";
    cin>>dia;
    
    //condiciones para el programa
    if (clase == 1 && dia >= 1 && dia <= 4){
        costo = 5500;
    } else if (clase == 2 && dia >= 1 && dia <= 4){
        costo = 2500;
    } else if (dia >= 5 && dia <= 7){
        costo = 1500;
    }   

    //descuento de estudiante
    if ((dia == 3 || dia == 4) && estudiante == 1){
        costo -= 500;
    }

    cout<<"\nEl costo total de su boleta es de: "<<costo<<endl;

    return 0;
}