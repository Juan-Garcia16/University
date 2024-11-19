#include <iostream>
using namespace std;

/*7-. Solicitar el día de la semana, imprimir el correspondiente a los planetas del sistema solar, lunes=luna, martes=marte, miércoles=mercurio, jueves=júpiter, viernes= venus, sábado= Saturno, domingo= sol.

Ver 5.11 agosto 23/2024          Juan Pablo García
*/

int main(){
    string dia;
    int validacion;;

    cout<<"Ingrese un dia de la semana (en minusculas)";
    cin>>dia;

    if (dia == "lunes"){
        validacion = 1;
    } else if (dia == "martes"){
        validacion = 2;
    } else if (dia == "miercoles"){
        validacion = 3;
    } else if (dia == "jueves"){
        validacion = 4;
    } else if (dia == "viernes"){
        validacion = 5;
    } else if (dia == "sabado"){
        validacion = 6;
    } else if (dia == "domingo"){
        validacion = 7;
    } else {
        cout<<"no ingreso un dia de la semana"<<endl;
        return 0;
    }


    switch (validacion){
        case 1 : cout<<"luna"<<endl; break;
        case 2 : cout<<"marte"<<endl; break;
        case 3 : cout<<"mercurio"<<endl; break;
        case 4 : cout<<"jupiter"<<endl; break;
        case 5 : cout<<"venus"<<endl; break;
        case 6 : cout<<"saturno"<<endl; break;
        case 7 : cout<<"sol"<<endl; break;
    }
    return 0;
}