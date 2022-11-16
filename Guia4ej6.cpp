#include <iostream>
using namespace std;

//6. Realice un programa que contenga las siguientes funciones o procedimientos según sea:
//• cargaMatriz: que carga una matriz de 4 por 4 con números reales ingresados por el usuario
//• muestraMatriz: nos muestra en pantalla la matriz de 4 por 4 recibida por parámetro
//• intercambioDiagonal: recibe 2 matrices por parámetro e intercambia los valores de las diagonales de ambas.
//Escriba un programa que llame a las funciones en el siguiente orden: carga (para las 2 matrices),
//muestra (para las 2 matrices), intercambia, muestra (para las 2 matrices).

void cargaMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << "Ingrese posicion [" << i << "][" << j << "] de la matriz" << endl;
            cin >> matriz[i][j];
        }
    }
}

void muestraMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << matriz[i][j] << "_";
        }
        cout << endl;
    }
}

void intercambiaDiagonal(int matriz1[4][4], int matriz2[4][4]) {
    int aux;
    for (int i = 0; i < 4; ++i) {
        aux = matriz1[i][i];
        matriz1[i][i] = matriz2[i][i];
        matriz2[i][i] = aux;
    }

}

int main() {
    int matriz1[4][4];
    int matriz2[4][4];
    cout << "Matriz 1:" << endl;
    cargaMatriz(matriz1);
    cout << "-----------------------------------------------------------" << endl;
    cout << "Matriz 2:" << endl;
    cargaMatriz(matriz2);
    cout << "-----------------------------------------------------------" << endl;
    cout << "Matriz 1 queda:" << endl;
    muestraMatriz(matriz1);
    cout << "-----------------------------------------------------------" << endl;
    cout << "Matriz 2 queda:" << endl;
    muestraMatriz(matriz2);
    cout << "-----------------------------------------------------------" << endl;
    cout << "Intercambiamos diagonales" << endl;
    intercambiaDiagonal(matriz1, matriz2);
    cout << "-----------------------------------------------------------" << endl;
    cout << "Matriz 1 queda:" << endl;
    muestraMatriz(matriz1);
    cout << "-----------------------------------------------------------" << endl;
    cout << "Matriz 2 queda:" << endl;
    muestraMatriz(matriz2);
    return 0;
}
