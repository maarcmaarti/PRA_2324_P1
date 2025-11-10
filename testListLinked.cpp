#include <iostream>
#include "ListLinked.h"

int main() {
    std::cout << std::boolalpha;

    ListLinked<int> miLista;

    std::cout << "Estado inicial de la lista:" << std::endl;
    std::cout << miLista << std::endl;
    std::cout << "Tamaño: " << miLista.size() << ", Vacía: " << miLista.empty() << std::endl;
    std::cout << std::endl;

    miLista.insert(0, 7);
    miLista.insert(1, 20);
    miLista.insert(0, -3);
    miLista.insert(2, 10);

    std::cout << "Después de insertar varios elementos:" << std::endl;
    std::cout << miLista << std::endl;
    std::cout << "Tamaño: " << miLista.size() << ", Vacía: " << miLista.empty() << std::endl;
    std::cout << std::endl;

    std::cout << "miLista.get(0) => " << miLista.get(0) << ", miLista[0] => " << miLista[0] << std::endl;
    std::cout << "miLista.get(3) => " << miLista.get(3) << ", miLista[3] => " << miLista[3] << std::endl;
    std::cout << std::endl;

    int valorEliminado;
    valorEliminado = miLista.remove(3);
    std::cout << "remove(3) => " << valorEliminado << std::endl;
    valorEliminado = miLista.remove(1);
    std::cout << "remove(1) => " << valorEliminado << std::endl;
    valorEliminado = miLista.remove(0);
    std::cout << "remove(0) => " << valorEliminado << std::endl;
    std::cout << std::endl;

    std::cout << "Lista tras eliminar elementos:" << std::endl;
    std::cout << miLista << std::endl;
    std::cout << "Tamaño: " << miLista.size() << ", Vacía: " << miLista.empty() << std::endl;
    std::cout << std::endl;

    miLista.append(42);
    miLista.prepend(-10);

    std::cout << "Lista tras append y prepend:" << std::endl;
    std::cout << miLista << std::endl;
    std::cout << "Tamaño: " << miLista.size() << ", Vacía: " << miLista.empty() << std::endl;
    std::cout << std::endl;

    std::cout << "search(42) => " << miLista.search(42) << std::endl;
    std::cout << "search(100) => " << miLista.search(100) << std::endl;

    try {
        miLista.insert(-5, 999);
    } catch (std::out_of_range &e) {
        std::cout << "insert(-5, 999) => excepción: " << e.what() << std::endl;
    }

    try {
        miLista.get(10);
    } catch (std::out_of_range &e) {
        std::cout << "get(10) => excepción: " << e.what() << std::endl;
    }

    try {
        miLista.remove(7);
    } catch (std::out_of_range &e) {
        std::cout << "remove(7) => excepción: " << e.what() << std::endl;
    }

    return 0;
}
