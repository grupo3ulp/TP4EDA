/*Escriba una función que reciba un vector y suma sus elementos pares, reutilizar las funciones
del punto 1 para cargar y mostrar los vectores*/

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

int sumaVector(int vector[], int n){
int suma = 0;
    for (size_t i = 0; i < n; i++)    {
        if (vector[i]%2 == 0){
            suma = suma + vector[i];
        }      
    }
return suma;
}

int main(){
    int n;
    cout << "¿De qué tamaño quiere que sea su vector?" << endl;
    cin >> n;

    int vector[n];

    llenarVector(vector, n);
    mostrarVector(vector, n);
    cout << "La suma de los números pares dentro del vector es igual a: " << sumaVector(vector, n) << endl;

    return 0;
}
