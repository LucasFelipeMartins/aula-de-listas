#ifndef LISTA_H
#define LISTA_H
#include <iostream>

class lista {
public:
    
    lista();
    lista(const lista& orig);
    virtual ~lista();
    void preencher();
    void imprimir();
    void shiftEnd(int num);
    void inserir(int numero, int num);
    void shiftFront(int num);
    void imprimir1();
    
private:
    
    int tam;
    int quant;
    int *list;
    
};

#endif /* LISTA_H */

