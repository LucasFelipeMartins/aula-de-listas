#include "lista.h"
#include <iostream>

using namespace std;

lista::lista() {
    
    this->tam = 6;
    this->quant= 5;
    this->list = new int[tam];
}

lista::lista(const lista& orig) {
}

void lista::shiftEnd(int num){
    
    for(int i = quant; i > num; i--){
        
        list[i] = list[i - 1];
        
    }
    
        
}

void lista::preencher(){
    
    for (int i = 0; i < quant; i++){
        
        cin >> list[i];
        
        
    }
    
    
}

void lista::imprimir(){
    
    for (int i = 0; i < tam; i++){
        
        cout << list[i];
        
    }
    
    
}

void lista::inserir(int numero, int num){
    
    list[num] = numero;
    
}

void lista::shiftFront(int num){
    
    for(int i = num; i < quant; i++){
        
        list[i] = list[i + 1];
        
    }
    
       
}

void lista::imprimir1(){
    
    for (int i = 0; i < tam - 1; i++){
        
        cout << list[i];
        
    }
    
    
}


lista::~lista() {
}

