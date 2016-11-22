#include<stdio.h>
#include<stdlib.h>

int main(){

int cal[10],n,c,nv=0;
int calapro=0;
int calrepro=0;

printf("***********CALIFICACIONES*************** \n");
for(n=0;n<=9;n++){

    printf("\n Ingresa calificacion #%i \t",n+1);
    scanf("%i",&cal[n]);


    while(cal[n]<0 || cal[n]>10){

        printf("\n ERROR! \n Ingrese de nuevo calificacion #%i \t",n+1);
        scanf("%i",&cal[n]);
    }
    }
     do{
        calapro=0;
        calrepro=0;
        nv=0;
        printf("\n Ingrese calificacion que desea buscar: ");
        scanf("%i",&c);

        for(n=0;n<10;n++){
            if(cal[n]>=6){
                    calapro++;
            }
            else{
                calrepro++;
            }
        }

        for(n=0;n<10;n++){
            if(c==cal[n]){
                nv++;
                printf("\n El alumno con # lista %i tiene:  %i",n+1,c);

            }
        }

        printf("\n\n\t Se encontro la calificacion %i veces",nv);
        printf("\n\t Los estudiantes reprobados son: %i",calrepro);
        printf("\n\t Los estudiantes aprobados son: %i",calapro);
        printf("\n\n Desea buscar otra calificacion? 1=Si \t");
        scanf("%i",&n);

    }

    while(n==1);
    system("pause");
return 0;
}
