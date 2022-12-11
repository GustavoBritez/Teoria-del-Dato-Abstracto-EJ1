#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleados.h"
#define TAM 2
struct Estructura_Empleados
{
    char nombre[30];
    char apellido[30];
    int edad;
    int sueldo;
};
// Inicia en vacio empleado
Empleado iniciarEmpleado()
{
    Empleado e = malloc(sizeof(struct Estructura_Empleados));
    strcpy(e->apellido,"Name");
    strcpy(e->nombre,"Ape");
    e->edad = -1;
    e->sueldo = 0;
    return e;
}

Empleado crearEmpleado()
{
    Empleado e = malloc(sizeof(struct Estructura_Empleados));
    printf("\n Ingrese Nombre EMPLEADO");
    fflush(stdin);
    gets(e->nombre);
    printf("\n Ingrese Apellido EMPLEADO");
    fflush(stdin);
    gets(e->apellido);
    printf("\n Ingrese EDAD EMPLEADO");
    fflush(stdin);
    scanf("%d",&e->edad);
    e->sueldo = 50000 + e->edad * 30;
    return e;
}
void mostrarEmpleado(Empleado e){
    if(e->edad !=-1){
        printf("\n\n  NOMBRE EMPLEADO: %s",e->nombre);
        printf("\n APELLIDO EMPLEADO : %s",e->apellido);
        printf("\n EDAD EMPLEADO: %d",e->edad );
        printf("\n SUELDO EMPLEADO : %d", e->sueldo);
        printf("\n \n");
}
};
void destructor(Empleado e)
{
    free(e);
}


int getEDAD( Empleado e)
{
    return e->edad;
}
char * getNOMBRE( Empleado e)
{
    return e->nombre;
}
char * getAPE( Empleado e)
{
    return e->apellido;
}
int getSUELDO(Empleado e)
{
    return e->sueldo;
}
