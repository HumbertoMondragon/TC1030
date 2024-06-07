#include "Item.h"
#include <iostream>

using namespace std;

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