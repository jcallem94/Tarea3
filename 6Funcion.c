/*
Nombre:Funcion
Autor:Julian Calle
Descripcion:evalua   (en   una   rutina   diferente   al   main)   la   función f(x)=sin(x)*ln(2*x+1)*sinh(x) en el intervalo [0, 10]. El programa debe recibir el tamaño del paso (dx) entre evaluaciones sucesivas de la función.El resultado se escribe en un archivo de  tres columnas. La primer columna conteniendo el valor i del incremento en x (x=i*dx), la segunda columna debe contener x,  y la tercera conteniendo el valor de f(x).
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double Funcion(double x)
{
  double func;
  func = sin(x)*log(2.0*x+1.0)*sinh(x);
  return func;
}

 int main(int argc, char *argv[])
 {

   int i, N;
   double dx, x, fx;

   FILE *pf;
   pf = fopen("datos1.dat","w");

   printf("Entregue el valor del diferencial dx: \n");
   scanf("%lf",&dx);
   
   N = 10.0/dx;
   fprintf(pf,"%d\n",N);
   
   for(i=0;i<=N;i++)
     {
       x = i*dx;
       fx = Funcion(x);
       fprintf(pf,"%d %lf %lf\n", i, x, fx);
     }

   fclose(pf);

 }
