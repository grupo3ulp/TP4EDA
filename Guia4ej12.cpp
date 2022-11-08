#include <iostream>
using namespace std;

//12. Escriba una función llamada maximo() que devuelva el valor máximo de tres argumentos que se
//transmitan a la función cuando sea llamada. Suponga que los tres argumentos serán del mismo
//tipo de datos.

int maximo (int a, int b, int c){
    int mayor = a;
    if (b>a){
        mayor = b;
        if(c>b){
            mayor = c;
        }
    }else if(c>a){
        mayor = c;
    }
    return mayor;
}

int main() {
    int a, b, c;
    cout<<"Ingrese 3 valores distintos"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"El numero maximo es: "<<endl;
    cout<<maximo(a, b, c)<<endl;
    return 0;
}
