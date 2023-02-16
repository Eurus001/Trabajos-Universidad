// Division linear
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void cleanbuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

float verify(float num){
    int res = 0;

    do{
        if(scanf("%f", &num) != 1){
            printf("\nEntero no valido\n");
            printf("Ingrese otro numero >>>>");
        }else{
            res = 1;
        }
        cleanbuffer();
    }while(res == 0);
   return num;
}

void SecuenciaRecursiva(){
    int numX, numY, a, b, answer = 0;
    system("cls");
    printf("    Sentencia Recursiva\nIngrese el primer numero: ");
    numX = (int) verify(numX);
    printf("Ingrese el segundo numero");
    numY = (int) verify(numY);
    printf("\nProcedimiento: \n");
    a = numX;
    b = numY;
    if (a<b){
        answer = 0;
    }else{
        while(a>=b){
            a-=b;
            answer++;
            printf("Q (%d, %d)  + 1\n", a, b);
            }
        }
    printf("\nRespuesta:\nQ(%d, %d) = %d\n\n", numX, numY, answer);
    printf("Presione una tecla para volver");
    getch();
}
void SecuenciaLineal(){
    int numX, numY, a, b, answer = 0;   
    system("cls");
    printf("    Sentencia Lineal\nIngrese el primer numero ");
    numX = (int) verify(numX);
    printf("Ingrese el segundo numero: ");
    numY = (int) verify(numY);
    printf("Respuesta: ");
    answer = (int) numX/numY;
    printf("Q (%d, %d) = %d / %d\n=%d\n\n", numX, numY, numX, numY, answer);
    printf("Presione una tecla para volver");
    getch();
}

int main(){
    int vflag = 1, opc;

    while (vflag){
        printf("Secuencias Repetitivas\n    1. Secuencia recursiva\n    2. Secuencia lineal/no recursiva\n    3. Cerrar\n");
        opc = (int) verify(opc);
        switch(opc){
            case 1:
                SecuenciaRecursiva();
                break;
            case 2:{
                SecuenciaLineal();
                break;
            }
            default: vflag = 0;
            break;
        }
        system("cls");

    }
    return 0;
}