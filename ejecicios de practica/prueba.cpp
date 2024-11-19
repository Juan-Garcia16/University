#include <iostream>
using namespace std;

int var_global=10;

int main()
{
    int var_locar=20;
    cout<<"programa que muestra los usos de variables "\
        "globales y locales\n"<<endl;
    cout<<"la variable global tiene asigano un: "\
    <<var_global<<endl;
    cout<<"\nla variable locar tiene asignado un: "\
    <<var_locar<<endl;
    return 0;
}