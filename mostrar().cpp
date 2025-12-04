#include <iostream>
#include <string>
#include <vector> // Para un ejemplo más complejo

void mostrar(int valor) {
 std::cout << "Entero: " << valor << std::endl;
}
void mostrar(double valor) {
 std::cout << "Double: " << valor << std::endl;
}
void mostrar(const std::string& valor) { // Pasamos string por referencia constante
 std::cout << "String: \"" << valor << "\"" << std::endl;
}
void mostrar(char valor) {
 std::cout << "Caracter: '" << valor << "'" << std::endl;
}
// Podríamos incluso sobrecargar para un vector de enteros
void mostrar(const std::vector<int>& miVector) {
 std::cout << "Vector de enteros: [ ";
 for (size_t i = 0; i < miVector.size(); ++i) {
 std::cout << miVector[i] << (i == miVector.size() - 1 ? "" : ", ");
 }
 std::cout << " ]" << std::endl;
}

int main() {
    mostrar(100);
    mostrar(3.14159);
    mostrar(std::string("Hola POO!"));
    mostrar('A');
    std::vector<int> numeros = {1, 2, 3,
    4, 5};
    mostrar(numeros);
    std::cout<<"\n TEAM IF-ELSE";
    std::cout<<"\n Ana Maydana Espejo";

    return 0;
}

