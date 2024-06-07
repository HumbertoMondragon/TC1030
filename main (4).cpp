#include "Biblioteca.h"
#include "Derivados.h"
#include <iostream>

using namespace std;

int main() {
    Biblioteca biblioteca;

    biblioteca.agregarItem(new Revista("National Geographic", "Varios", 1));
    biblioteca.agregarItem(new Libro("Cien Años de Soledad", "Gabriel García Márquez", 2));
    biblioteca.agregarItem(new Comic("Spider-Man", "Stan Lee", 3));

    biblioteca.mostrarItems();

    if (biblioteca.rentarItem(2)) {
        cout << "El libro con ID 2 ha sido rentado.\n";
    } else {
        cout << "El libro con ID 2 no está disponible para renta.\n";
    }

    biblioteca.mostrarItems();

    biblioteca.devolverItem(2);
    cout << "El libro con ID 2 ha sido devuelto.\n";

    biblioteca.mostrarItems();

    return 0;
}
