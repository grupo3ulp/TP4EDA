#include <iostream>
using namespace std;

//Ejercicio 8: Cree una estructura Persona que tenga un vector de 30 caracteres, y su edad. Declare una
//variable de tipo Persona, y use una función pedirDatos que la cargue. Use getline para cargar el
//nombre. Otra función mostrarDatos que reciba la estructura y la muestre. Declare el prototipo
//de las funciones pedirDatos y mostrarDatos. Pruébelas desde el menú principal.

struct persona{
    char nombre[30];
    int edad;
};

persona pedirDatos(persona p[]) {
    cout << "Ingrese el nombre de la persona" << endl;
    cin.getline(p[0].nombre, 30);
    cout << "Ingrese la edad de la persona" << endl;
    cin >> p[0].edad;
}
persona mostrarDatos(persona p[]){
    cout<<"Nombre: "<<p[0].nombre<<endl;
    cout<<"Edad: "<<p[0].edad<<endl;
    cout<<"---------------------"<<endl;
}

int main() {
    persona p[1];
    pedirDatos(p);
    cout<<"Se muestra la persona"<<endl;
    cout<<"---------------------"<<endl;
    mostrarDatos(p);
    return 0;
}
