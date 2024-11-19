#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string cifrarCesar(string texto, int clave) {
    string resultado = "";
    for (char letra : texto) {
        if (isalpha(letra)) {
            char base = isupper(letra) ? 'A' : 'a';
            letra = (letra - base + clave) % 26 + base;
        }
        resultado += letra;
    }
    return resultado;
}

void descifrarCesar(string texto) {
    for (int clave = 1; clave <= 27; ++clave) {
        cout << "Con la clave " << clave << ": " << cifrarCesar(texto, clave) << endl;
    }
}

int main() {
    string textoCifrado = "40UQ XE2COOD ZUTG-M-J";
    cout << "Resultados del cifrado César:" << endl;
    descifrarCesar(textoCifrado);
    return 0;
}

