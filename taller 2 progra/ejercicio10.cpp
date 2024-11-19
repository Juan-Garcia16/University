#include <iostream>
#include <locale>
using namespace std;

/*Validar que dada una fecha, esta sea correcta. Para que una fecha sea correcta es
necesario:
 El año debe ser mayor que cero.
 El mes debe estar entre 1 y 12.
 Dependiendo del mes que sea, el día debe estar dentro de los límites válidos

ver 5.11 agosto 19/2024     Juan Pablo García
*/

int main(){
    setlocale (LC_ALL, "es_ES.UTF-8");
    int day, month, year;
    bool date = true;

    //entrada de datos
    cout<<"Ingrese día: ";
    cin>>day;
    cout<<"Ingrese mes: ";
    cin>>month;
    cout<<"Ingrese año: ";
    cin>>year;

    cout<<day<<"/"<<month<<"/"<<year<<endl;

    //condiciones para el programa
    if (year <= 0){
        date = false;
        cout<<"El año no puede ser menor o igual a cero"<<endl;
    }
    
    if ((month < 1) || (month > 12)){
        date = false;
        cout<<"No existe ese mes"<<endl;
    }

    //verficación para años bisiestos
    bool bisiesto = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
    
    int max_day = 31;

    //condiciones para el programa
    if (month == 2){
        if (bisiesto){
            max_day = 29;
        } else{
            max_day =28;
        }
    } else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)){
        max_day = 30;
    }

    //verificación
    if (day > max_day){
        date = false;
    }

    //salida de datos
    if (date){
        cout<<"La fecha ingresada es valida"<<endl;
    } else {
        cout<<"La fecha ingresada no es valida"<<endl;
    }
    
    return 0;
}