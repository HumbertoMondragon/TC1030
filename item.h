/*
 *
 * Proyecto Biblioteca clase abstracta Item
 * Humberto Mondragón García
 * A01711912
 * 14/06/2024
 * Esta clase define un objeto abstracto de tipo Item que contiene las propiedades
 * y métodos comunes a todos los artículos en la biblioteca, como título, autor, ID,
 * y estado de renta. Esta clase es utilizada como base para las clases derivadas 
 * Revista, Libro y Comic.
 */

#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item {
protected:
    string titulo;
    string autor;
    int id;
    bool isRented;

public:
    Item(const string& t, const string& a, int i);
    virtual void mostrarInfo() const = 0; 
    bool estaRentado() const;
    void rentar();
    void devolver();
    int getID() const;
};

/**
 * Constructor Item
 *
 * Inicializa un artículo con título, autor, ID y establece su estado de renta en false.
 *
 * @param string t, título del artículo
 * @param string a, autor del artículo
 * @param int i, ID del artículo
 * @return
 */
Item::Item(const string& t, const string& a, int i)
    : titulo(t), autor(a), id(i), isRented(false) {}

/**
 * estaRentado verifica si el artículo está rentado
 *
 * Retorna true si el artículo está rentado, false en caso contrario.
 *
 * @param
 * @return bool, estado de renta del artículo
 */
bool Item::estaRentado() const {
    return isRented;
}

/**
 * rentar marca el artículo como rentado
 *
 * Establece el estado de renta del artículo en true.
 *
 * @param
 * @return
 */
void Item::rentar() {
    isRented = true;
}

/**
 * devolver marca el artículo como disponible
 *
 * Establece el estado de renta del artículo en false.
 *
 * @param
 * @return
 */
void Item::devolver() {
    isRented = false;
}

/**
 * getID obtiene el ID del artículo
 *
 * Retorna el ID del artículo.
 *
 * @param
 * @return int, ID del artículo
 */
int Item::getID() const {
    return id;
}

#endif // ITEM_H
