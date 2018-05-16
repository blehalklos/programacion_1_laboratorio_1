#include <stdio.h>
#include <stdlib.h>

int main()
{
typedef struct
{
    char nombre[20];
    int nota;

}eAlumno;

eAlumno auxiliarAlumno;
eAlumno* punteroAlumno;

printf("Ingrese nombre de alumno: ");
gets(auxiliarAlumno.nombre);
fflush(stdin);

printf("Ingrese nota del alumno: ");
scanf("%d", &auxiliarAlumno.nota);

punteroAlumno = &auxiliarAlumno;

printf("%s %d", punteroAlumno);

return 0;
}
