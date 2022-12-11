#ifndef EMPLEADOS_H_INCLUDED
#define EMPLEADOS_H_INCLUDED
struct Estructura_Empleados;


typedef struct Estructura_Empleados * Empleado;

Empleado crearEmpleado();
Empleado iniciarEmpleado();


int getEDAD(Empleado e);
int getSUELDO(Empleado e);
char * getNOMBRE( Empleado e);
char * getAPE( Empleado e);
void destructor(Empleado e);
void mostrarEmpleado(Empleado e);

#endif // EMPLEADOS_H_INCLUDED
