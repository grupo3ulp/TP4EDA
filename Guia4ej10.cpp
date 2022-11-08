#include <iostream>
using namespace std;

//Ejercicio 10: Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una
//potencia en número entero positivo y despliegue el resultado. El número entero positivo deberá
//ser el segundo valor transmitido a la función.

int funpot(int a, int b){
    int pot = 1;
    if (b==0){
        pot==1;
    }else {
        for (int i = 0; i < b; ++i) {
            pot = pot * a;
        }
    }
    return pot;
}

int main() {
    int a, b;
    cout<<"Ingrese un numero entero"<<endl;
    cin>>a;
    cout<<"Ingrese un numero entero al cual elevar el numero anterior"<<endl;
    cin>>b;
    cout<<funpot(a, b)<<endl;
    return 0;
}
