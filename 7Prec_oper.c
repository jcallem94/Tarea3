/*
Nombre: Precedencia de operadores
Autor:Julian Calle
Descripcion:Verifica la precedencia de operadores mediante la evaluacion de una funcion escrita de diferentes formas
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double func1(double x, double a, double b)
{
  double fx;
  fx = sin(x)+cos(x)/2*a+b;
  return fx;
}

double func2(double x, double a, double b)
{
  double fx;
  fx = sin(x)+cos(x)/2*(a+b);
  return fx;
}

double func3(double x, double a, double b)
{
  double fx;
  fx = (sin(x)+cos(x)/2)*a+b;
  return fx;
}

double func4(double x, double a, double b)
{
  double fx;
  fx = ((sin(x)+cos(x))/2)*(a+b);
  return fx;
}

 int main(int argc, char *argv[])
 {

   double x, a, b, fx1, fx2, fx3, fx4;
   x=1.0;
   a=2.0;
   b=3.0;

   fx1=func1(x, a, b);
   fx2=func2(x, a, b);
   fx3=func3(x, a, b);
   fx4=func4(x, a, b);

   printf("El valor de la funcion 1 es: %lf\n",fx1);
   printf("El valor de la funcion 2 es: %lf\n",fx2);
   printf("El valor de la funcion 3 es: %lf\n",fx3);
   printf("El valor de la funcion 4 es: %lf\n",fx4);

   return 0;
 }
