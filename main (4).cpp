#include "Biblioteca.h"
#include "Derivados.h"
#include <iostream>

using namespace std;

void mostrarMenu() {
    cout << "1. Agregar item" << endl;
    cout << "2. Mostrar items" << endl;
    cout << "3. Rentar item" << endl;
    cout << "4. Devolver item" << endl;
    cout << "5. Salir" << endl;
}

int main() {
    Biblioteca biblioteca;
    int opcion;

    while (true) {
        mostrarMenu();
        cout << "Selecciona una opción: ";
        cin >> opcion;

        if (opcion == 5) {
            break;
        }

        switch (opcion) {
            case 1: {
                int tipo;
                cout << "Selecciona el tipo de item (1. Revista, 2. Libro, 3. Comic): ";
                cin >> tipo;

                string titulo, autor;
                int id;
                cout << "Ingresa el título: ";
                cin.ignore(); // Para limpiar el buffer
                getline(cin, titulo);
                cout << "Ingresa el autor: ";
                getline(cin, autor);
                cout << "Ingresa el ID: ";
                cin >> id;

                if (tipo == 1) {
                    biblioteca.agregarItem(new Revista(titulo, autor, id));
                } else if (tipo == 2) {
                    biblioteca.agregarItem(new Libro(titulo, autor, id));
                } else if (tipo == 3) {
                    biblioteca.agregarItem(new Comic(titulo, autor, id));
                } else {
                    cout << "Tipo de item no válido." << endl;
                }
                break;
            }
            case 2:
                biblioteca.mostrarItems();
                break;
            case 3: {
                int id;
                cout << "Ingresa el ID del item a rentar: ";
                cin >> id;
                biblioteca.rentarItem(id);
                break;
            }
            case 4: {
                int id;
                cout << "Ingresa el ID del item a devolver: ";
                cin >> id;
                biblioteca.devolverItem(id);
                break;
            }
            default:
                cout << "Opción no válida." << endl;
        }
    }

    return 0;
}
