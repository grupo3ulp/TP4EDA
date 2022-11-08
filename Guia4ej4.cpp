#include <iostream>

using namespace std;

//Ejercicio 4: Declare struct Fecha, declare FA(fecha actual) y FC(fecha cumple), luego se compruebe en una
//función si corresponde al día del cumpleaños. Mostrar un mensaje de felicitaciones de ser así

struct fecha{
    int dia;
    int mes;
    int anio;
};

fecha cumpleanios(fecha fa, fecha fc){
    if(fa.dia == fc.dia && fa.mes == fc.mes){
        cout<<"Feliz cumpleanios!!, hoy cumplio "<<fa.anio-fc.anio<<" anios"<<endl;
    }else{
        cout<<"Hoy no es tu cumpleanios :("<<endl;
    }
}

int main() {
    fecha fa, fc;
    int d, m, a;
    cout<<"Ingrese la fecha actual"<<endl;
    cout<<"Dia: "<<endl;
    cin>>d;
    cout<<"Mes: "<<endl;
    cin>>m;
    cout<<"Anio: "<<endl;
    cin>>a;
    fa.dia = d;
    fa.mes = m;
    fa.anio = a;
    cout<<"-----------------------"<<endl;
    cout<<"Ingrese la fecha de su cumpleanios"<<endl;
    cout<<"Dia: "<<endl;
    cin>>d;
    cout<<"Mes: "<<endl;
    cin>>m;
    cout<<"Anio: "<<endl;
    cin>>a;
    fc.dia = d;
    fc.mes = m;
    fc.anio = a;
    cout<<"-----------------------"<<endl;
    cumpleanios(fa, fc);
    return 0;
}
