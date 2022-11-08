/*Un número es primo si solo es divisible por la unidad y por si mismo. Defina una función que determina si un número es
 * primo, debe recibir el número y retornar verdadero o falso.
- Realice un programa que, de 2 opciones, 1). Determinar si un número es primo 2). Calcular todos los números primos menores
 a un número ingresado por el usuario. El usuario debe poder realizar estas opciones todas las veces que desee.*/

#include <iostream>

using namespace std;

bool esPrimo(int n) {
    int c = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            c++;
        }
    }
    if (c == 2) {
        return true;
    } else {
        return false;
    }

}

string mostrarPrimosMenores(int n){
    for (int i = 1; i <= n; ++i) {
        if(esPrimo(i)){
            cout<<"El numero "<<i<<" es primo"<< endl;
        }
    }
}

int main() {
    int n,opcion;
    cout<<"Ingrese un valor entero positivo"<<endl;
    cin>>n;
    do {
        cout<<"1.Determinar si el número es primo"<<endl;
        cout<<"2.Calcular todos los números primos menores a un número ingresado"<<endl;
        cout<<"3.Salir"<<endl;
        cin>>opcion;
        switch (opcion) {
            case 1:{
                if(esPrimo(n)){
                    cout<<"el numero es primo"<<endl;
                }else{
                    cout<<"el numero no es primo"<<endl;
                }
                break;
            }

            case 2:{
                mostrarPrimosMenores(n);
                break;
            }
            case 3:{
                break;
            }
            default:{
                cout<<"El valor ingresado no es valido"<<endl;
                break;
            }

        }
        cout<<"-----------------"<<endl;
    } while (opcion!=3);


    return 0;
}
