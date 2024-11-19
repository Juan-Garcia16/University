/*Trabajo de Cadenas:
/*Trabajo de Cadenas:

Jhonatan Orlando Garcia Aguilar

*/

/*2. Escribir un programa que lea una frase y posteriormente la escriba carácter a 
carácter utilizando printf.

#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Spanish");
	
	char frase[30];
	int longitud;
	
	cout<<"Digite una frase: "; 
	cin.getline(frase,30,'\n'); 
	
	longitud = strlen(frase);
	
	for(int i=0; i<longitud; i++){
		cout<<frase[i]<<" ";
	}
	
	getch();
	return 0;
} */



/*3. Leer una frase y mostrarla con un carácter en cada línea.

#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;


int main(){
	setlocale(LC_ALL, "Spanish");
	
	char frase[30];
	int longitud;
	cout<<"Digite una frase: "; cin.getline(frase,30,'\n');
	longitud = strlen(frase);
	for(int i=0; i<longitud; i++){
		cout<<frase[i]<<endl;	
	}
	
	
	getch();
	return 0;
} */


/*6. Leer una frase y contar el número de vocales (de cada una) que aparecen.

#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Spanish");
	
	char frase[100];
	int a=0, e=0, i=0, o=0, u=0;		
	
	cout<<"Ingrese una frase: "; cin.getline(frase,100,'\n');
	
	for (int i=0; i<100; ++i)
	{
		switch (frase[i])
		{
			case 'a' : a++; break; 
			case 'A': a++; break;
			case 'e' : e++; break;
			case 'E': e++; break;
			case 'i' : i++; break; 
			case 'I': i++; break;
			case 'o' : o++; break; 
			case 'O': o++; break;
			case 'u' : u++; break; 
			case 'U': u++; break;
		}
	}
	
	cout <<"La cantidad de veces que se encuentra la vocal 'a' es: "<<a<<endl;
	cout <<"La cantidad de veces que se encuentra la vocal 'e' es: "<<e<<endl;
	cout <<"La cantidad de veces que se encuentra la vocal 'i' es: "<<i<<endl;
	cout <<"La cantidad de veces que se encuentra la vocal 'o' es: "<<o<<endl;
	cout <<"La cantidad de veces que se encuentra la vocal 'u' es: "<<u<<endl;
	
	getch();
	return 0;
} */



/*8. Sustituir todos los espacios en blanco de una frase por un asterisco. 

#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    char frase [100];
    int longitud, espacio;
    
    cout <<"Ingrese una frase: "; cin.getline(frase, 100,'\n');
	longitud = strlen(frase);
	
    for(int i=0; i<longitud; i++){
        if(frase[i]== ' '){
        	frase[i] = '*';
		}
	}

    cout<<frase<<endl;
     
    getch();
    return 0;
 } */


/*10. Hacer un programa que determine si una palabra es políndroma.

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Spanish");
	
	char palabra[30];
	//char invertido[30];
	
	cout<<"Digite una palabra: "; cin.getline(palabra, 30, '\n'); cout<<endl;
	//invertido = strrev(palabra);
	
	if (strcmp(palabra, strrev(palabra))== 0){
		cout<<"La palabra es políndroma.";
	}
	else{
		cout<<"La palabra no es políndroma";
	}
	getch();
	return 0;
} */



/*12. Escribir un programa que cuente el número de palabras en un texto.

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Spanish");
	
	char frase[100];
	
    string num = " ";
    
    int cant_palabras = 0, longitud;
    
    cout << "Ingrese una frase: "; cin.getline(frase,100,'\n'); cout<<endl;
 	longitud = strlen(frase);
 	
    for (int i=0; i<longitud; i++){
        if (frase[i] == ' ' and frase[i + 1] != ' ') {
            cant_palabras += 1;
        }
    }
    cout << "La frase digitada tiene " << cant_palabras + 1 << " palabras." << endl;
    
	getch();
    return 0;
} */


/*17. Leer el nombre y los dos apellidos de una persona (en tres cadenas de caracteres 
diferentes) y unirlo en una única cadena.

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Spanish");
	
	char nom[30], apell1[30], apell2[30], completo[100];
	
	cout<<"Digite su nombre: "; cin.getline(nom,30,'\n');
	cout<<"Digite su primer apellido: "; cin.getline(apell1,30,'\n');
	cout<<"Digite su segundo apellido: "; cin.getline(apell2,30,'\n');
	cout<<endl;
	
	strcat(nom, " ");
	strcat(apell1, " ");
	strcpy(completo,nom);
	strcat(completo,apell1);
	strcat(completo,apell2);
	
	cout<<"Su nombre completo es: "<<completo;
	
	getch();
	return 0;
} */


/*19. Leer el nombre de una persona y un carácter y comprobar si dicho carácter está en su nombre.

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Spanish");
	
	char nombre[30], caracter;
	int longitud, contador;
	
	cout<<"Digite su nombre: "; cin.getline(nombre,30,'\n'); 
	cout<<"Digite un caracter/letra: "; cin>>caracter; cout<<endl;
	longitud = strlen(nombre);
	
	
	for(int i=0; i<longitud; i++){
		if(nombre[i] == caracter){
			contador++;
		}						
	}
	
	
	cout<<"El caracter "<<caracter<<" aparece "<<contador<<" veces en su nombre.";
	
	getch();
	return 0;
} */













