#include <iostream>
#include <string>
using namespace std;

int option_a(int a){

    //VARIABLES
    int numero, numeroInvertido;

    do
    {
        cout<<"Ingrese un valor mayor o igual a 10: ";
        cin>>numero;
    } while (numero < 10);

// Algoritmo para invertir el valor digitado por el usuario

    while (numero > 1)
    {
        numeroInvertido = numero % 10;

        cout<<numeroInvertido;

        numero = numero / 10;
        
    }

    a = numeroInvertido;
    
    return a;
}