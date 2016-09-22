/*
Nombre:Read
Autor:Julian Calle
Descripcion:lee la tabla producida en 6Funcion.c, y escriba otro archivo de dos columnas, en este caso la primer columna tiene el valor f(x) y la segunda columna el valor x.
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
 {
   int i, N, j;

   FILE *pf;

   pf=fopen("datos1.dat","r");
   
   fscanf(pf,"%d",&N);

   int index[N];
   double x[N],fx[N];
   
   for(i=0;i<=N;i++)
     {
       fscanf(pf,"%d %lf %lf", &index[i], &x[i], &fx[i]);
     }

   fclose(pf);

   pf=fopen("datos2.dat","w");

   for(i=0;i<=N;i++)
     {
       fprintf(pf,"%lf %lf \n", fx[i], x[i]);
     }

   fclose(pf);   

   return 0;
 }
