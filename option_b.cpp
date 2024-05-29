#include <iostream>
#include <string>

using namespace std;

int option_b(int numero){

//VARIABLES
    int numero, suma;

//Algoritmo que suma individualmente los valores de un número

    cout<<"ingrese un numero: ";
    cin>>numero;

    while(numero != 0){
        suma += numero % 10;
        numero /= 10;
    }
    
    return suma;
}