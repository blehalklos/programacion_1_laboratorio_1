#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre [41];
    char localidad [41];

    printf ("Nombre: ");
    fflush(stdin);
    scanf("%s", nombre);

    printf("Localidad: ");
    fflush(stdin);
    scanf("%s", localidad);

    printf("Usted se llama %s y jugo al %s", nombre, localidad);

    return 0;
}
