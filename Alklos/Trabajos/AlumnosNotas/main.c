#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    int acumuladorNota = 0;
    int edad;
    char sexo;
    float promedio;
    int contadorVarones = 0;
    int i;
    int flag = 0;//minimo
    int flag2 = 0;//mas joven
    int flag3 = 0;//mujer
    int notaMin;
    int edadJoven;
    char sexoMin;
    char sexoJoven;
    int notaJoven;
    int edadMujer;
    int notaMujer;
    float prom;

    for (i=0 ; i<5 ; i++){

        printf("Ingrese la nota del alumno ");
        scanf ("%d", &nota);

        while(nota < 0 || nota > 10){
            printf("Nota invalida, debe ser entre 0 y 10 ");
            scanf ("%d", &nota);
        }

        printf("Ingrese la edad del alumno ");
        scanf("%d", &edad);

        printf("Ingrese el sexo del alumno(F->Femenino, M->Masculino) ");
        fflush(stdin);
        scanf("%c", &sexo);
        sexo = tolower(sexo);

        while(sexo != 'f' && sexo != 'm'){
            printf("Sexo invalido, recuerde, F->Femenino M->Masculino ");
            fflush(stdin);
            scanf("%c", &sexo);
            sexo = tolower(sexo);
        }

        if(sexo == 'm' && nota >= 6){
            contadorVarones++;
        }

        acumuladorNota = nota + acumuladorNota;

        if (flag == 0){
            notaMin = nota;
            sexoMin = sexo;
            flag = 1;
        }

        if (flag2 == 0){
            edadJoven = edad;
            notaJoven = nota;
            sexoJoven = sexo;
            flag2 = 1;
        }

        if (nota < notaMin){
            notaMin = nota;
            sexoMin = sexo;

        }

        if (edad < edadJoven){
            notaJoven = nota;
            sexoJoven = sexo;

        }

        if(sexo == 'f'){

            if(flag3 == 0){
                edadMujer = edad;
                notaMujer = nota;
                flag3 = 1;

        }
        }



    }
    prom= acumuladorNota / 5;

    printf("El promedio de las notas totales es %d/n", acumuladorNota);
    printf("La nota mas baja es %d y el sexo del alumno es %c/n",notaMin, sexoMin);
    printf("La cantidad de varones con nota mayor a 6 es %d/n", contadorVarones);
    printf("El sexo del alumno mas joven es %c y su nota es %d/n", sexoJoven, notaJoven);

    if(flag3 = 0){
        printf("No se ingresaron mujeres");
    }
    else{
        printf("La edad de la primer mujer ingresada es %d y su nota es %d", edadMujer, notaMujer);
    }



    return 0;
}
