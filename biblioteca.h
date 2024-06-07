#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Item.h"

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

#endif // BIBLIOTECA_H
