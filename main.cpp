#include <iostream>
#include <string>
using namespace std;

int main() {

    // Crear una variable de tipo string
    string phrase = "Hola, Mundo!";

    // Imprimir la variable
    cout << phrase << endl;

    // Concatenar cadenas
    string str1 = "Que ";
    string str2 = "tal?";
    string str3 = str1 + str2;
    cout << "Cadena resultante: " << str3 << endl;

    // Obtener el tamaño de la variable
    cout << "Tamaño de la cadena: " << phrase.size() << endl;

    // Comprobar si la variable está vacía
    cout << "¿Está la cadena vacía? " << (phrase.empty() ? "Sí" : "No") << endl;

    // Obtener el caracter en una posición
    string sentence = "El lenguaje C++ es poderoso.";
    string sub_str = "C++";

    // Buscar una subcadena
    size_t pos = sentence.find(sub_str);

    // Si la subcadena se encuentra, se imprime la posición
    if(pos != std::string::npos)
        cout << "Subcadena encontrada en la posición: " << pos << endl;
    else
        cout << "Subcadena no encontrada." << endl;

    // Reemplazar una subcadena
    string new_sentence = sentence.replace(pos, sub_str.length(), "Python");

    // Imprimir la nueva cadena
    cout << "Cadena resultante: " << new_sentence << endl;

    return 0;
}