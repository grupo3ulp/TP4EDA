#include <iostream>
using namespace std;

//13. Realice un programa que mientras el usuario lo desee pueda realizar estas operaciones,
//llamando a la función correspondiente, según las que siguen: A. Calcula la multiplicación por
//sumas sucesivas. Ej. 2 x 4 = 2 + 2 + 2 + 2 (suma 4 veces el numero 2 generalizando nxm =n+n+…(m
//veces). B. Calcula la división por restas sucesivas Ej. 10/2=5 (5 indica la cantidad de veces que pude restar 2 al 10. Y
// C. Calcule la potencia por multiplicaciones sucesivas Ej 2 3= 2*2*2
//multiplica 2 por si mismo 3 veces)

int multiplicacion (int a, int b){
    int multi = 0;
    for (int i = 0; i < b; ++i) {
        multi = multi + a;
    }
    return multi;
}

int division (int a, int b){
    int div = a;
    int cont = 0;
    do {
        div = div - b;
        cont++;
    }while(div>0);
    return cont;
}

int potencia (int a, int b){
    int pot = a;
    for (int i = 0; i < b-1; ++i) {
        pot = pot * a;
    }
    return pot;
}

int main() {
    int op, a, b;
    do {
    cout<<"Elija una opcion:"<<endl;
    cout<<"Opcion 1: Multiplicar"<<endl;
    cout<<"Opcion 2: Dividir"<<endl;
    cout<<"Opcion 3: Potenciar"<<endl;
    cout<<"Opcion 4: Salir"<<endl;
    cin>>op;
        switch (op) {
            case 1:
                cout<<"Ingrese dos numeros para multiplicarlos"<<endl;
                cin>>a;
                cin>>b;
                cout<<"EL resultado es"<<endl;
                cout<<multiplicacion(a, b)<<endl;
                break;
            case 2:
                cout<<"Ingrese dos numeros para dividirlos"<<endl;
                cin>>a;
                cin>>b;
                cout<<"EL resultado es"<<endl;
                cout<<division(a, b)<<endl;
                break;
            case 3:
                cout<<"Ingrese dos numeros para potenciarlos"<<endl;
                cin>>a;
                cin>>b;
                cout<<"EL resultado es"<<endl;
                cout<<potencia(a, b)<<endl;
                break;
            case 4:
                break;
        }
    }while(op!=4);
    return 0;
}
