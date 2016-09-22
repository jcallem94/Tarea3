/*
Nombre:Masa Relativista
Autor:Julian Calle
Descripcion:calcula el valor de la masa de un objeto para diferentes valores de la velocidad de la partícula. El programa recibe el valor del incremento dv entre valores sucesivos de la velocidad y produce como resultado final una archivo de columnas. La primer columna contiene el valor de la velocidad de la partícula v, la segunda el valor de v/c y la
tercera contiene el valor de la masa de la partícula. 
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define c 300000 //Km*s^-1

double Masa(double v, double Mo )
{
  double M, vc = v/c;

  M=Mo/sqrt(1-vc*vc);

  return M;

}

 int main(int argc, char *argv[])
 {
   int i, N;
   double Mo, M, v, vc, dv;

   Mo = 1; //Kg
   
   FILE *pf;

   pf=fopen("datos.dat","w");
   
   printf("Ingrese el valor sucesivo de la velocidad (dv) en Km:\n");
   scanf("%lf",&dv);

   N = c/dv;

   for(i=0;i<=N;i++)
     {
       v = i*dv;
       vc = v/c;
       M = Masa(v,Mo);
       fprintf(pf,"%lf %lf %lf \n", v, vc, M);
     }

   fclose(pf);
   
   return 0;
 }
