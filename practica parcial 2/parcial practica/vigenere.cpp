#include <iostream>
#include <string>

using namespace std;

string cifrarVigenere(string texto, string clave) {
    string resultado = "";
    int j = 0; // índice para la clave
    for (int i = 0; i < texto.length(); i++) {
        char letra = texto[i];
        if (isalpha(letra)) {
            char base = isupper(letra) ? 'A' : 'a';
            resultado += char(int(letra + clave[j] - 2 * base) % 26 + base);
            j = (j + 1) % clave.length(); // actualizar el índice de la clave
        } else {
            resultado += letra; // mantener caracteres no alfabéticos
        }
    }
    return resultado;
}

void probarVigenere(string texto) {
    string clavesPosibles[] = {"archivodetexto", "orquidea", "lasvacasverdesvuelanaotrosmundos", "fullstack", "archivos", "recursividad", "matrices", "vectores", "ordenamiento", "reto", "RETO"};
    for (const auto& clave : clavesPosibles) {
        cout << "Con la clave '" << clave << "': " << cifrarVigenere(texto, clave) << endl;
    }
}

int main() {
    string textoCifrado = "40UQ XE2COOD ZUTG-M-J" ;
    cout << "Resultados del cifrado Vigenère:" << endl;
    probarVigenere(textoCifrado);
    return 0;
}
