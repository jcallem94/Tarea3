/*
Nombre:Multiplicacion de matrices 2
Autor:Julian Calle
Descripcion:calcula la multiplicación de dos matrices usando como algoritmos central la siguientes forma: 
for i=1..n
for k=1..n
for j=1..n
c[i,j] += a[i,k]*b[k,j]
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>


 int main(int argc, char *argv[])
 {
   int i, j, k, n=3;
   double a[n][n], b[n][n], c[n][n], time;
   clock_t begin, end;

   
   for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++)
	 {
	   a[i][j] = 2.0*(i+1)*(j-1) ;
	   b[i][j] = (i-1)*(j+1);
	   c[i][j] = 0.0;
	 }
     }

   begin = clock();
   for(i=0;i<n;i++)
     {
       for(k=0;k<n;k++)
	 {
	   for(j=0;j<n;j++)
	     {
	       c[i][j] += a[i][k]*b[k][j];
	     }
	 }
     }
   end = clock();

   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);   

   printf("Tardo: %lf \n", time);
   printf("Y el resultado es: \n");
   
   for(i=0;i<n;i++)
     {
       printf("|\t");
       for(j=0;j<n;j++)
	 {
	   printf("%lf \t",c[i][j]);
	 }
       printf("|\n");
     }
   
   return 0;
 }
