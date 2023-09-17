// Materia: Programacion I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 16/09/2023

// Fecha modificacion: 16/09/2023

// Numero de ejericio: 1

// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto

#include <iostream>
using namespace std;

// Funcion para determinar si un a~no es bisiesto
bool esBisiesto(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int year;
    //Pide al usuario que ingrese un a~no
    cout <<"Ingresa un a~no: ";
    cin>> year;
    // Verifica si el a~no es bisiesto utilizando la funcion
    if (esBisiesto(year)) {
        cout <<year <<" es un a~no bisiesto." <<endl;
    } else {
        cout <<year <<" no es un a~no bisiesto." <<endl;
    }
    return 0;
}

