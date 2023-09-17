// Materia: Programacion I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 16/09/2023

// Fecha modificacion: 16/09/2023

// Numero de ejericio: 3

// Problema planteado: Leer los datos de doce personas como son: nombre, edad, estatura, peso, posteriormente indicar cuál es el nombre de la persona de menor edad,
// el promedio de las estaturas y el de los pesos.

#include <iostream>
#include <string>
using namespace std;

// Definicion de la estructura Persona
struct Persona {
    string nombre;
    int edad;
    double estatura;
    double peso;
};
// Funcion para leer los datos de una persona
void leerDatosPersona(Persona& persona) {
    cout <<"Nombre: ";
    cin>> persona.nombre;
    cout <<"Edad: ";
    cin>> persona.edad;
    cout <<"Estatura (en metros): ";
    cin>> persona.estatura;
    cout <<"Peso (en kilogramos): ";
    cin>> persona.peso;
}
// Funcion para encontrar la persona de menor edad
Persona encontrarMenorEdad(Persona personas[], int n) {
    Persona menor = personas[0];
    for (int i = 1; i < n; i++) {
        if (personas[i].edad < menor.edad) {
            menor = personas[i];
        }
    }
    return menor;
}
// Funcion para calcular el promedio de estaturas
double calcularPromedioEstaturas(Persona personas[], int n) {
    double sumaEstaturas = 0.0;
    for (int i = 0; i < n; i++) {
        sumaEstaturas = sumaEstaturas + personas[i].estatura;
    }
    return sumaEstaturas / n;
}
// Funcion para calcular el promedio de pesos
double calcularPromedioPesos(Persona personas[], int n) {
    double sumaPesos = 0.0;
    for (int i = 0; i < n; i++) {
        sumaPesos = sumaPesos + personas[i].peso;
    }
    return sumaPesos / n;
}
int main() {
    const int numPersonas = 5;
    Persona personas[numPersonas];
    // Lee los datos de las doce personas
    for (int i = 0; i < numPersonas; i++) {
        cout << "Persona #" << i + 1 << endl;
        leerDatosPersona(personas[i]);
    }
    Persona menorEdad = encontrarMenorEdad(personas, numPersonas);
    // Calcula el promedio de estaturas y pesos
    double promedioEstaturas = calcularPromedioEstaturas(personas, numPersonas);
    double promedioPesos = calcularPromedioPesos(personas, numPersonas);

    cout <<"La persona de menor edad es: " <<menorEdad.nombre <<endl;
    cout <<"El promedio de estaturas es: " <<promedioEstaturas <<" metros" <<endl;
    cout <<"El promedio de pesos es: " <<promedioPesos <<" kilogramos" <<endl;
    return 0;
}

