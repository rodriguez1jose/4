// Materia: Programacion I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 16/09/2023

// Fecha modificacion: 16/09/2023

// Numero de ejericio: 4

// Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango
// de 1 a 100, calcular y presentar la sumatoria y promedio de estas N calificaciones. La
// entrada de valores es para las calificaciones, debe hacerlo mediante una función.


#include <iostream>
using namespace std;

// Funcion para ingresar una calificacion
int ingresarCalificacion(int numero) {
    int calificacion;
    cout <<"Ingrese la calificacion #" <<numero <<": ";
    cin>> calificacion;
    return calificacion;
}
// Funcion para calcular la sumatoria de las calificaciones
int calcularSumatoria(int calificaciones[], int N) {
    int sumatoria = 0;
    for (int i = 0; i < N; i++) {
        sumatoria = sumatoria + calificaciones[i];
    }
    return sumatoria;
}
// Funcion para calcular el promedio de las calificaciones
double calcularPromedio(int sumatoria, int N) {
    if (N == 0) {
        return 0.0;
    }
    return static_cast<double>(sumatoria) / N;
}
int main() {
    int N;
    cout <<"Ingrese la cantidad de calificaciones: ";
    cin>> N;
    if (N <= 0) {
        cout <<"La cantidad de calificaciones debe ser mayor que cero. Programa terminado." <<endl;
        return 1;
    }
    int calificaciones[N];
    for (int i = 0; i < N; i++) {
        calificaciones[i] = ingresarCalificacion(i + 1);
    }
    int sumatoria = calcularSumatoria(calificaciones, N);
    double promedio = calcularPromedio(sumatoria, N);

    cout <<"La sumatoria de las calificaciones es: " <<sumatoria <<endl;
    cout <<"El promedio de las calificaciones es: " <<promedio <<endl;
    return 0;
}

