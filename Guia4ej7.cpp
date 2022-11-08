#include <iostream>
using namespace std;

//Ejercicio 7: Declare un vector Vec de tamaño TAM constante. Cree una función Cuadrado, a la cual se le
//envíe Vec y lo modifique con el cuadrado de sus valores. Otra función que lo muestre. Reutilice

int cuadrado (int vec[]){
    cout<<"Se eleva al cuadrado los valores del arreglo"<<endl;
    for (int i = 0; i < 5; ++i) {
        vec[i]=vec[i]*vec[i];
    }
}

int mostrar (int vec[]){
    cout<<"Se muestra el arreglo"<<endl;
    for (int i = 0; i < 5; ++i) {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int vec[5];
    cout<<"Llene el vector con 5 numeros"<<endl;
    for (int i = 0; i < 5; ++i) {
        cin>>vec[i];
    }
    mostrar(vec);
    cuadrado(vec);
    mostrar(vec);
    return 0;
}
