#include <iostream>
#include <string>
using namespace std;

//Efercicio 3: Hacer una función que reciba un arreglo de estructuras que registra los datos de 5 personas con:
//Nombre, edad, sexo y teléfono. La función muestra los datos de los mayores a 30 años.

struct persona{
    string nombre;
    int edad;
    string sexo;
    int telefono;
};

persona mostrarPersonas (persona p[]){
    for (int i = 0; i < 5; ++i) {
        if(p[i].edad>30){
            cout<<"Nombre: "<<p[i].nombre<<endl;
            cout<<"Sexo: "<<p[i].sexo<<endl;
            cout<<"Edad: "<<p[i].edad<<endl;
            cout<<"Telefono: "<<p[i].telefono<<endl;
            cout<<"--------------------------------"<<endl;
        }
    }
};

int main() {
    string n, s;
    int e, t;
    persona p[5];
    for (int i = 0; i < 5; ++i) {
        cout<<"Ingrese el nombre de la persona"<<endl;
        getline(cin, n);
        cout<<"Ingrese el sexo de la persona"<<endl;
        getline(cin, s);
        cout<<"Ingrese la edad de la persona"<<endl;
        cin>>e;
        cout<<"Ingrese el telefono de la persona"<<endl;
        cin>>t;
        p[i].nombre = n;
        p[i].sexo = s;
        p[i].edad = e;
        p[i].telefono = t;
        getline(cin, n);
        cout<<"----------------------------------------"<<endl;
    }
    cout<<"Se muestran los datos de las personas mayores a 30"<<endl;
    mostrarPersonas(p);
    return 0;
}
