#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i=0, j=0, suma = 0, m[2][3];
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Ingrese la fila %d y columna %d : ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for (i=0;i<3;i++){
    m[0][i]*=4;
    }
        for(j=0;j<2;j++){
           m[j][2]*=3;
        }
        int menor = m[0][0];
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            if(m[i][j]<menor){
                menor = m[i][j];
            }
        }
    }
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            suma+= m[i][j];
        }
    }
    for (i=0;i<2;i++){
            printf("\n");
        for(j=0;j<3;j++){
            printf("[ %d ] ",m[i][j]);
        }
    }
    printf("\n El menor es : %d \n",menor);
    printf("La suma es de : %d", suma);
}
