/*
Nombre: Coseno
Autor:Julian Calle
Descripcion:Calcula el coseno de alpha con la serie de taylor
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>


 int main(int argc, char *argv[])
 {
   int i, N;
   double coseno, x;

   printf("Ingrese el angulo en grados: \n");
   scanf("%lf",&x);
   x = x*M_PI/180.0;
   printf("Ingrese el numero de iteraciones: \n");
   scanf("%d",&N);

   coseno = 0.0;
   
   for(i=0;i<N;i++)
     {
       coseno += pow(-1.0,i)*pow(x,2.0*i)/tgamma(2.0*i+1.0);
     }

   printf("Coseno(%lf)=%lf\n", x*180.0/M_PI, coseno);
   
   return 0;
 }
