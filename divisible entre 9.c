/* Hacer un programa que registre un numero diferente a cero y que sea divisible entre 9 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numdiv, compara;
    char opc;

    do
    {
        system("cls");
        printf("*************Programa de numeros divisibles entre 9****************\n\n");
        printf("Ingrese un numero para verificar que sea divisible entre 9\n\n");
        scanf("%d", &numdiv);
        while(numdiv==0)
        {
            printf("El numero NO puede ser CERO\n\n");
            printf("Ingrese otro numero para verificar:\n\n");
            scanf("%d", &numdiv);
        }
        compara=numdiv%9;
        if(compara==0)
        {
            printf("El numero SI es divisible entre 9\n\n");
        }
        else
        {
            printf("El numero NO es divisible entre 9\n\n");
        }
        fflush(stdin);
        printf("\nDesea ingresar otro numero?  (s/n)\t");
        scanf("%c",&opc);
    }while(opc=='s' || opc=='S');

    system("pause");
    return 0;
}

