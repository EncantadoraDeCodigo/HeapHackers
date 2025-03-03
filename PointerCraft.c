

#include <stdio.h>

    struct Nodo {
        int dato;
        struct Nodo *siguiente;
    };
    
    
 

    int main()
    {
        struct Nodo nodo1, nodo2;
        
        nodo1.dato = 10;
        nodo2.dato= 20;
        
        nodo1.siguiente = &nodo2;
        nodo2.siguiente = NULL;
        
        printf("Nodo 1: %d\n", nodo1.dato);
        printf("Nodo 2: %d\n", nodo1.siguiente->dato);
        
        return 0;
        
    }