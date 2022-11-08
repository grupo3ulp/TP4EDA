#include <iostream>
using namespace std;

//15. Realice una función que reciba un número y devuelva el factorial del mismo. El factorial de un
//número: es el producto del número por todos sus antecesores hasta 1. Ejemplos:
//• Factorial de 0 es 1 (por definición) Se denota 0!=1
//• Factorial de 1 es 1 Se denota 1!=1
//• Factorial de 4= 4*3*2*1 Se denota 4!=24
//• Factorial de 10= 10*9*8*7*6*5*4*3*2*1 Se denota 10!= 3.628.800

int factorial(int a){
    int fact = a;
    if (a==0){
        fact = 1;
    }else {
        for (int i = a - 1; i > 1; --i) {
            fact = fact * i;
        }
    }
    return fact;
}

int main() {
    int a;
    cout<<"Ingrese un numero para sacar el factorial"<<endl;
    cin>>a;
    cout<<"El factorial de ese numero es"<<endl;
    cout<<factorial(a)<<endl;
    return 0;
}
