#include <iostream>
#include <string>
using namespace std;

// Clase madre Libro
class Libro {
protected:
    string titulo;
    int id;
    bool disponible;

public:
    Libro(string t, int i) : titulo(t), id(i), disponible(true) {}

    void mostrar() {  
        cout << "Título: " << titulo << "\nID: " << id << "\nDisponible: " << (disponible ? "Sí" : "No") << endl;
    }

    void prestar() { 
        if (disponible) {
            disponible = false;
            cout << "Libro prestado." << endl;
        } else {
            cout << "El libro no está disponible." << endl;
        }
    }

    void devolver() {  
        disponible = true;
        cout << "Libro devuelto." << endl;
    }

    // Función mostrar con parámetro adicional
    void mostrar(bool detalle) {
        if (detalle) {
            cout << "Título: " << titulo << "\nID: " << id << "\nDisponible: " << (disponible ? "Sí" : "No") << endl;
        } else {
            cout << "Título: " << titulo << "\nID: " << id << endl;
        }
    }
};

// Clase hija Novela
class Novela : public Libro {
private:
    string autor;

public:
    Novela(string t, int i, string a) : Libro(t, i), autor(a) {}

    void mostrar() {  // Sobrescritura 
        Libro::mostrar();
        cout << "Autor: " << autor << endl;
    }

    void mostrar(bool detalle) {  // Sobrecarga
        if (detalle) {
            Libro::mostrar();
            cout << "Autor: " << autor << endl;
        } else {
            cout << "Título: " << titulo << "\nID: " << id << endl;
        }
    }

    void prestar() {  // Sobrescritura 
        if (disponible) {
            disponible = false;
            cout << "La novela \"" << titulo << "\" ha sido prestada." << endl;
        } else {
            cout << "La novela \"" << titulo << "\" no está disponible." << endl;
        }
    }
};

// Clase hija Poesia
class Poesia : public Libro {
private:
    string autor;

public:
    Poesia(string t, int i, string a) : Libro(t, i), autor(a) {}

    void mostrar() {  // Sobrescritura 
        Libro::mostrar();
        cout << "Autor: " << autor << endl;
    }

    void mostrar(bool detalle) {  // Sobrecarga
        if (detalle) {
            Libro::mostrar();
            cout << "Autor: " << autor << endl;
        } else {
            cout << "Título: " << titulo << "\nID: " << id << endl;
        }
    }

    void prestar() {  // Sobrescritura
        if (disponible) {
            disponible = false;
            cout << "El libro de poesía \"" << titulo << "\" ha sido prestado." << endl;
        } else {
            cout << "El libro de poesía \"" << titulo << "\" no está disponible." << endl;
        }
    }
};

int main() {
    Novela n("Don Quijote", 1, "Miguel de Cervantes");
    Poesia p("Veinte poemas de amor", 2, "Pablo Neruda");

    n.prestar();  
    p.prestar();  

    n.mostrar();  
    p.mostrar(); 

    
    n.mostrar(false);  
    p.mostrar(true);   

    return 0;
}
