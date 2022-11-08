#include <iostream>
#include <cmath>
using namespace std;

//11. Haga un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido
//por el usuario. Ejemplo, si introducís el número 256.879, debería desplegarse el número 0.879

float fraccionaria (float num){
    float frac;
    if(num<0){
        frac = num - floorf(num);
    }else if(num>0){
        frac = num - floorf(num);
    }else{
        frac = 0;
    }
    return frac;
}

int main() {
    float num;
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
    cout<<"La fraccinaria de "<<num<<" es:"<<endl;
    cout<<fraccionaria(num)<<endl;
    return 0;
}
