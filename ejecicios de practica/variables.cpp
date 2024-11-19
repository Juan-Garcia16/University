#include <iostream>
using namespace std;

int main()
{
    int var1=10;

    cout<<"la variable 1 local tiene almacenado un: "\
        <<var1<<endl;
    var1=50;

    int var2=var1+30;

    cout<<"la variable 2 local tiene almacenado un: "\
        <<var2<<endl;
    return 0;
}