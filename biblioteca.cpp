#include "Biblioteca.h"
#include <iostream>

using namespace std;

Biblioteca::Biblioteca() : itemCount(0) {
    for (int i = 0; i < MAX_ITEMS; ++i) {
        items[i] = nullptr;
    }
}

bool Biblioteca::agregarItem(Item* item) {
    if (itemCount >= MAX_ITEMS) {
        cout << "No se pueden agregar más artículos. Capacidad máxima alcanzada." << endl;
        return false;
    }
    items[itemCount++] = item;
    return true;
}

void Biblioteca::mostrarItems() const {
    for (int i = 0; i < itemCount; ++i) {
        if (items[i] != nullptr) {
            items[i]->mostrarInfo();
            cout << (items[i]->estaRentado() ? "Estado: Rentado\n" : "Estado: Disponible\n");
            cout << "-----------------\n";
        }
    }
}

bool Biblioteca::rentarItem(int id) {
    for (int i = 0; i < itemCount; ++i) {
        if (items[i] != nullptr && items[i]->getID() == id && !items[i]->estaRentado()) {
            items[i]->rentar();
            return true;
        }
    }
    return false; // No se encontró el ítem o ya está rentado
}

void Biblioteca::devolverItem(int id) {
    for (int i = 0; i < itemCount; ++i) {
        if (items[i] != nullptr && items[i]->getID() == id && items[i]->estaRentado()) {
            items[i]->devolver();
            break;
        }
    }
}