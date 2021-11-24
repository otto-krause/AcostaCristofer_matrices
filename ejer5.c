#include<stdio.h>
#include<stdlib.h>
void main(){
 int i = 0, j=0, cambio = 0, m[101][4], nota=0, l=0, t=0;
 for(i=1;i<101;i++){
        for(j=1;j<4;j++){
            printf("Ingrese nota del %d trimestre del alumno %d: ",j,i);
            scanf("%d",&m[i][j]);
        }
 }
 do{
    printf("Desea corregir alguna nota ?\n");
    printf("Si = 1 / No = 0  \n");
    scanf("%d",&cambio);

    if(cambio==1){
        printf("Ingrese el numero de legajo:");
        scanf("%d",&l);
        printf("Ingrese el trimestre:");
        scanf("%d",&t);
        nota=m[l][t];
        printf("Ingrese la nota correspondiente:");
        scanf("%d",&m[l][t]);
        printf("Seguro de cambiar la nota %d por el %d ?\n ",nota,m[l][t]);
        printf("Si = 1 / No = 0  \n");
        scanf("%d",&cambio);
    }
 }while(cambio==1);
}
