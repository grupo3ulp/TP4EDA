#include <iostream>
using namespace std;

//9. Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de
//los elementos almacenados en dicha fila.

int menor (int matriz[5][5]){
    int filas, menorF;
    do {
        cout<<"La matriz solo tiene 5 filas, ingrese un numero menor o igual a ese y mayor a cero"<<endl;
        cin>>filas;
    } while (filas>5 || filas<1);
    filas--;
    menorF=matriz[filas][0];
    for (int i = 0; i < 5; ++i) {
        if (matriz[filas][i]<menorF){
            menorF=matriz[filas][i];
        }
    }
    filas++;
    cout<<"El numero mas chico de la fila "<<filas<<" es:"<<endl;
    return menorF;
}

int main() {
    int matriz[5][5];
    cout<<"Ingrese los valores de la matriz"<<endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin>>matriz[i][j];
        }
    }
    cout<<"Mostramos la matriz"<<endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"---------------------------"<<endl;
    cout<<menor(matriz)<<endl;
    return 0;
}
