#include <iostream>
using namespace std;

//Ejercicio 1. Escriba un procedimiento para la carga de vector. Otra muestra en vector

int vector (int lista[]){
    for (int i = 0; i < 3; ++i) {
        cin>>lista[i];
    }
}

int mostrar (int lista[]){
    for (int i = 0; i < 3; ++i) {
        cout<<lista[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int lista[3];
    cout<<"Ingrese 3 numeros a la lista"<<endl;
    vector(lista);
    mostrar(lista);
    return 0;
}
