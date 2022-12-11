#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED
struct Estructura_Empresa;

typedef struct Estructura_Empresa * Empresa;


Empresa iniciarEmpresa();

void crearEmpresa(Empresa emp);
void mostrarEmpresa(Empresa e);

int cantidadEmpleados();
int Buscar_Espacio(Empresa e);
void agregarEmpleado(Empresa e,int cantidad);
void eliminarEmpleado(Empresa e, char nombre[30]);
void ordenarSUELDO(Empresa emp);

#endif // EMPRESA_H_INCLUDED
