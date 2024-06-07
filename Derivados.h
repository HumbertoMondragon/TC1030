#ifndef DERIVADOS_H
#define DERIVADOS_H

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

#endif // DERIVADOS_H