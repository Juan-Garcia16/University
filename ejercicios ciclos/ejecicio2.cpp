/*los padres de una niña le prometireron darle 10 dolares cuando cumpliera
12 años de edad y duplicar el regalo en cada cumpleaños subsiguiente hasta que el
regalo excediera 1000 dolares. Escriba un programa para determinar que edad tendrá la niña cuando se le dé al ultima cantidad y la cantidad total recibida*/

#include <iostream>
using namespace std;

int main(){
    int acu = 10, count = 12;

    while (acu <= 1000)
    {
        acu*=2;
        count++;
    }

    cout<<"el acumulado es: "<<acu<<endl;
    cout<<"la edad es: "<<count<<endl;
    

}