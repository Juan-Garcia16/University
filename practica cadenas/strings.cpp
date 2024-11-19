/*Por ser un array de caracteres puede recorrerse elemento a elemento hasta encontrar el nulo.
Ejemplo: Programa C++ que lee por teclado una cadena de caracteres y la guarda en el array cadena. A
continuación, lo recorre desde el principio y muestra cada carácter por pantalla hasta que encuentra el
carácter nulo.*/
#include <iostream>
using namespace std;

int main(){
    char cadena[10];

    cout<<"ingrese la cadena de caracteres";
    cin.getline(cadena,10);

    int i = 0;

    while (cadena[i] != '\0')
    {
        cout<<cadena[i];
        i++;
    }
    
}

