// Ejercicio 3: Hacer una función que reciba un arreglo de estructuras que registra los datos de 5 personas con:
// Nombre, edad, sexo y teléfono. La función muestra los datos de los mayores a 30 años.

#include <iostream>
#include <string>
using namespace std;

struct persona{
    string nombre;
    int edad;
    string sexo;
    double telefono;
};

void cargarPersonas(persona p[]){
    string n, s;
    int e;
    double t;
    for (int i = 0; i < 5; ++i)    {
        cout<<"Ingrese el nombre de la persona"<<endl;
        getline(cin, p[i].nombre);
        cout<<"Ingrese el sexo de la persona"<<endl;
        getline(cin, p[i].sexo);
        cout<<"Ingrese la edad de la persona"<<endl;
        cin>>p[i].edad;
        cout<<"Ingrese el telefono de la persona"<<endl;
        cin>>p[i].telefono;
        getline(cin, n);
        cout<<"----------------------------------------"<<endl;
    }
}

void mostrarPersonas(persona p[]){
    bool flag = false;
    for (int i = 0; i < 5; ++i){
        if (p[i].edad > 30 && flag == false){
            cout << "Se muestran los datos de las personas mayores a 30: " << endl;
            flag = true;
        }
        
        if (p[i].edad > 30){
            cout << "Nombre: " << p[i].nombre << endl;
            cout << "Sexo: " << p[i].sexo << endl;
            cout << "Edad: " << p[i].edad << endl;
            cout << "Telefono: " << p[i].telefono << endl;
            cout<<"----------------------------------------"<<endl;
        }    
    }

    if (!flag){
            cout << "No se ingresaron personas mayores a 30 años" << endl;
    }
};

int main(){
    persona p[5];
    cargarPersonas(p);
    mostrarPersonas(p);
    return 0;
}
