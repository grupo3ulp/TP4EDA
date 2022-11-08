#include <iostream>
using namespace std;

//Ejercicio 2: Escriba una función que reciba un vector y suma sus elementos pares, reutilizar las funciones
//del punto 1 para cargar y mostrar los vectores

int vector (int lista[]){
    for (int i = 0; i < 6; ++i) {
        cin>>lista[i];
    }
}

int mostrarPares (int lista[]){
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        cout<<lista[i]<<" ";
        if(lista[i]%2==0){
            sum = sum + lista[i];
        }
    }
    cout<<endl;
    cout<<"La suma de los numeros pares del vector es:"<<endl;
    cout<<sum<<endl;
}

int main() {
    int lista[6];
    cout<<"Ingrese 6 numeros a la lista"<<endl;
    vector(lista);
    cout<<"Se muestra el vector:"<<endl;
    mostrarPares(lista);
    return 0;
}
