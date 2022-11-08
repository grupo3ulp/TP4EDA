#include <iostream>
using namespace std;

//16. Escriba las siguientes funciones:
//A. Tasa de natalidad: cantidad de nacimientos en proporción con el total de la población,
//recibe estos datos como parámetros y devuelve la tasa.
//B. Tasa de mortalidad: porcentaje de fallecimientos en relación al total de la población, recibe
//estos datos como parámetros y devuelve la tasa.
//C. Población en crecimiento: devuelve true, si la tasa de natalidad es mayor a la de mortalidad
//D. Densidad Poblacional: habitantes por km 2
//Realice un programa que permita ingresar, el nombre de un país, su población, su superficie, y
//luego de la opción de calcular: Densidad poblacional, Tasa de natalidad, Tasa de Mortalidad y
//Evolución demográfica, mientras el usuario lo desee.

double natalidad(double nacimientos, double habitantes){
    double tasan;
    tasan = (nacimientos/habitantes)*1000;
    return tasan;
}

double mortalidad(double fallecimientos, double habitantes){
    double tasam;
    tasam = (fallecimientos/habitantes)*1000;
    return tasam;
}

bool crecimiento(double nacimientos, double fallecimientos, double habitantes){
    bool flag = true;
    if(natalidad(nacimientos, habitantes)<=mortalidad(fallecimientos, habitantes)){
        flag = false;
    }
    return flag;
}

double densidad (int habitantes, double superficie){
    double s;
    s = habitantes / superficie;
    return s;
}


int main() {
    string nombre;
    double habitantes, nacimientos = 0, fallecimientos = 0, superficie;
    int op;
    cout<<"Ingrese el nombre del pais"<<endl;
    getline(cin, nombre);
    cout<<"Ingrese la cantidad de habitantes"<<endl;
    cin>>habitantes;
    cout<<"Ingrese la superficie en km cuadrados"<<endl;
    cin>>superficie;
    cout<<"-------------------------------------"<<endl;
    do {
        cout<<"Elija una opcion:"<<endl;
        cout<<"Opcion 1: Tasa de natalidad"<<endl;
        cout<<"Opcion 2: Tasa de mortalidad"<<endl;
        cout<<"Opcion 3: Poblacion en crecimiento?"<<endl;
        cout<<"Opcion 4: Densidad poblacional"<<endl;
        cout<<"Opcion 5: Salir"<<endl;
        cin>>op;
        switch (op) {
            case 1:
                cout<<"Ingrese la cantidad de nacimientos en el anio"<<endl;
                cin>>nacimientos;
                cout<<"La tasa de natalidad es:"<<endl;
                cout<<"%"<<natalidad(nacimientos, habitantes)<<endl;
                break;
            case 2:
                cout<<"Ingrese la cantidad de fallecimientos en el anio"<<endl;
                cin>>fallecimientos;
                cout<<"EL resultado es"<<endl;
                cout<<"%"<<mortalidad(fallecimientos, habitantes)<<endl;
                break;
            case 3:
                if (nacimientos == 0 || fallecimientos == 0){
                    cout<<"Todavia no se calcula la tasa de mortalidad y/o natalidad"<<endl;
                }else{
                    if (crecimiento(nacimientos, fallecimientos, habitantes)){
                        cout<<"El pais se encuentra en crecimiento"<<endl;
                    }else{
                        cout<<"El pais no se encuentra en crecimiento"<<endl;
                    }
                }
                break;
            case 4:
                cout<<"La densidad del pais es"<<endl;
                cout<<densidad(habitantes, superficie)<<endl;
                break;
            case 5:
                break;
        }
    }while(op!=5);
    return 0;
}
