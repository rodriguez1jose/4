// Materia: Programacion I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 16/09/2023

// Fecha modificacion: 16/09/2023

// Numero de ejericio: 8

// Problema planteado:  En una fábrica de computadoras se planea ofrecer a los clientes un descuento que dependerá del número de computadoras que compre. 
// Si las computadoras son menos de cinco se les dará un 10% de descuento sobre el total de la compra; si el número de computadoras es mayor o 
//igual a cinco pero menos de diez se le otorga un 20% de descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada computadora es un valor 
//que el usuario ingrese desde el teclado. Se debe obtener el precio total que el cliente debe pagar y el valor del descuento.

#include <iostream>
using namespace std;

// Funcion para calcular el precio total antes del descuento
double calcularPrecioTotal(int cantidad, double precioPorComputadora) {
    return cantidad * precioPorComputadora;
}
// Funcion para calcular el descuento segun la cantidad de computadoras
double calcularDescuento(int cantidad, double precioTotal) {
    if (cantidad < 5) {
        return precioTotal * 0.10;
    } else if (cantidad < 10) {
        return precioTotal * 0.20;
    } else {
        return precioTotal * 0.40;
    }
}
// Funcion para calcular el precio total despues del descuento
double calcularPrecioConDescuento(double precioTotal, double descuento) {
    return precioTotal - descuento;
}
int main() {
    int cantidadComputadoras;
    double precioPorComputadora, precioTotal, descuento;
    // Solicita la cantidad de computadoras y el precio por computadora
    cout <<"Ingrese la cantidad de computadoras que va a comprar: ";
    cin>> cantidadComputadoras;
    cout <<"Ingrese el precio por computadora en Bs.: ";
    cin>> precioPorComputadora;

    // Calcula el precio total antes del descuento
    precioTotal = calcularPrecioTotal(cantidadComputadoras, precioPorComputadora);
    // Calcula el descuento segun la cantidad de computadoras
    descuento = calcularDescuento(cantidadComputadoras, precioTotal);

    // Calcula el precio total despues del descuento
    double precioConDescuento = calcularPrecioConDescuento(precioTotal, descuento);

    cout <<"Precio total antes del descuento: " <<precioTotal <<" Bs." <<endl;
    cout <<"Descuento: " << descuento << " Bs." <<endl;
    cout <<"Precio total después del descuento: " <<precioConDescuento <<" Bs." <<endl;
    return 0;
}


