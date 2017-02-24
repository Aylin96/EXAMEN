#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int main(){

string u, c;

cout << "Usuario:";
cin >> u;
cout << "Contrasenia";
cin >> c;

if( u == "administrador" && c == "administrador"){

cout << "Contrasenia correcta. Bienvenido";
}

else if ( u == "usuario" && c == "usuario"){

cout << "Contrasenia correcta. Bienvenido";


}

else{
cout << "Contrasenia incorrecta.";
}
}
