#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[20];
    int nota;

}eAlumno;

int main()
{
eAlumno alumno[5];
eAlumno* ptralumno;
ptralumno = alumno;

for(int i=0; i<5; i++)
{
fflush(stdin);
printf("Ingrese nombre de alumno: ");
gets(alumno[i].nombre);

fflush(stdin);
printf("Ingrese nota del alumno: ");
scanf("%d", alumno[i].nota);

printf("%s %d", alumno);
}

for(int i=0; i<5; i++)
{
printf("Ingrese nombre de alumno: ");
scanf(ptralumno[i].nombre);
fflush(stdin);

printf("Ingrese nota del alumno: ");
scanf(ptralumno[i].nota);


printf("%s %d", ptralumno);
}



return 0;
}
