#include<stdio.h>
#include<stdlib.h>
void main()
{
    int m[4][13]={0},prom=0,total=0,i=0,j=0;
    do
    {
        printf("Numero de coche : \n");
        scanf("%d",&j);
        if(j>=1)
        {
            printf("Ingrese la linea : \n");
            scanf("%d",&i);
            printf("Ingrese lo recaudado : ");
            scanf("%d",&m[i][j]);
        }
        else
        {
            break;
        }
    }
    while(j>=1);
    {
        if(j<=1)
        {
        for(int i=1;i<=3;i++)
        {
            prom=0;
            for(int j=1;j<=12;j++)
            {
                if(m[i][j]>0)
                {
                    printf("La recaudacion de la linea %d colectivo %d es :%d \n",i,j,m[i][j]);
                    prom=prom+m[i][j];
                }
            }
                total=total+prom;
        }
        }
    }
    printf("La recaudacion total es : %d",total);
}
