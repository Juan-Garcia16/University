#include <iostream>
#include <locale>
using namespace std;

/*Dada la fecha de hoy, calcular la fecha del día siguiente. (suponga que el año no es
bisiesto).

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

    if (year <= 0){
        date = false;
        cout<<"El año no puede ser menor o igual a cero"<<endl;
        return 0;
    }
    if (month < 1 || month > 12){
        cout<<"El mes ingresado no existe"<<endl;
        return 0;
    }

    int max_day = 31;
    
    //validación de la cantidad de días dependiendo del mes
    if (month == 2){
        max_day = 28; 
    } else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)){
        max_day = 30;
    }

    //validación del máximo de días
    if ((day < 1) || (day > max_day)){
        date = false;
        cout<<"EL día ingresado no concuerda con el mes"<<endl;
    }

    //validación cuando la fecha es correcta para definir el siguiente día
    if (date){
        day++;
        if ((day > 28) && (month == 2)){
            day = 1;
            month++;
        } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30){
            day = 1;
            month++;
        } else if (day > max_day){
            day = 1;
            month++;
        }

        if (month > 12){
            day = 1;
            month = 1;
            year++;
        }

    }
    cout<<"El siguiente día es: "<<day<<"/"<<month<<"/"<<year<<endl;

    return 0;
}