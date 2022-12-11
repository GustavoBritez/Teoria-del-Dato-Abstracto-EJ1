#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleados.h"
#include "empresa.h"

int Fibonacci(int n);
int main()
{
    printf("-------- FINAL 1 - Mecha----------\n");
    //  Empleados e1 = cargarE();
    // Empleados e2 = cargarE();
    /*Empresa emp = iniciarEmpresa();
    mostrarEmpresa(emp);
    crearEmpresa(emp);
    mostrarEmpresa(emp);
    int cantidad = cantidadEmpleados();
    agregarEmpleado(emp,cantidad);
    mostrarEmpresa(emp);
    //eliminarEmpleado(emp,"gus");
    ordenarSUELDO(emp);
    mostrarEmpresa(emp);*/
    int n = Fibonacci(7);
    printf("\n %d", n);
}
int Fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return Fibonacci(n-2) + Fibonacci(n-1);
    }
}


