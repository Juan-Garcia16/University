#include <iostream>
#include <iomanip>//libreria para manipular el formato de salida de los datos
using namespace std;


/*8- De un estudiante se conoce los siguientes datos:
- Código     - Nombre   - Nota 1   - Nota 2    - Nota 3 
Calcular y mostrar su promedio

Ver 5.11 agosto 14/2024          Juan Pablo García
*/

int main(){
    //variables conocidas desde el inicio
    int codigo = 1088825664;
    string nombre = "Juan Pablo";
    float n1 = 4.5, n2 = 3.3, n3 = 3.8;
    float promedio;

    //entrada de datos
    cout<<"\tNotas Académicas\n";
    cout<<"\nCódigo: "<<codigo<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Notas: "<<"|"<<n1<<"|"<<n2<<"|"<<n3<<"|"<<endl;
    cout<<"Promedio: ";

    //cálculo de promedio
    promedio = (n1+n2+n3)/3;

    //salida de datos
    cout<<setprecision(2)<<promedio<<endl;

    return 0;
}