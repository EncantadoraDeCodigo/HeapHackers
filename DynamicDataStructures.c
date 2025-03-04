#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};

struct Nodo *crearNodo(int dato)
{                                                                        // devuelve un puntero a un nodo
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo)); // reserva dinamicamentr memoria
    nuevoNodo->dato = dato;
}
