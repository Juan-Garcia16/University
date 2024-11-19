#include <iostream>
#include <string>

using namespace std;

/*5- De un artículo se conoce: 
- referencia 
- Nombre del artículo
- valor unitario 
- unidades disponibles
Se pide calcular el valor total del articulo (con IVA incluido)

Ver 5.11 agosto 14/2024          Juan Pablo García
*/

int main(){
    //variables
    int referencia;
    string nombre_articulo;
    int valor_unitario;
    int unidades;
    int total_unidades;
    int total_iva;
    int total_neto;

    //entrada de datos
    cout<<"\tPrograma para aplicar el IVA a un producto"<<endl;
    cout<<"\nReferencia del producto: "; 
    cin>>referencia;
    cout<<"Nombre del articulo: "; //NO INGRESAR NOMBRE CON ESPACIOS
    cin>>nombre_articulo; 
    cout<<"Valor unitario: "; 
    cin>>valor_unitario;
    cout<<"Unidades disponibles: "; 
    cin>>unidades;

    //salida de datos
    cout<<"\nDescripcion de la compra con IVA aplicado"<<endl;
    cout<<"\nReferencia: "<<referencia<<endl;
    cout<<"Articulo: "<<nombre_articulo<<endl;
    cout<<"Unidades: "<<unidades<<endl;
    cout<<"Total de la compra: ";

    //cálculo del total
    total_unidades = valor_unitario*unidades;
    total_iva = total_unidades*0.19;
    total_neto = total_unidades+total_iva;

    cout<<total_neto<<endl;

    return 0;
}