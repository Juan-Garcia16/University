#include <iostream>
using namespace std;

/*determinar en un conjunto de n numeros naturales:
cuantos son menores que 15?
cuanto son mayores que 50?
cuanto están en el rango entre 25 y 45?

a.- Cantidad de números a ingresar, será n
b.- El número a ingresar, llamaremos num.
Salidas
a.- Números menores a 15, un contador, lo denominaremos c15.
b.- Números mayores a 50, contador que se será c50.
c.- Números entre 25 y 45, un contador se llamará c_rango.
Procesos o condiciones
a.- num < 15
b.- num > 50;
c.- num > 25 y num < 45;

*/

int main(){
    int num, n, c15 = 0, c50 = 0, c_rango = 0;

    cout<<"cuantos numeros desea ingresar: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese el numero "<<i+1<<": ";
        cin>>num;

        if (num < 15)
        {
            c15++;
        }
        if (num > 50)
        {
            c50++;
        }
        if (num > 25 && num <45)
        {
            c_rango++;
        }
    }
    
    cout<<"cantidad menores a 15: "<<c15<<endl;
    cout<<"cantidad mayores a 50: "<<c50<<endl;
    cout<<"cantidad entre 25 y 40: "<<c_rango<<endl;

    return 0;
}
