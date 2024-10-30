#include <cstdlib>
#include <iostream>
#include "lista.h"

using namespace std;

int main(int argc, char** argv) {
    
    lista l;
    int num = 0;
    int numero = 9;
    
    cout << "Digite os numeros a baixo: " << endl;
    l.preencher();
    cout << "------------------------" << endl;
    l.imprimir();
    cout << endl;
    cout << "O ultimo numero zero representa o espaco vazio da lista" << endl;
    cout << endl;
    cout << "Agora vai passar cada elemento da lista pra frente e o zero vai sumir" << endl;
    l.shiftEnd(num);
    l.imprimir();
    cout << endl;
    cout << endl;
    cout << "agora vou inseri o numero que eu quero (no caso e o numero 9) no espaco onde eu quiser que esta definido pela variavel (num)" << endl;
    l.inserir(numero,num);
    l.imprimir();
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "Excluir" << endl;
    
    l.shiftFront(num);
    l.imprimir1();
    
    return 0;
}

