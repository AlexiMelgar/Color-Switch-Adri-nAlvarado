//Escriba un programa en el que el usuario ingrese una letra y el programa diga el color según la tabla, R=rojo, Y=amarillo, B=azul, W=blanco, K=negro, C=cian, G=verde.

#include <iostream>
#include <string>

using namespace std;
int main(){
    char letra;
    cout << "ingrese una letra:";
    cin >> letra;

    switch (letra){
        case 'R':
        cout <<"El color es Rojo."<< endl;
        break;

          case 'Y':
        cout <<"El color es Amarillo."<< endl;
        break;

          case 'B':
        cout <<"El color es Azul."<< endl;
        break;

          case 'W':
        cout <<"El color es Blanco."<< endl;
        break;

          case 'K':
        cout <<"El color es Negro."<< endl;
        break;

          case 'C':
        cout <<"El color es Cian."<< endl;
        break;

          case 'G':
        cout <<"El color es Verde."<< endl;
        break;

        default:
        cout <<"La letra que ingresó no corresponde a ningun color dado."<<endl;
    
    }


return 0;

}