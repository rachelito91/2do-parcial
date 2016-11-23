/* Programa de un arreglo usando el metodo de la burbuja para orenar numeros por su tamaño de forma ascendente*/

#include <stdio.h>
#include <stdlib.h>

int main (){

	int ar[10];
	int i,j;

printf("\n Programa Orden de Numeros\n\t");

	for(i=0;i<=9;i++)
	{
		printf("\n Ingresa los numeros: \n");
		scanf("%d",&ar[i]);

	}
		for(i=0;i<=8;i++)
		{
			for(j=i+1;j<=9;j++)
			{
				int temp;
				if (ar[i] > ar[j])
				{
					temp = ar[i];
					ar[i] = ar[j];
					ar[j] = temp;


				}
			}

		}
	     for(i=0;i<=9;i++)
	     {
	     	printf("\n\t%d\n\t",ar[i]);

		 }

	system("pause");
	return 0;
}
