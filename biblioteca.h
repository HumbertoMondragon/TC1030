/*
 *
 * Proyecto Biblioteca clase Biblioteca
* Humberto Mondragón García
 * A01711912
 * 14/06/2024
 * Esta clase define un objeto de tipo Biblioteca que contiene todas las operaciones
 * para gestionar artículos como revistas, libros y cómics, permitiendo agregarlos, 
 * mostrarlos, rentarlos y devolverlos. Esta clase es utilizada por la función principal 
 * del programa y es parte del proyecto Biblioteca.
 */

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Item.h"
#include <iostream>

using namespace std;

class Biblioteca {
private:
    static const int MAX_ITEMS = 100;
    Item* items[MAX_ITEMS];
    int itemCount;

public:
    Biblioteca();

    bool agregarItem(Item* item);
    void mostrarItems() const;
    bool rentarItem(int id);
    void devolverItem(int id);
};

/**
 * Constructor Biblioteca
 *
 * Inicializa una biblioteca vacía con capacidad para MAX_ITEMS.
 *
 * @param
 * @return
 */
Biblioteca::Biblioteca() : itemCount(0) {
    for (int i = 0; i < MAX_ITEMS; ++i) {
        items[i] = nullptr;
    }
}

/**
 * agregarItem agrega un artículo a la biblioteca
 *
 * Agrega un nuevo artículo a la biblioteca si no se ha alcanzado la capacidad máxima.
 *
 * @param Item* item, el artículo a agregar
 * @return bool, true si el artículo se agregó exitosamente, false si no
 */
bool Biblioteca::agregarItem(Item* item) {
    if (itemCount >= MAX_ITEMS) {
        cout << "No se pueden agregar más artículos. Capacidad máxima alcanzada." << endl;
        return false;
    }
    items[itemCount++] = item;
    return true;
}

/**
 * mostrarItems muestra todos los artículos de la biblioteca
 *
 * Imprime la información de todos los artículos en la biblioteca, indicando si están rentados o disponibles.
 *
 * @param
 * @return
 */
void Biblioteca::mostrarItems() const {
    for (int i = 0; i < itemCount; ++i) {
        if (items[i] != nullptr) { 
            items[i]->mostrarInfo();
            cout << (items[i]->estaRentado() ? "Estado: Rentado\n" : "Estado: Disponible\n");
            cout << "--\n";
        }
    }
}

/**
 * rentarItem renta un artículo de la biblioteca
 *
 * Marca un artículo como rentado si está disponible.
 *
 * @param int id, el ID del artículo a rentar
 * @return bool, true si el artículo se rentó exitosamente, false si no
 */
bool Biblioteca::rentarItem(int id) {
    for (int i = 0; i < itemCount; ++i) {
        if (items[i] != nullptr && items[i]->getID() == id && !items[i]->estaRentado()) {
            items[i]->rentar();
            return true;
        }
    }
    return false; // No se encontró el ítem o ya está rentado
}

/**
 * devolverItem devuelve un artículo a la biblioteca
 *
 * Marca un artículo como disponible si estaba rentado.
 *
 * @param int id, el ID del artículo a devolver
 * @return
 */
void Biblioteca::devolverItem(int id) {
    for (int i = 0; i < itemCount; ++i) {
        if (items[i] != nullptr && items[i]->getID() == id && items[i]->estaRentado()) {
            items[i]->devolver();
            break;
        }
    }
}

#endif // BIBLIOTECA_H
