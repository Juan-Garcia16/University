#include <iostream>
#include <math.h>
using namespace std;

/*4- Dado los valores A, B, C se pide calcular y mostrar estos resultados
- El cuadrado de la suma                
- El producto de los valores leídos
- El cubo del Producto
- La diferencia entre el cuadrado de la suma con respecto al cubo del  producto

Ver 5.11 agosto 14/2024          Juan Pablo García
*/

int main(){
    //variables
    int A, B, C;

    //entrada de datos
    cout<<"Programa para calcular y mostrar los resultados de operaciones entre 3 numeros"<<endl;
    cout<<"\nIngrese un valor para A: "; 
    cin>>A;
    cout<<"Ingrese un valor para B: "; 
    cin>>B;
    cout<<"Ingrese un valor para C: "; 
    cin>>C;

    //operación de los datos
    int suma_cuadrado = pow(A+B+C,2);
    int producto = A*B*C;
    int producto_cubo = pow(producto,3);
    int dif_suma_cubo = suma_cuadrado-producto_cubo;

    //salida de datos
    cout<<"\nEl cuadrado de la suma = "<<suma_cuadrado<<endl;
    cout<<"El producto de los valores = "<<producto<<endl;
    cout<<"El cubo del producto = "<<producto_cubo<<endl;
    cout<<"Diferencia entre el cuadrado de la suma con respecto al cubo del producto: "<<dif_suma_cubo<<endl;

    return 0;    
}