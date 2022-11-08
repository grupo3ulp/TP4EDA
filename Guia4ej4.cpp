#include <iostream>

using namespace std;

//Ejercicio 4: Declare struct Fecha, declare FA(fecha actual) y FC(fecha cumple), luego se compruebe en una
//función si corresponde al día del cumpleaños. Mostrar un mensaje de felicitaciones de ser así

struct fecha{
    int dia;
    int mes;
    int anio;
};

void cumpleanios(fecha fa, fecha fc){
    if(fa.dia == fc.dia && fa.mes == fc.mes){
        cout<<"Feliz cumpleaños!, hoy cumplis "<<fa.anio-fc.anio<<" años"<<endl;
    }else{
        cout<<"Hoy no es tu cumpleaños."<<endl;
    }
}

int main() {
    fecha fa, fc;
    cout<<"Ingresá la fecha actual"<<endl;
    cout<<"Dia: "<<endl;
    cin>>fa.d;
    cout<<"Mes: "<<endl;
    cin>>fa.m;
    cout<<"Año: "<<endl;
    cin>>fa.a;
    cout<<"-----------------------"<<endl;
    cout<<"Ingresá la fecha de tu cumpleaños"<<endl;
    cout<<"Dia: "<<endl;
    cin>>fc-d;
    cout<<"Mes: "<<endl;
    cin>>fc.m;
    cout<<"Año: "<<endl;
    cin>>fc.a;
    cout<<"-----------------------"<<endl;
    cumpleanios(fa, fc);
    return 0;
}
