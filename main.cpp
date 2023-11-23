#include <iostream>
#include <string>
using namespace std;

int main() {

    // Crear una variable de tipo string
    string phrase = "Hola, Mundo!";

    // Imprimir la variable
    cout << phrase << endl;
    cout << "\n";

    // Concatenar cadenas
    string str1 = "Que ";
    string str2 = "tal?";
    string str3 = str1 + str2;
    cout << "Cadena resultante: " << str3 << endl;
    cout << "\n";

    // Obtener el tamaño de la variable
    cout << "Tamaño de la cadena: " << phrase.size() << endl;

    // Comprobar si la variable está vacía
    cout << "¿Está la cadena vacía? " << (phrase.empty() ? "Sí" : "No") << endl;
    cout << "\n";

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
    cout << "\n";
    
    // Crear cadena tipo string
    string str = "Inteligencia Artificial";

    // Obtener una subcadena
    string sub_string = str.substr(13, 10); // "Artificial"
    // Insertar una subcadena
    string new_str = str.insert(0, "La "); // "La Inteligencia Artificial"

    // Imprimir la subcadena y la cadena resultante
    cout << "Subcadena: " << sub_string << endl;
    cout << "Cadena resultante: " << new_str << endl;

    return 0;
}