/*
Nombre:Pi
Autor:Julian Calle
Descripcion:Calcula pi mediante dos series. El programa recibe el numero de terminos que se quieren utilizar en dichas series
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double Pi1(int N)
{
  int i;
  double pi, pii;
  
  pi=1.0;
  pii=0.0;

 for(i=0;i<N;i++)
     {
       pii = sqrt(2.0+pii);
       pi *= pii/2.0;
     }
  
   pi = 2.0/pi;
  
  return pi;
}


double Pi2(int N)
{
  int i;
  double pi = 0.0;
  
  for(i=0;i<N;i++)
    pi += pow(-1.0,i)/(2.0*i+1.0);
   
  pi = 4.0*pi;
  
  return pi;
}

 int main(int argc, char *argv[])
 {

   int i, N;
   double pi1, pi2;

   printf("Entregue el numero de terminos:\n");
   scanf("%d",&N);

   pi1 = Pi1(N);
   pi2 = Pi2(N);
   
   printf("El valor de pi para la primera serie es: %.16lf \n", pi1);
   printf("El valor de pi para la segunda serie es: %.16lf \n", pi2);
   printf("El valor de pi en math es: %.16lf \n", M_PI);

   return 0;
 }
