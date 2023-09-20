// Materia: Programacion I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 16/09/2023

// Fecha modificacion: 19/09/2023

// Numero de ejericio: 11

// Problema planteado: Realice una función que enviándole dos numero calcule el máximo común divisor con el algoritmo de Euclides.

#include <iostream>
using namespace std;

// Funcion para calcular el MCD con el algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;
    cout <<"Ingrese el primer numero: ";
    cin>> num1;
    cout <<"Ingrese el segundo numero: ";
    cin>> num2;
    int mcd = calcularMCD(num1, num2);
    cout <<"El Maximo Comun Divisor (MCD) de " <<num1 <<" y " <<num2 <<" es: "<<mcd <<endl;
    return 0;
}

