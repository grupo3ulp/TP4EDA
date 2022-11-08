#include <iostream>
#include <string>
using namespace std;

//Ejercicio 5: Realice un programa permita elegir entre contar palabras de una frase y contar la ocurrencia de
//una palabra en la frase, mientras el usuario lo desee. Para ello valerse de lo siguiente:
//• Una función que permita conocer cuantas palabras hay en una frase recibida como parámetro.
//• Otra función que determine cuantas veces se encuentra una palabra en una frase.

string palabras(string frase){
int largo = frase.size();
int Cpalabras = 0;
    for (int i = 0; i < largo; ++i) {
        if(frase[i] == ' '){
            Cpalabras++;
        }
    }
    Cpalabras++;
    cout<<"La frase tiene "<<Cpalabras<<" palabras"<<endl;
}

string unaPalabra(string frase){
    int largo = frase.size();
    int veces = 0, cont = 0;
    string pal;
    cout<<"Ingrese una palabra a buscar"<<endl;
    cin>>pal;
    int largo2 = pal.size();
    for (int i = 0; i < largo; ++i) {
        if (frase[i]==pal[0]){
            for (int j = 0; j < largo2; ++j) {
                if(frase[i+j]==pal[j]){
                    cont++;
                }
            }
            if(cont == largo2){
                veces++;
            }
            cont = 0;
        }
    }
    cout<<"La palabras "<<pal<<" se encuentra "<<veces<<" vez/veces en la frase";
}

int main() {
    string frase;
    int op;
    cout<<"Ingrese una frase"<<endl;
    getline(cin, frase);
    cout<<"---------------------------------------"<<endl;
    cout<<"Ingrese una opcion:"<<endl;
    cout<<"1: Contar todas las palabras"<<endl;
    cout<<"2: Buscar una palabra"<<endl;
    cin>>op;
    switch (op) {
        case 1:
            palabras(frase);
            break;
        case 2:
            unaPalabra(frase);
            break;
    }
    return 0;
}
