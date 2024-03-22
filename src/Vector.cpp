#include "Vector.hpp"
#include <iostream>

using namespace std;

Vector::Vector(){
    this->vector= new int[1];
    this->capacidad=1;
    this->cantidad=0;
}

void Vector::destruirVector(){
    delete []vector;
}

int Vector::push(int x){
    vector[cantidad]=x;
    cantidad++;
    if(isFull()){
        capacidad=capacidad*2;
        int* temp= new int[capacidad];
        for(int i=0;i<capacidad;i++){
            temp[i]=vector[i];
        }
        destruirVector();
        this->vector=temp;
    }
    return x;
}

int Vector::pop(){
    if(isEmpty()){
        cout<<"Pila Vacia"<<endl;
        return 0;
    }else{
        int x=vector[cantidad-1];
        cantidad--;
        if(cantidad<=capacidad/4){
            capacidad=capacidad/2;
            int* temp= new int[capacidad];
            for(int i=0;i<capacidad;i++){
                temp[i]=vector[i];
            }
            destruirVector();
            this->vector=temp;
        }
        return x;
    }
    
}

void Vector::print(){
        cout<<"[";
        for(int i=0;i<cantidad;i++){
            cout<<vector[i];
            cout<<" ";
        }
        for(int i=cantidad;i<capacidad;i++){
            cout<<" _ ";
        }
        cout<<"]"<<endl;
    
}



