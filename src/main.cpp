#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "Vector.hpp"

using namespace std;

int main(){ 
    srand(time(0));
    Vector v;
    int n = 0;
    int random=0;

    cout<<"Ingrese n : ";
    cin>>n;
    n=n*4;
    for(int i=0;i<n;i++){
        random=rand()%2;
        //cout<<i<<" "<<random<<endl
        if(random==0){
            cout<<"In: "<<v.push((rand()%(10*n))+1)<<" ";
            cout.width(2);
            v.print();
            //cout<<"Cantidad : "<<v.getCantidad()<<endl;
            //cout<<"Capacidad : "<<v.getCapacidad()<<endl;
            cout<<endl;
        }
        else if(random==1){
            cout<<"Out: "<<v.pop()<<" ";
            v.print();
            //cout<<"Cantidad : "<<v.getCantidad()<<endl;
            //cout<<"Capacidad : "<<v.getCapacidad()<<endl;
            cout<<endl;
        }
    }


    return 0;
}
