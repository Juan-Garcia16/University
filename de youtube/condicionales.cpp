#include <iostream>
using namespace std;

int conditional_if(){
    int num;
    cout<<"ingrese un numero entre 1 y 10: "; cin>>num;

    if (num == 5)
    {
        cout<<"El numero es 5"<<endl;
    }
    else{
        cout<<"EL numero no es 5"<<endl;
    }

    return 0;
    
}

//-----------------------------------------
int conditional_switch(){
    int numero;

    cout<<"\nIngrese un numero entre 1 y 5"<<endl; cin>>numero;

    switch (numero)
    {
    case 1: cout<<"el numero es 1"<<endl; break;
    case 2: cout<<"el numero es 2"<<endl; break;
    case 3: cout<<"el numero es 3"<<endl; break;
    case 4: cout<<"el numero es 4"<<endl; break;
    case 5: cout<<"el numero es 5"<<endl; break;

    default : cout<<"el numero no está entre 1 y 5"; break;
    }

    return 0;
}

//-----------------------------------------------
//cual de los dos numeros digitados es mayor
int ejercicio1(){
    int n1, n2;

    cout<<"Digite dos numeros: ";
    cin>>n1>>n2;

    if (n1==n2){
        cout<<"Ambos son iguales"; 
    }
    else if (n1>n2)
    {
        cout<<"el mayor es: "<<n1;
    }    

    else{
        cout<<"El mayor es: "<<n2;
        }

    return 0;
}

//---------------------------------------------
//numero mayor entre 3 numeros
int ejercicio2(){
    int n1,n2,n3;

    cout<<"Ingrese 3 numeros:"; cin>>n1>>n2>>n3;

        if (n1 == n2 && n2 == n3)
    {
        cout<<"Los tres numeros son iguales"<<endl;
    }

    else{

        if (n1 >= n2 && n2>=n3)
        {
            cout<<"El numero mayor es: "<<n1<<endl;
        }
        else if (n2 >= n1 && n1 >= n3)
        {
            cout<<"El numero mayor es: "<<n2<<endl;
        }
        else
        {
            cout<<"El numero mayor es: "<<n3<<endl;
        }
    }

    return 0;
}

//--------------------------------------------------------------
int par_impar(){
    int num;

    cout<<"Ingrese un numero para ver si es par o impar: "; cin>>num;

    if (num == 0)
    {
        cout<<"El numero es cero"<<endl;
    }
    else
    {
        if (num%2 == 0)
        {
            cout<<"El numero es par"<<endl;
        }
        else
        {
            cout<<"El numero es impar"<<endl;
        }
    }   
    return 0;
}

//---------------------------------------------------------
int positivo_negativo(){
    int num;

    cout<<"Ingrese un numero para ver si es positivo o negativo"<<endl; cin>>num;

    if (num == 0)
    {
        cout<<"El numero es cero"<<endl;
    }
    else{
        if (num > 0)
        {
            cout<<"El numero es positivo"<<endl;
        }
        else{
            cout<<"El numero es negativo"<<endl;
        }
    }
    return 0;
}

//---------------------------------------------------
//determinar si un caracter es una vocal mayuscula o minuscula
int vocal_mayus_minus(){
    char letra;

    cout<<"Digite un caracter: "; cin>>letra;

    switch (letra)
    {
        case 'a': 
        case 'e':
        case 'i': 
        case 'o':
        case 'u': cout<<"Es una vocal minuscula"; break;
        default : cout<<"No es una vocal minuscula"; break;

    }

    return 0;
}

//--------------------------------------
/*Pgrama que lea un caracter e indique si es una
vocal mayuscula, minuscula o no es una vocal*/

int vocales(){
    char caracter;

    cout<<"\nIngrese una letra para verificar que tipo de vocal o no es: ";
    cin>>caracter;

    switch (caracter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout<<"es una vocal minuscula"<<endl; break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': cout<<"es una vocal mayuscula"<<endl; break;
    default : cout<<"no es una vocal"<<endl; break;
    }

    return 0;
}

//-------------------------------------------
/*ingresar 3 numeros, luego ingresar un ouarto y
verificar si si coincide con alguno de los anteriores
introducidos*/

int rangos(){
    int num1, num2, num3, num4;
    cout<<"\nIngrese 3 numeros:"<<endl;
    cin>>num1>>num2>>num3;

    cout<<"\nIngrese un cuarto numero:"<<endl;
    cin>>num4;

    if ((num4==num1)||(num4==num2)||(num4==num3))
    {
        cout<<"EL ultimo numero ingresado concide con alguno/s de los anteriores"<<endl;
    }
    else{
        cout<<"El ultimo numero ingresado es diferente de los anteriores"<<endl;
    }
    return 0;
}

//------------------------------------
/*9. Cambiar un número entero con el mismo valor pero en romanos.
	
	M = 1000
	D = 500
	C = 100
	L = 50
	X = 10
	V = 5
	I = 1
*/

int romanos(){
	int numero,unidades,decenas,centenas,millar; 
	
	cout<<"Digite un numero: "; 
	cin>>numero; 
	//2152
	unidades = numero%10; numero /= 10; //unidades = 2 , numero = 215
	decenas = numero%10; numero /= 10; //decenas = 5 , numero = 21
	centenas = numero % 10; numero /= 10; //centenas = 1 , numero = 2
	millar = numero % 10 ; numero /= 10; //millar = 2 , numero = 0
	//2000+100+50+2 = 2152
	
	switch(millar){
		case 1: cout<<"M";break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM";break;
	}
	
	switch(centenas){
		case 1: cout<<"C";break;
		case 2: cout<<"CC";break;
		case 3: cout<<"CCC";break;
		case 4: cout<<"CD";break;
		case 5: cout<<"D";break;
		case 6: cout<<"DC";break;
		case 7: cout<<"DCC";break;
		case 8: cout<<"DCCC";break;
		case 9: cout<<"CM";break;
	}
	
	switch(decenas){
		case 1: cout<<"X";break;
		case 2: cout<<"XX";break;
		case 3: cout<<"XXX";break;
		case 4: cout<<"XL";break;
		case 5: cout<<"L";break;
		case 6: cout<<"LX";break;
		case 7: cout<<"LXX";break;
		case 8: cout<<"LXXX";break;
		case 9: cout<<"XC";break;
	}
	
	switch(unidades){
		case 1: cout<<"I";break;
		case 2: cout<<"II";break;
		case 3: cout<<"III";break;
		case 4: cout<<"IV";break;
		case 5: cout<<"V";break;
		case 6: cout<<"VI";break;
		case 7: cout<<"VII";break;
		case 8: cout<<"VIII";break;
		case 9: cout<<"IX";break;
	}
	return 0;
}

//------------------------------------
int main(){
    //conditional_if();
    //conditional_switch();
    //ejercicio1();
    //ejercicio2();
    //par_impar();
    //positivo_negativo(); //con switch
    //vocal_mayus_minus();
    //vocales();
    //rangos();
    romanos();
}