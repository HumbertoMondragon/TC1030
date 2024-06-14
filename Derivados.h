/*
 *
 * Proyecto Biblioteca clase Derivados
* Humberto Mondragón García
 * A01711912
 * 14/06/2024
 * Estas clases definen objetos de tipo Revista, Libro y Comic que heredan de la clase
 * base abstracta Item. Implementan el método mostrarInfo para mostrar información específica 
 * de cada tipo de artículo. Estas clases son utilizadas por la clase Biblioteca para 
 * manejar diferentes tipos de artículos.
 */

#ifndef DERIVADOS_H
#define DERIVADOS_H

#include "Item.h"
#include <iostream>

using namespace std;

class Revista : public Item {
public:
    Revista(const string& t, const string& a, int i);
    void mostrarInfo() const override;
};

class Libro : public Item {
public:
    Libro(const string& t, const string& a, int i);
    void mostrarInfo() const override;
};

class Comic : public Item {
public:
    Comic(const string& t, const string& a, int i);
    void mostrarInfo() const override;
};

// Implementación de Revista

/**
 * Constructor Revista
 *
 * Inicializa una revista con título, autor y ID.
 *
 * @param string t, título de la revista
 * @param string a, autor de la revista
 * @param int i, ID de la revista
 * @return
 */
Revista::Revista(const string& t, const string& a, int i)
    : Item(t, a, i) {}

/**
 * mostrarInfo muestra la información de la revista
 *
 * Imprime la información de la revista, incluyendo título, autor e ID.
 *
 * @param
 * @return
 */
void Revista::mostrarInfo() const {
    cout << "Revista\n";
    cout << "Titulo: " << titulo << "\nAutor: " << autor << "\nID: " << id << "\n";
}

// Implementación de Libro

/**
 * Constructor Libro
 *
 * Inicializa un libro con título, autor y ID.
 *
 * @param string t, título del libro
 * @param string a, autor del libro
 * @param int i, ID del libro
 * @return
 */
Libro::Libro(const string& t, const string& a, int i)
    : Item(t, a, i) {}

/**
 * mostrarInfo muestra la información del libro
 *
 * Imprime la información del libro, incluyendo título, autor e ID.
 *
 * @param
 * @return
 */
void Libro::mostrarInfo() const {
    cout << "Libro\n";
    cout << "Titulo: " << titulo << "\nAutor: " << autor << "\nID: " << id << "\n";
}

// Implementación de Comic

/**
 * Constructor Comic
 *
 * Inicializa un cómic con título, autor y ID.
 *
 * @param string t, título del cómic
 * @param string a, autor del cómic
 * @param int i, ID del cómic
 * @return
 */
Comic::Comic(const string& t, const string& a, int i)
    : Item(t, a, i) {}

/**
 * mostrarInfo muestra la información del cómic
 *
 * Imprime la información del cómic, incluyendo título, autor e ID.
 *
 * @param
 * @return
 */
void Comic::mostrarInfo() const {
    cout << "Comic\n";
    cout << "Titulo: " << titulo << "\nAutor: " << autor << "\nID: " << id << "\n";
}

#endif // DERIVADOS_H
