#include "Derivados.h"
#include <iostream>

using namespace std;

// Implementación de Revista
Revista::Revista(const string& t, const string& a, int i)
    : Item(t, a, i) {}

void Revista::mostrarInfo() const {
    cout << "Revista\n";
    cout << "Titulo: " << titulo << "\nAutor: " << autor << "\nID: " << id << "\n";
}

// Implementación de Libro
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