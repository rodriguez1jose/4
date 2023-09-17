// Materia: Programacion I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 16/09/2023

// Fecha modificacion: 16/09/2023

// Numero de ejericio: 7

// Problema planteado: Escribir un programa que lea el salario de un empleado y mediante una función efectué un incremento salarial en base a la siguiente escala:
//Si el salario es menor < 1000 Bs. incremente en un 20%. Si el salario es mayor o igual a 1000 pero es menor a 3000 Bs. Incremente en un 15%
//Si el salario es mayor o igual a 3000 pero es menor a 6000 Bs. Incremente en un 10%
//Si el salario es mayor o igual a 6000 Bs. Incremente en un 5%. La función debe obtener el incremento y el nuevo salario.

#include <iostream>
using namespace std;

// Funcion para calcular el incremento y el nuevo salario
void calcularIncrementoSalario(double salario, double& incremento, double& nuevoSalario) {
    if (salario < 1000.0) {
        incremento = salario * 0.20;
    } else if (salario < 3000.0) {
        incremento = salario * 0.15;
    } else if (salario < 6000.0) {
        incremento = salario * 0.10;
    } else {
        incremento = salario * 0.05;
    }
    nuevoSalario = salario + incremento;
}
int main() {
    double salario, incremento, nuevoSalario;
    cout <<"Ingrese el salario del empleado en Bs.: ";
    cin>> salario;
    calcularIncrementoSalario(salario, incremento, nuevoSalario);

    cout <<"Incremento: " <<incremento << " Bs." <<endl;
    cout <<"Nuevo salario: " <<nuevoSalario <<" Bs." <<endl;
    return 0;
}

