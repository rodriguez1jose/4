// Materia: Programacion I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 16/09/2023

// Fecha modificacion: 16/09/2023

// Numero de ejericio: 5

// Problema planteado: Elabore un programa para registro académico de la UCB, que solicite el nombre de una materia, el paralelo, el docente y sus correspondientes notas de periodo. 
//  muestra la nota final y si aprobó o reprobo el curso

#include <iostream>
#include <string>
using namespace std;

// Definicion de la estructura Materia
struct Materia {
    string nombre;
    string paralelo;
    string docente;
    double notasPeriodo[10];
    int numNotas;
    double notaFinal;
};
// Funcion para leer los datos de una materia
void leerDatosMateria(Materia& materia) {
    cout <<"Nombre de la materia: ";
    cin>> materia.nombre;
    cout <<"Paralelo: ";
    cin>> materia.paralelo;
    cout <<"Docente(solo apellido): ";
    cin>> materia.docente;

    cout <<"Ingrese las notas de periodo (ingrese -1 para finalizar):";
    materia.numNotas = 0;
    double nota;
    while (true) {
        cin >> nota;
        if (nota == -1 || materia.numNotas >= 10) {
            break;
        }
        materia.notasPeriodo[materia.numNotas] = nota;
        materia.numNotas++;
    }
}
// Funcion para calcular la nota final de una materia
void calcularNotaFinal(Materia& materia) {
    double sumaNotas = 0.0;
    for (int i = 0; i < materia.numNotas; i++) {
        sumaNotas = sumaNotas + materia.notasPeriodo[i];
    }
    materia.notaFinal = sumaNotas / materia.numNotas;
}
// Funcion para determinar si un estudiante aprobo o reprobo el curso
string determinarAprobacion(double notaFinal) {
    if (notaFinal >= 60.0) {
        return "Aprobado";
    } else {
        return "Reprobado";
    }
}
int main() {
    Materia materia;
    leerDatosMateria(materia);
    calcularNotaFinal(materia);

    cout <<"Resumen de la materia:";
    cout <<"Nombre: " <<materia.nombre <<endl;
    cout <<"Paralelo: " <<materia.paralelo <<endl;
    cout <<"Docente : " <<materia.docente <<endl;
    cout <<"Notas de periodo: ";
    for (int i = 0; i < materia.numNotas; i++) {
        cout <<materia.notasPeriodo[i] <<" ";
    }
    cout <<endl;
    cout <<"Nota Final: " <<materia.notaFinal <<endl;
    cout <<"Resultado: " <<determinarAprobacion(materia.notaFinal) <<endl;
    return 0;
}

