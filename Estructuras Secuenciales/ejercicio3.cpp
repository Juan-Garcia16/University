#include <iostream>
using namespace std;

/*3- Dada la temperatura en grados Fahrenheit (f) 
convertirla a grados centígrados (c) y viceversa 
c =  5/9 * (f-32)

Ver 5.11 agosto 14/2024          Juan Pablo García
*/

int main(){
    //variables
    int gradosF;
    int gradosC;

    //entrada de datos
    cout<<"\tConversor de grados Fahrenheit (f) a centigrados (c) y visceversa"<<endl;
    cout<<"\nIngrese una temperatura en grados Fahrenheit: "; 
    cin>>gradosF;

    //conversión de grados
    float F_C = (gradosF-32)*(5.0/9.0);

    //salida de datos
    cout<<gradosF<<" f son iguales a: "<<F_C<<" c"<<endl;

//------------------------------------------------------------

    //entrada de datos 
    cout<<"\nIngrese una temperatura en grados centigrados: "; 
    cin>>gradosC;

    //conversión de grados
    float C_F = (gradosC*9.0/5.0)+32;

    //salida de datos
    cout<<gradosC<<" c son iguales a: "<<C_F<<" f"<<endl;
    
    return 0;

}