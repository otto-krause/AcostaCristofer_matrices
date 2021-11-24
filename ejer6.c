#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0, m[21][7], total=0, prom=0;
    for(i=1;i<21;i++){
        for(j=1;j<7;j++){
            printf("Ingrese la cantidad de habitantes que hay en el departamento %d piso %d : ",j,i);
            scanf("%d",&m[i][j]);
        }
    }
    for(i=1;i<21;i++){
        for(j=1;j<7;j++){
            total+=m[i][j];
        }
    }
    for(i=1;i<21;i++){
        prom=0;
        for(j=1;j<7;j++){
                prom+=m[i][j];
        }
        prom=prom/6;
        printf("Promedio de habitantes del piso %d es : %d \n",i,prom);
    }
    printf("Total de habitantes es : %d ",total);
}
