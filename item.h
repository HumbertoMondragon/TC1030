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
    virtual void mostrarInfo() const = 0; // Método puro virtual
    bool estaRentado() const;
    void rentar();
    void devolver();
    int getID() const;
};

#endif // ITEM_H