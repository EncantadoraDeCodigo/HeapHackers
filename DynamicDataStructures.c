#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};

struct Nodo *crearNodo(int dato)
{
    struct Nodo *nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    return nuevoNodo;
};

void insertarInicio(struct Nodo** cabeza, int dato){
    struct Nodo* nuevoNodo = crearNodo(dato);
    nuevoNodo->siguiente= *cabeza;
    *cabeza = nuevoNodo;
}