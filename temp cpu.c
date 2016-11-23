/*En una empresa fabricante de cpu´s, se requiere de un programa que promedie las temperaturas
 que va alcanzando un procesador durante un lapso de tiempo, cuando se ingrese el valor cero,
 se mostrará la suma total de temperaturas y su promedio.*/

 #include<stdio.h>
 #include<stdlib.h>
 int main() {
	float promedio;
	int tempe, sumtemp=0, i=1, time;

	printf("***************Promedio de temperatura de un CPU ********************** \n\n\n");
	printf("Ingrese el tiempo que el procesador lleva encendido (hrs):\t\n\n",162);
	scanf("%i",&time);

	while(i<=time) {
		printf("Ingrese temperatura que tenia el CPU (fin con cero):\t\n\n",i);
		scanf("%i",&tempe,i);
		sumtemp+=tempe;
		i++;
	}

	promedio=(float)sumtemp/time;
	printf("La suma de las temperaturas es: %i \n\n\n",sumtemp);
	printf("El promedio de las temperaturas es:%0.2f\n\n\n",promedio);


	system ("PAUSE");
	return 0;
}
