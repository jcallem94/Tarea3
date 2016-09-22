/*
Nombre: Seno
Autor:Julian Calle
Descripcion:Calcula el seno de alpha con la expancion en taylor
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>


 int main(int argc, char *argv[])
 {
   int i, N;
   double seno, x;

   printf("Ingrese el angulo en grados: \n");
   scanf("%lf",&x);
   x = x*M_PI/180.0;
   printf("Ingrese el numero de iteraciones: \n");
   scanf("%d",&N);

   seno = 0.0;
   
   for(i=0;i<N;i++)
     {
       seno += pow(-1.0,i)*pow(x,2.0*i+1.0)/tgamma(2.0*i+2.0);
     }

   printf("Seno(%lf)=%lf\n", x*180.0/M_PI, seno);
   
   return 0;
 }
