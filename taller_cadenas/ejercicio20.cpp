/*20. Leer el nombre completo de una persona y un apellido y comprobar si el apellido pertenece a esa
persona.

Ver 5.11 septiembre 04/2024          Juan Pablo García
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nombre_completo[30];
    char apellido[20];
    char confirmacion[20];

    cout<<"Ingrese su nombre completo: ";
    cin.getline(nombre_completo, 30);

    cout<<"Ingrese su apellido: ";
    cin.getline(apellido, 20);

    cout<<"------------------------"<<endl;
    cout<<"Ingrese su apellido para verificar su identidad: ";
    cin.getline(confirmacion, 20);

    //validacion del apellido ingresado
    if (strcmp(apellido, confirmacion) == 0){
        cout<<"El apellido es correcto "<<nombre_completo<<endl;
    } else {
        cout<<"El apellido es incorrecto"<<endl;
    }
    
    return 0;
    
}