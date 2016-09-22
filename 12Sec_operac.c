/*
Nombre:Secuencia de operaciones
Autor:Julian calle
Descripcion:Se verifica que trabajar con vectores requiere menos tiempo de computo que cuando se trabaja con "matrices".
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

 int main(int argc, char *argv[])
 {
   clock_t begin, end;
   int i, k, length=100, nvector=100;
   double time, a[length], A[length][nvector], B[length][nvector], b[length], c[length], C=3.0;
   
   for(i=0;i<length;i++)
     {
       b[i] = 1.0*i;
       c[i] = 3.0;
     }

   for(k=0;k<nvector;k++)
     {
       for(i=0;i<length;i++)
	 {
	   B[i][k]=1.0*i;
	 }
     }
   
   begin = clock();
   for(i=0;i<length;i++)
     {
       a[i] = b[i]*C;
     }
   end = clock();
   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);   

   printf("El primer caso tarda: %lf\n",time);
   
   begin = clock();
   for(k=0;k<nvector;k++)
     {
       for(i=0;i<length;i++)
	 {
	   A[i][k] = B[i][k]*c[i];
	 }
     }
   end = clock();
   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);   

   printf("El segundo caso tarda: %lf\n",time);
   
   return 0;
 }
