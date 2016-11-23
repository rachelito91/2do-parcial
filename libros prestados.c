/* Hacer un programa en C que permita almacenar numero de libros
prestados durante 10 dias en una biblioteca.
Obtener el promedio de libros prestados durante esos diez dias y mostrar en
pantalla cuantos dias se prestaron menos libros que el promedio*/


#include <stdio.h>
 #include <stdlib.h>
 int main ()
 {
     int lib[10];
     int i, suma=0,men=0,may=0;
     float promedio;
     printf("\nPrograma libros prestados\n");

     for(i=0;i<10;i++)
     {
         printf("\n\nLibros prestados dia %d: ",i+1);
         scanf("%d",&lib[i]);

         while(lib[i]<0)
         {
             printf("\n\n\t**ERROR**");
             printf("\n\nLibros prestados dia %d: ",i+1);
             scanf("%d",&lib[i]);
         }
         suma=suma+lib[i];
     }
     promedio=suma/10;

     printf("\n\n\t\t\tPromedio libros: %.2f",promedio);

     for(i=0;i<10;i++)
     {
         if(lib[i]<promedio)
         {
             men=men+1;
         }
         else
         {
             may=may+1;
         }
     }

     printf("\n\n\t\t\tDias mayores al promedio: %d",may);
     printf("\n\n\t\t\tDias menores al promedio: %d\n\n\n",men);



 }
