#include <iostream>
using namespace std;

int main()
{
    const float pi=3.1416;

    cout<<"\tEl siguiente programa sirve para calcular el volumen de un cilindro\n";

    int radio;
    cout<<"\ningrese el radio del cilindro: ";
    cin>>radio;

    int altura;
    cout<<"\ningrese la altura del cilindro: ";
    cin>>altura;

    float volumen;
    volumen=pi*radio*altura;
    cout<<"\nEl volumen del cilindro es: "<<volumen<<endl;
    return 0;
}