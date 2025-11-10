#include <iostream>
#include "ListLinked.h"

int main() {
    std::cout << std::boolalpha;

    ListLinked<int> list;

    std::cout << "Lista inicial:" << std::endl;
    std::cout << list << std::endl;
    std::cout << "¿Vacía?: " << list.empty() << ", tamaño: " << list.size() << std::endl;
    std::cout << std::endl;

    list.insert(0, 100);
    list.insert(1, 200);
    list.insert(0, 50);
    list.insert(2, 150);

    std::cout << "Después de insertar elementos:" << std::endl;
    std::cout << list << std::endl;
    std::cout << "¿Vacía?: " << list.empty() << ", tamaño: " << list.size() << std::endl;
    std::cout << std::endl;

    std::cout << "list.get(0) => " << list.get(0) << ", list[0] => " << list[0] << std::endl;
    std::cout << "list.get(3) => " << list.get(3) << ", list[3] => " << list[3] << std::endl;
    std::cout << std::endl;

    int r;
    r = list.remove(3);
    std::cout << "remove(3) => " << r << std::endl;
    r = list.remove(1);
    std::cout << "remove(1) => " << r << std::endl;
    r = list.remove(0);
    std::cout << "remove(0) => " << r << std::endl;
    std::cout << std::endl;

    std::cout << "Lista tras eliminar elementos:" << std::endl;
    std::cout << list << std::endl;
    std::cout << "¿Vacía?: " << list.empty() << ", tamaño: " << list.size() << std::endl;
    std::cout << std::endl;

    list.append(300);
    list.prepend(25);

    std::cout << "Lista final:" << std::endl;
    std::cout << list << std::endl;
    std::cout << "¿Vacía?: " << list.empty() << ", tamaño: " << list.size() << std::endl;
    std::cout << std::endl;

    std::cout << "search(300) => " << list.search(300) << std::endl;
    std::cout << "search(999) => " << list.search(999) << std::endl;

    try {
        list.insert(-1, 999);
    } catch (std::out_of_range &e) {
        std::cout << "insert(-1, 999) => excepción: " << e.what() << std::endl;
    }

    try {
        list.get(10);
    } catch (std::out_of_range &e) {
        std::cout << "get(10) => excepción: " << e.what() << std::endl;
    }

    try {
        list.remove(5);
    } catch (std::out_of_range &e) {
        std::cout << "remove(5) => excepción: " << e.what() << std::endl;
    }

    return 0;
}
