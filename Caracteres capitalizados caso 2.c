/*
Este programa lee una cadena de caracteres del usuario y la convierte a mayúsculas usando la función aMay(). Después muestra la
cadena original y la cadena en mayúsculas al usuario. El programa pregunta al usuario si desea continuar y, si la respuesta es sí,
vuelve a leer una nueva cadena de caracteres.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
La función tMay() recibe como argumento una cadena de caracteres, luego con un ciclo for verifica cada caracter de la cadena para
convertirlo en mayúsculas si es necesario
*/

void tMay(char a[]){
    int i;
    for (i = 0; i < strlen(a); i++){
        if (islower(a[i])){
            a[i] = toupper(a[i]);
        }
    }
}

/*
Función main que recibe el texto del usuario y luego lo muestra en pantalla, contiene un bucle while para que esta acción se
repita hasta que el usuario diga que no
*/

int main(){
    char texto[101];
    int flag = 1;
    while (flag == 1){
        printf("Ingresar un texto (max 100 caracteres): ");
        fgets(texto, 101, stdin); 
        printf("Texto original: %s", texto);
        tMay(texto);
        printf("Texto en mayusculas: %s", texto);
        printf("Desea continuar? (1 - si, 0 - no) \n");
        scanf("%d", &flag);
        int c;
        while ((c = getchar()) != '\n' && c != EOF);  
        /*
        Se vacia el buffer de entrada porque si no en las siguientes iteraciones ya no funciona el código por alguna razón
        se busca el EOF con el ciclo while y cuando se encuentra el ciclo termina y se vacía el buffer (sacado de internet)
        */ 
    }
    return 0; // Si se sale del while se retorna 0 y termina el programa
}
