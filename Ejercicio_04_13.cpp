// Materia: Programacion I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creacion: 16/09/2023

// Fecha modificacion: 19/09/2023

// Numero de ejericio: 13

// Problema planteado: Una empresa efectúa el control de asistencia de sus empleados mediante un lector biométrico, el horario en la entrada es a las 8:00 a.m 
//y la salida es a las 16:00 p.m. El empleado tiene una tolerancia de 10 minutos en la entrada, si llega más allá de los 10 minutos de tolerancia
//se penaliza todos los minutos de atraso (es decir si llega a las 8:12 se penalizan los 12 minutos). De igual forma no puede salir antes del horario establecido en la salida, (si lo hace se penaliza
//los minutos faltantes), pero si el empleado entra antes o sale después de sus horarios el sistema solo toma en cuenta las 8 horas laborales de trabajo.
//El problema consiste en determinar los minutos de penalización para el empleado en cualquier día laboral, verifique el funcionamiento con los siguientes datos de prueba:

#include <iostream>
#include <string>
using namespace std;

struct Hora {
    int horas;
    int minutos;
};

struct Empleado {
    string codigo;
    Hora horaEntrada;
    Hora horaSalida;
    int penalizacion;
    string fecha;
};
// Funcion para calcular los minutos de penalizacion
int calcularPenalizacion(const Hora& entrada, const Hora& salida) {
    const int limiteTolerancia = 10;
    int penalizacion = 0;

    if (entrada.horas > 8 || (entrada.horas == 8 && entrada.minutos > 0)) {
        penalizacion = penalizacion + (entrada.horas - 8) * 60 + entrada.minutos;
    }

    if (salida.horas < 16) {
        penalizacion = penalizacion + (16 - salida.horas) * 60 - salida.minutos;
    }

    if (penalizacion > limiteTolerancia) {
        penalizacion = penalizacion - limiteTolerancia;
    } else {
        penalizacion = 0;
    }
    return penalizacion;
}
// Funcion para mostrar los datos de un empleado
void mostrarEmpleado(const Empleado& empleado) {
    cout <<"Codigo Empleado: " <<empleado.codigo <<endl;
    cout <<"Hora Entrada: " <<empleado.horaEntrada.horas <<":" <<empleado.horaEntrada.minutos <<endl;
    cout <<"Hora Salida: " <<empleado.horaSalida.horas <<":" <<empleado.horaSalida.minutos <<endl;
    cout <<"Penalizacion: " <<empleado.penalizacion <<" minutos" <<endl;
    cout <<"Fecha: " <<empleado.fecha <<endl;
    cout <<"--------------------------------------------" <<endl;
}
int main() {
    Empleado empleados[4];
    // Inicia datos de empleados
    empleados[0] = {"101045", {7, 55}, {16, 15}, 0, "12/01/2011"};
    empleados[1] = {"223032", {8, 11}, {16, 00}, 0, "12/01/2011"};
    empleados[2] = {"334009", {8, 30}, {16, 20}, 0, "12/01/2011"};
    empleados[3] = {"443283", {8, 05}, {16, 10}, 0, "12/01/2011"};
    // Calcula penalizacion para cada empleado
    for (int i = 0; i < 4; i++) {
        empleados[i].penalizacion = calcularPenalizacion(empleados[i].horaEntrada, empleados[i].horaSalida);
    }
    for (int i = 0; i < 4; i++) {
        mostrarEmpleado(empleados[i]);
    }
    return 0;
}

