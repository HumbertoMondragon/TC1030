# Bibloteca

Este proyecto implementa un sistema de gestión de una biblioteca utilizando C++. La biblioteca puede contener diferentes tipos de artículos (Item), como libros, revistas y cómics. El sistema permite agregar, mostrar, rentar y devolver artículos.

## Estructura del Proyecto

El proyecto se compone de los siguientes archivos:

- Item.h Definen la clase base abstracta Item y sus métodos virtuales.
- Derivados.h  Contienen las definiciones de las clases derivadas Libro, Revista y Comic, que heredan de Item.
- Biblioteca.h Definen la clase Biblioteca, que gestiona una colección de artículos Item.
- main.cpp: Contiene la función main que demuestra el uso de la clase Biblioteca y sus funcionalidades.

## Descripción de las Clases

### Clase Item

La clase Item es una clase base abstracta que define la interfaz común para todos los tipos de artículos en la biblioteca. Contiene métodos virtuales puros que deben ser implementados por las clases derivadas.

### Clases Derivadas

- Libro: Representa un libro en la biblioteca. Implementa los métodos definidos en Item.
- Revista: Representa una revista en la biblioteca. Implementa los métodos definidos en Item.
- Comic: Representa un cómic en la biblioteca. Implementa los métodos definidos en Item.

### Clase Biblioteca

La clase Biblioteca gestiona una colección de artículos Item. Tiene un límite máximo de 100 artículos. Ofrece las siguientes funcionalidades:

- agregarItem: Agrega un nuevo artículo a la colección.
- mostrarItems: Muestra la información de todos los artículos en la colección.
- rentarItem: Marca un artículo como rentado.
- devolverItem: Marca un artículo como devuelto.

## Uso del Programa

### Compilación

Para compilar el programa, usa un compilador de C++ (como g++). Ejecuta el siguiente comando en la terminal:

g++ main.cpp Biblioteca.cpp Derivados.cpp -o biblioteca

## ¿Qué haría que no funcionara?
La clase Biblioteca tiene un límite máximo de 100 artículos, por lo que agregar más haría que no funcionara.
Los objetos se tienen que crear con new
Para el nombre se necesita un string, por lo que si el usuario pone otro tipo de dato no funcionaría

## Documentación
En Biblioteca.cpp utilizo un operador terciario "?"

Según la documentación

```Evaluates its first operand, and, if the resulting value is not equal to zero, evaluates its second operand. Otherwise, it evaluates its third operand, as shown in the following example:

a = b ? c : d;
is equivalent to:

if (b)
    a = c;
else 
    a = d;
````
https://riptutorial.com/c/example/2158/conditional-operator-ternary-operator
