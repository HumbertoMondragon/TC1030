#ifndef DERIVADOS_H
#define DERIVADOS_H
#include <iostream>

#include "Item.h"

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
Revista::Revista(const string& t, const string& a, int i)
    : Item(t, a, i) {}

void Revista::mostrarInfo() const {
    cout << "Revista\n";
    cout << "Titulo: " << titulo << "\nAutor: " << autor << "\nID: " << id << "\n";
}


Libro::Libro(const string& t, const string& a, int i)
    : Item(t, a, i) {}

void Libro::mostrarInfo() const {
    cout << "Libro\n";
    cout << "Titulo: " << titulo << "\nAutor: " << autor << "\nID: " << id << "\n";
}

// Implementación de Comic
Comic::Comic(const string& t, const string& a, int i)
    : Item(t, a, i) {}

void Comic::mostrarInfo() const {
    cout << "Comic\n";
    cout << "Titulo: " << titulo << "\nAutor: " << autor << "\nID: " << id << "\n";
}
#endif // DERIVADOS_H
