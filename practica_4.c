#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char *p_nombre, *p_apellido, *p_nombrecompleto;
    p_nombre = malloc (10 * sizeof(char));

    printf("Escribe tu nombre: ");
    gets(p_nombre);
    fflush(stdin);
    
    printf("Tu nombre es: %s\n", p_nombre);

    p_nombrecompleto = realloc(p_nombre, 30 * sizeof(char));

    if (p_nombrecompleto != NULL){
        p_apellido = malloc (15 * sizeof(char));

        printf("Escribe tu apellido: ");
        gets(p_apellido);
        fflush(stdin);

        printf("Tu apellido es: %s\n", p_apellido);
        strcat(p_nombrecompleto, " ");
        strcat(p_nombrecompleto, p_apellido);

        printf("Tu nombre completo es: %s \n", p_nombrecompleto);
        free(p_nombrecompleto);
    }else{
        printf("ERROR AL GUARDAR LOS DATOS\n");
    }
        
    return 0;
}