/*Escriba un procedimiento para la carga de vector. Otra muestra en vector*/

#include <iostream>
using namespace std;

void llenarVector(int vector[], int n){
    cout << "A continuación ingrese los números que desea guardar en su vector" << endl;
    for (size_t i = 0; i < n; i++)    {
        cout << "Posición [" << i << "]" <<endl;
        cin >> vector[i];
    }
}

void mostrarVector(int vector[], int n){
    for (size_t i = 0; i < n; i++)    {
        cout << "Posición [" << i << "]: " << vector[i] << endl;
    }
    
}

int main(){
    int n;
    cout << "¿De qué tamaño quiere que sea su vector?" << endl;
    cin >> n;

    int vector[n];

    llenarVector(vector, n);
    mostrarVector(vector, n);

    return 0;
}
