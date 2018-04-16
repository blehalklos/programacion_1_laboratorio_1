#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char nombre [20];
    int legajo;
    float sueldo;
    char sexo;

}eEmpleado;

void mostrarEmpleado(eEmpleado);

int main()
{
    eEmpleado unEmpleado = {"Juan",1234, 50000.50, 'm'};
/*
    unEmpleado.legajo = 1234;
    strcpy(unEmpleado.nombre, "Juan");
    unEmpleado.sueldo = 50000.50;
    unEmpleado.sexo = 'm';
*/
    printf("Ingrese nombre: ");
    gets(unEmpleado.nombre);
    printf("Ingrese legajo: ");
    scanf("%d", &unEmpleado.legajo);
    printf("Ingrese sueldo: ");
    scanf("%f",&unEmpleado.legajo);
    fflush(stdin);
    printf("Ingrese sexo: ");
    scanf("%c", &unEmpleado.sexo);

    mostrarEmpleado(unEmpleado);

    return 0;
}
    void mostrarEmpleado(eEmpleado emp)
    {
    printf("nombre: %s \n", emp.nombre);
    printf("legajo: %d \n", emp.legajo);
    printf("sueldo: %.2f \n", emp.sueldo);
    printf("sexo: %c \n", emp.sexo);
    }
