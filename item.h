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

Item::Item(const string& t, const string& a, int i)
    : titulo(t), autor(a), id(i), isRented(false) {}

bool Item::estaRentado() const {
    return isRented;
}

void Item::rentar() {
    isRented = true;
}

void Item::devolver() {
    isRented = false;
}

int Item::getID() const {
    return id;
}

#endif // ITEM_H
