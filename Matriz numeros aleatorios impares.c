#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main()
{
    int A[5][5];
    int i,j,k;
    srand(time(NULL));
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            do
            {
                k = rand() % 25*4 + 1;
            } while (k%2 == 0);
            A[i][j] = k;
        }    
    }
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        printf("%d ", A[i][j]);
        }    
        printf("\n");
    }
    return 0;
}
