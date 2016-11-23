/* Programa que permite calcular la potencia de un numero */

 #include<stdio.h>
 #include<stdlib.h>

 int main (){
     int num,pot,i,elevacion=1;
      printf("************ Calcula la potencia de un numero **************\n\n");

      printf("Ingrese el numero:\n\n",163);
      scanf("%i",&num);

      printf("Ingrese la potencia a la que quiere elevar el numero:\n\n");
      scanf("%i",&pot);

      for (i=1;i<=pot;i++){
           elevacion = elevacion*num;
      }
      printf("El resultado elevado es: %i\n",elevacion);

 system("PAUSE");
return 0;}
