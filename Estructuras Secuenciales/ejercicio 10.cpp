#include <iostream>
#include <cmath>    
#include <complex>  //libreria para manejar numeros complejos
using namespace std;

/*10- Dados los 3 valores de las constantes que componen una ecuación cuadrática.
Mostrar en pantalla las 2 soluciones considerando el caso de que sean soluciones complejas

Ver 5.11 agosto 14/2024          Juan Pablo García
*/

int main() {
    //variables
    double a, b, c;

    //entrada de datos
    cout<<"\tSolucion para ecuacion cuadratica ax^2+bx+c"<<endl;
    cout<<"\nA continuacion digite las constantes:"<<endl;
    cout<<"a = "; 
    cin>>a;
    cout<<"b = "; 
    cin>>b;
    cout<<"c = "; 
    cin>>c;

    //discriminante
    complex<double> discriminante = pow(b, 2)-(4.0 * a * c);

    /*en caso de dar un discriminante negativo, el numero complejo
    se verá representado de esta forma (parte real , parte compleja) */
    complex<double> sqrt_discriminante = sqrt(discriminante);

    //cálculo de las soluciones
    complex<double> x1 = (-b + sqrt_discriminante) / (2.0 * a);
    complex<double> x2 = (-b - sqrt_discriminante) / (2.0 * a);

    //salida de datos
    cout<<"La primera solucion es: "<<x1<< endl;
    cout<<"La segunda solucion es: "<<x2<< endl;

    return 0;
}