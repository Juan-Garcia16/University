#include <iostream>
#include <locale>
using namespace std;

/* El alcalde del pueblo " Derecho a ser feliz" encontró que su gente sólo comete 3 tipos
de infracciones:
 Robar gallinas.
 Ser infiel.
 No ir a las votaciones.
La penitencia que coloca es:

INFRACCION                   |              PENITENCIAS            
Por robar gallinas           |   2 días de picar piedra | 1 día de cárcel.
Por ser infiel               |   3 días de picar piedra | 2 días de cárcel.
Por no ir al las votaciones  |   3 días de picar piedra | 4 días de cárcel.


Cada persona sólo confiesa 1 o máximo 2 infracciones.
Hay que leer la infracción y decir la penitencia que debe cumplir

ver 5.11 agosto 19/2024     Juan Pablo García
*/

int main(){
    setlocale (LC_ALL, "es_ES.UTF-8");
    int gallinas = 1, infiel =2, votaciones =3, num_crimen, crimen1, crimen2;

    //entrada de datos sobre el número de crímenes cometidos
    cout<<"\tCrímenes en Derecho a ser feliz"<<endl;
    cout<<"\n¿Ha cometido 1 o 2 crímenes?: ";
    cin>>num_crimen;

    //condiciones para cuando solo se cometió un crímen
    if (num_crimen == 1){
        cout<<"\nA continuación seleccione con el número indicado el crímen que ha cometido:\n1. Robar gallinas\n2. Ser infiel\n3. No ir a las votaciones"<<endl;
        cin>>crimen1;

        if (crimen1 == gallinas){
            cout<<"Por robar gallinas su penitencia equivale a 2 días de picar piedra y 1 día de cárcel"<<endl;
        } else if (crimen1 == infiel){
            cout<<"Por ser infiel su penitencia equivale a 3 días de picar piedra y 2 días de cárcel"<<endl;
        } else if (crimen1 == votaciones){
            cout<<"Por no ir a las votaciones su penitencia equivale a 3 días de picar piedra y 4 días de cárcel"<<endl;
        }

    //condiciones para cuando se cometieron dos crímenes
    } else if (num_crimen == 2){
        cout<<"\nA continuación seleccione con el número indicado los crímenes que ha cometido:\n1. Robar gallinas\n2. Ser infiel\n3. No ir a las votaciones"<<endl;
        cin>>crimen1; cin>>crimen2;

        if ((crimen1 == gallinas && crimen2 == infiel) || (crimen1 == infiel && crimen2 == gallinas)){
            cout<<"Por robar gallinas su penitencia equivale a 2 días de picar piedra y 1 día de cárcel"<<endl;
            cout<<"Por ser infiel su penitencia equivale a 3 días de picar piedra y 2 días de cárcel"<<endl;
        } 
        else if ((crimen1 == gallinas && crimen2 == votaciones) || (crimen1 == votaciones && crimen2 == gallinas)){
            cout<<"Por robar gallinas su penitencia equivale a 2 días de picar piedra y 1 día de cárcel"<<endl;
            cout<<"Por no ir a las votaciones su penitencia equivale a 3 días de picar piedra y 4 días de cárcel"<<endl;
        } 
        else if ((crimen1 == infiel && crimen2 == votaciones) || (crimen1 == votaciones && crimen2 == infiel)){
            cout<<"Por ser infiel su penitencia equivale a 3 días de picar piedra y 2 días de cárcel"<<endl;
            cout<<"Por no ir a las votaciones su penitencia equivale a 3 días de picar piedra y 4 días de cárcel"<<endl;          
        }

    } else {
        cout<<"Solo pudo haber cometido 2 crímenes como maximo"<<endl;
        return 0;
    }
    

    return 0;

}