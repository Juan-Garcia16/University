/*
6-. Problema propuesto: De un conjunto de elementos enteros que se encuentran en un
vector, determinar cuál es la frecuencia de cada valor. (Valor 1.2)
Se pide:
a) crear un programa que lea el número de los elementos que contendrá un vector, con base en
este número generar valores aleatorios que se guarden en el vector, luego ordenar por cualquier
método,
b) crear dos vectores el primero contiene los valores individuales del vector origen y el segundo
contendrá el valor de la frecuencia para cada valor.
Ejemplo: Para N=12
Vector origen
2 55 3 20 1 20 3 22 1 2 55 3

Vector Ordenado
1 1 2 2 3 3 3 20 2
0
2
2
5
5
5
5

Vectores Generados 
Elem Frec
1 2
2 2
3 3
20 2
22 1
55 2

*/
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;


void ord_bur(int V[], int tam) {
    int aux = 0;
    
    for(int y = 0; y < tam; y++) {
        for(int i = 0; i < tam - y - 1; i++) {
            if(V[i] > V[i + 1]) {
                aux = V[i];
                V[i] = V[i + 1];
                V[i + 1] = aux;	
            }
        } 
    }
}

void llen_1(int v[][2], int tam) {
    for(int i = 0; i < tam; i++) {
        v[i][0] = -1; 
        v[i][1] = 0;  
    }
}

void eli_va_rep(int r[][2], int ve[], int tam) {
    int p = 0;
    r[p][0] = ve[p];	
    for(int i = 1; i < tam; i++) {
        if(ve[i - 1] != ve[i]) {
            p++;
            r[p][0] = ve[i];
        }
    }
}


void frecu(int r[][2], int v[], int tam) {
    for(int i = 0; i < tam; i++) {
        int fre = 0;
        for(int j = 0; j < tam; j++) {
            if(r[i][0] == v[j]) {
                fre++;
            }
        }
        r[i][1] = fre;
    }		
}



int main() {
    int t = 0;
    cout << "\ndigite el tamaño del arreglo: ";
    cin >> t;
    int v[t];
    
	srand(time(NULL));
    for(int i=0;i<t;i++){
    	v[i]=1+rand()%100;
	}
	
    
    ord_bur(v, t);
    
    cout << "\nordenado" << endl;
    for(int i = 0; i < t; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    int frec[t][2];
    llen_1(frec, t);
    eli_va_rep(frec, v, t);
    frecu(frec, v, t);
    
    cout << "\nFrecuencia:\n";	
    for(int i = 0; i < t; i++) {
        if(frec[i][0] != -1) {
            cout << frec[i][0] << " " << frec[i][1] << endl;
        }
    }
    
    
    getch();
    return 0;
}



