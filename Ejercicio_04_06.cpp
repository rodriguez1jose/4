// Materia: Programacion I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 16/09/2023

// Fecha modificacion: 16/09/2023

// Numero de ejericio: 6

// Problema planteado: Escriba un programa que mediante una función determine el pago por el servicio de estacionamiento de coches en un parqueo, 
//teniendo en cuenta que la primera hora de estadía se paga 8 Bs., y las restantes 3 Bs. c/hora. Si el uso del servicio es menor a una
//hora se cobra por la hora y de igual manera si excede la hora se cobra por la hora siguiente.

#include <iostream>
using namespace std;

// Funcion para calcular el tiempo de estadia en horas y minutos
void calcularTiempo(int horaEntrada, int minutoEntrada, int horaSalida, int minutoSalida, int& horas, int& minutos) {
    if (horaSalida < horaEntrada || (horaSalida == horaEntrada && minutoSalida <= minutoEntrada)) {
        horaSalida = horaSalida + 24;  // se considera un dia completo de 24 horas
    }

    int totalMinutosEntrada = horaEntrada * 60 + minutoEntrada;
    int totalMinutosSalida = horaSalida * 60 + minutoSalida;

    int tiempoMinutos = totalMinutosSalida - totalMinutosEntrada;

    horas = tiempoMinutos / 60;
    minutos = tiempoMinutos % 60;
}

// Funcion para calcular el costo del estacionamiento
double calcularCosto(int horas, int minutos) {
    if (horas == 0 && minutos <= 15) {
        return 8.0;  // Menos de 15 minutos se redondea a 1 hora
    } else {
        if (minutos> 15) {
            horas++;  //Se redondea hacia arriba si hay minutos adicionales
        }
        if (horas == 1) {
            return 8.0;  //La primera hora
        } else {
            return 8.0 + (horas - 1) * 3.0;  //Cada hora adicional despues de la primera
        }
    }
}
int main() {
    int horaEntrada, minutoEntrada, horaSalida, minutoSalida;
    int horas, minutos;
    double costo;
    // Caso 1
    horaEntrada = 9;
    minutoEntrada = 35;
    horaSalida = 10;
    minutoSalida = 15;

    calcularTiempo(horaEntrada, minutoEntrada, horaSalida, minutoSalida, horas, minutos);
    costo = calcularCosto(horas, minutos);
    cout <<"Caso 1:\n";
    cout <<"Tiempo: " <<horas <<" horas y " <<minutos <<" minutos";
    cout <<"Pago: " <<costo <<" Bs.\n\n";
    
    // Caso 2
    horaEntrada = 11;
    minutoEntrada = 10;
    horaSalida = 12;
    minutoSalida = 20;

    calcularTiempo(horaEntrada, minutoEntrada, horaSalida, minutoSalida, horas, minutos);
    costo = calcularCosto(horas, minutos);
    cout <<"Caso 2:\n";
    cout <<"Tiempo: " <<horas <<" horas y " <<minutos <<" minutos\n";
    cout <<"Pago: " <<costo <<" Bs.\n\n";

    // Caso 3
    horaEntrada = 17;
    minutoEntrada = 55;
    horaSalida = 21;
    minutoSalida = 30;

    calcularTiempo(horaEntrada, minutoEntrada, horaSalida, minutoSalida, horas, minutos);
    costo = calcularCosto(horas, minutos);
    cout <<"Caso 3:\n";
    cout <<"Tiempo: " <<horas <<" horas y " <<minutos <<" minutos\n";
    cout <<"Pago: " <<costo <<" Bs.\n\n";
    return 0;
}

