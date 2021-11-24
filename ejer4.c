#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i=0, j=0, m[4][13], total = 0, lineas = 0;
    for(i=1;i<4;i++){
        for(j=1;j<13;j++){
            printf("Ingrese cuanto recaudo el auto %d linea %d : ",j,i);
            scanf("%d",&m[i][j]);
        }
    }
    for(i=1;i<4;i++){
        for(j=1;j<13;j++){
            total+=m[i][j];
        }
    }
    for(i=1;i<4;i++){
        lineas=0;
        for(j=1;j<13;j++){
                lineas+=m[i][j];
        }
        printf("Recaudacion de la linea %d es : %d \n",i,lineas);
    }
    printf("La recaudacion total es : %d ",total);
}
