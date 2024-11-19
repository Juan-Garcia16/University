#include <iostream>
using namespace std;

/*7- Se pide liquidar el valor de horas extras diurnas teniendo en cuenta lo siguiente
- Valor de la hora trabajada  
- Número de horas trabajadas durante el mes
Debe tener en cuenta que las horas extras diurnas tienen un recargo del 35% 
del valor de la hora trabajada 

Ver 5.11 agosto 14/2024          Juan Pablo García
*/

int main(){
    // Variables
    float valor_hora, total_liquidacion;
    int numero_horas_extras;

    cout<<"\tLiquidacion de horas extra diurnas\n";

    // Entrada de datos
    cout<<"\nValor de la hora trabajada: "; 
    cin>>valor_hora;
    cout<<"Numero de horas extras trabajadas durante el mes: "; 
    cin>>numero_horas_extras;

    // Cálculo de liquidacion
    total_liquidacion = (valor_hora+(valor_hora*0.35))*numero_horas_extras;

    // Salida de datos
    cout<<"Total por liquidacion de horas extra diurnas: "<<total_liquidacion<<endl;

    return 0;
}

