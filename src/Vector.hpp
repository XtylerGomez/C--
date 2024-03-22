#ifndef Vector_hpp
#define Vector_hpp

class Vector{
    private:
    int* vector;
    int cantidad;
    int capacidad;

    public:
    Vector();
    void destruirVector();
    int push(int x);
    int pop();
    bool isEmpty(){return cantidad==0;};
    bool isFull(){return cantidad==capacidad;}
    int getCantidad(){return cantidad;};
    int getCapacidad(){return capacidad;};
    void print();
};

#endif