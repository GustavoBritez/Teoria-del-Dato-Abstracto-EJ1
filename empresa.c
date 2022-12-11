#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empresa.h"
#include "empleados.h"
#define TAM 4
struct Estructura_Empresa
{
    int direccion;
    int telefono;
    Empleado e[TAM];
};

Empresa iniciarEmpresa()
{
    Empresa emp = malloc(sizeof(struct Estructura_Empresa));
    emp->direccion = -1;
    emp->telefono = -1;
    //Ahora cargamos los empleados en 0
    for(int i = 0 ; i < TAM ; i++)
    {
        emp->e[i] = iniciarEmpleado();
    }
    return emp;
}
void mostrarEmpresa(Empresa emp)
{
    printf("\n                    DIRECCION EMP : %d", emp->direccion);
    printf("\n                    TELEFONO EMP : %d", emp->telefono);
    printf("\n---------------------EMPLEADOS--------------------------\n ");
    for(int i = 0 ; i < TAM ; i++)
    {
        mostrarEmpleado(emp->e[i]);
    }
}

void crearEmpresa(Empresa emp)
{
    printf("\n\n \n Ingrese Direccion de la empresa");
    scanf("%d", &emp->direccion);
    printf("\n\n \n Ingrese Telefono de la empresa");
    scanf("%d", &emp->telefono);
}
int cantidadEmpleados()
{
    int n = 0;
    printf("\n\n - Ingrese la cantidad de empleados mayor a 0 y menor a 4 -\n \n");
    scanf("%d",&n);
    while (n > 4 || n < 0)
    {
        printf("\n\n - Ingrese un digito mayor a 0 y menor a 4 -\n \n");
        scanf("%d",&n);
    }
    return n;
}

void agregarEmpleado(Empresa emp, int cantidad)
{
    int lugar = 0;
    for (int i = 0; i < cantidad ; i++ )
    {
        lugar = Buscar_Espacio(emp);
        if(lugar == -1)
        {
            printf("\n No hay espacio");
            i = cantidad;
        }
        else
        {
            emp->e[i] = crearEmpleado();
        }
    }

}

int Buscar_Espacio(Empresa emp)
{
    int posicion_Vacia = -1;
    for(int i = 0 ; i < 4 ; i++)
    {
        if (getEDAD(emp->e[i]) == -1)
        {
            posicion_Vacia = i;
            i = 5;
        }
    }
    return posicion_Vacia;
}



void eliminarEmpleado(Empresa emp,char nombre[30])
{
    printf("\n TESTEMAOS");
    for (int i = 0; i < 4 ; i++ )
    {
        if (strcmp(getNOMBRE(emp->e[i]),nombre) == 0 )
        {
            destructor(emp->e[i]);
            emp->e[i] = iniciarEmpleado();
        }
    }
}

void ordenarSUELDO(Empresa emp)
{
  Empleado mayor;
  for (int i = 0;i < 4 ; i++ )
  {
      for(int j = i+1 ; j < 4 ; j++)
      {
          if(getSUELDO(emp->e[j]) < getSUELDO(emp->e[j]))
          {
              mayor = emp->e[i];
              emp->e[i] = emp->e[j];
              emp->e[j] = mayor;
          }
      }
  }
}






