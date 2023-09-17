// Materia: Programacion I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 16/09/2023

// Fecha modificacion: 16/09/2023

// Numero de ejericio: 9

// Problema planteado: A un trabajador se le paga según las horas que trabaja en la semana, una tarifa de pago por hora. Si la cantidad de horas trabajadas 
// es mayor a 40, la tarifa se incrementa en un 50%. Calcular el salario total del trabajador, además considere que si existe un anticipo se debe restar 
//este valor al salario total. Al total debe descontar un 10% para el pago de impuestos. Se debe obtener: Total ganado, Total descuentos, Pago neto

#include <iostream>
using namespace std;

// Funcion para calcular el salario antes de aplicar descuentos
double calcularSalario(double horasTrabajadas, double tarifaPorHora) {
    double salario = horasTrabajadas * tarifaPorHora;
    if (horasTrabajadas > 40) {
        salario = salario * 1.5;
    }
    return salario;
}

// Funcion para calcular el total de descuentos (anticipo e impuestos)
double calcularDescuentos(double salario, double anticipo) {
    double impuestos = salario * 0.10;
    return anticipo + impuestos;
}
// Funcion para calcular el salario neto
double calcularSalarioNeto(double salario, double descuentos) {
    return salario - descuentos;
}
int main() {
    double horasTrabajadas, tarifaPorHora, anticipo;
    cout <<"Ingrese las horas trabajadas en la semana: ";
    cin>> horasTrabajadas;
    cout <<"Ingrese la tarifa por hora en Bs.: ";
    cin>> tarifaPorHora;
    cout <<"Ingrese el anticipo en Bs.: ";
    cin>> anticipo;
    // Calcula el salario antes de aplicar descuentos
    double salario = calcularSalario(horasTrabajadas, tarifaPorHora);
    // Calcula el total de descuentos
    double descuentos = calcularDescuentos(salario, anticipo);
    // Calcula el salario neto
    double salarioNeto = calcularSalarioNeto(salario, descuentos);

    cout <<"Total ganado: " <<salario <<" Bs." <<endl;
    cout <<"Total descuentos: " <<descuentos <<" Bs." <<endl;
    cout <<"Pago neto: " <<salarioNeto <<" Bs." <<endl;
    return 0;
}

