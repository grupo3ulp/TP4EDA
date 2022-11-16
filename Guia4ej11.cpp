#include <iostream>
#include <cmath>
using namespace std;

//11. Haga un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido
//por el usuario. Ejemplo, si introducís el número 256.879, debería desplegarse el número 0.879

float decimales(float n) {
    return n - floorf(n);
}

int main() {
    float num;
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
    cout<<"La fraccionaria de "<<num<<" es:"<<decimales(num)<<endl;
    return 0;
}
