#include <iostream>
using namespace std;

/*9- Convertir a pesos Colombianos y a Dólares un valor dado en Euros

Ver 5.11 agosto 14/2024          Juan Pablo García
*/

int main(){
    //variables
    int euros;
    double euro_cop = 4421.68;
    double euro_usd = 1.1;
    
    //entrada de datos
    cout<<"\tConversor de euros a dolares y pesos colombianos\n";
    cout<<"\nIngrese la cantidad de euros a convertir: ";
    cin>>euros;

    //salida de datos
    cout<<"Pesos Colombianos: "<<euros*euro_cop<<endl;
    cout<<"Dolares: "<<euros*euro_usd<<endl;

    return 0;
}
