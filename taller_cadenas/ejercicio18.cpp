/*18. Leer tres cadenas de caracteres correspondientes, respectivamente, al nombre y los dos apellidos de
una persona y crear un nuevo vector que contenga: apellido 1 apellido2, inicial.

Ver 5.11 septiembre 04/2024          Juan Pablo García
*/

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nom[30], apell1[30], apell2[30], completo[100];

    completo[0] = '\0';

    cout<<"Ingrese su nombre: ";
    cin.getline(nom, 30);
    cout<<"Ingrese su primer apellido: ";
    cin.getline(apell1, 30);
    cout<<"Ingrese su segundo apellido: ";
    cin.getline(apell2, 30);

    strcat(completo, apell1);
    strcat(completo, " ");
    strcat(completo, apell2);
    strcat(completo, " ");
    strcat(completo, nom);

    cout<<completo<<endl;

    return 0;

}