#include <iostream>
using namespace std;

//6. Realice un programa que contenga las siguientes funciones o procedimientos según sea:
//• cargaMatriz: que carga una matriz de 4 por 4 con números reales ingresados por el usuario
//• muestraMatriz: nos muestra en pantalla la matriz de 4 por 4 recibida por parámetro
//• intercambioDiagonal: recibe 2 matrices por parámetro e intercambia los valores de las diagonales de ambas.
//Escriba un programa que llame a las funciones en el siguiente orden: carga (para las 2 matrices),
//muestra (para las 2 matrices), intercambia, muestra (para las 2 matrices).

int cargaMatriz (int matriz1[4][4], int matriz2[4][4], int aux1[], int aux2[]){
    cout<<"Ingrese los valores de la primera matriz"<<endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin>>matriz1[i][j];
            if(i==j){
                aux1[i]=matriz1[i][j];
            }
        }
    }

    cout<<"Ingrese los valores de la segunda matriz"<<endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin>>matriz2[i][j];
            if(i==j){
                aux2[i]=matriz2[i][j];
            }
        }
    }
};

int mostrarMatrices (int matriz1[4][4], int matriz2[4][4]){
    cout<<"Se muestra la primera matriz"<<endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout<<matriz1[i][j];
        }
        cout<<endl;
    }

    cout<<"Se muestra la segunda matriz"<<endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout<<matriz2[i][j];
        }
        cout<<endl;
    }
}

int intercambioDiagonal (int matriz1[4][4], int matriz2[4][4], int aux1[], int aux2[]){
    cout<<"Se intercambian las diagonales de las matrices"<<endl;
    for (int i = 0; i < 4; ++i) {
        matriz1[i][i]=aux2[i];
    }
    for (int i = 0; i < 4; ++i) {
        matriz2[i][i]=aux1[i];
    }
}

int main() {
    int matriz1[4][4], matriz2[4][4], aux1[4], aux2[4];
    cargaMatriz(matriz1,matriz2,aux1,aux2);
    mostrarMatrices(matriz1, matriz2);
    intercambioDiagonal(matriz1,matriz2,aux1,aux2);
    cout<<"Se muestran las matrices con las diagonales cambiadas"<<endl;
    mostrarMatrices(matriz1, matriz2);
    return 0;
}
