// Materia: Programacion I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 16/09/2023

// Fecha modificacion: 16/09/2023

// Numero de ejericio: 2

// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>
using namespace std;

// Funcion para calcular la edad
int calcularEdad(int yearNacimiento, int monthNacimiento, int dayNacimiento) {
    // Obtiene la fecha actual
    int yearActual = 2023;
    int monthActual = 9;
    int dayActual = 16;
    // Calcula la edad
    int edad = yearActual - yearNacimiento;
    // Ajusta la edad y si aun no ha cumplido an~os
    if (monthNacimiento > monthActual || (monthNacimiento == monthActual && dayNacimiento > dayActual)) {
        edad--;
    }
    return edad;
}

int main() {
    int yearNacimiento, monthNacimiento, dayNacimiento;

    cout <<"Ingresa tu fecha de nacimiento (AAAA MM DD): ";
    cin>> yearNacimiento>> monthNacimiento>> dayNacimiento;
    // Calcula la edad utilizando la funcion
    int edad = calcularEdad(yearNacimiento, monthNacimiento, dayNacimiento);
    cout <<"Tu edad es: " <<edad <<" an~os" <<endl;
    return 0;
}

