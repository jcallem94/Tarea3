/*
Nombre:Registro
Autor:Julian Calle
Descripcion:Verifica que realizar la optimizacion hecha abajo dismiuye el tiempo de computo.
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

 int main(int argc, char *argv[])
 {
   clock_t begin, end;
   int i, j, N;
   double time, t1, t2, s, c, x, y, alpha;

   FILE *pf;

   N = 10000;
   x = 2.0;
   y = 3.0;
   alpha = 1.4;

   pf=fopen("datos1.dat","w");
   
   for(i=0;i<N;i+=10)
     {
       begin = clock();
       for(j=0;j<i;j++)
	 {
	   t1 = sin(alpha)*x+cos(alpha)*y;
	   t2 =-cos(alpha)*x+sin(alpha)*y;
	 }
       end = clock();
       time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);
       fprintf(pf,"%d %lf \n", i, time);
     }
   
   fclose(pf);

   pf=fopen("datos2.dat","w");

   s = sin(alpha);
   c = cos(alpha);
   
   for(i=0;i<N;i+=10)
     {
       begin = clock();
       for(j=0;j<i;j++)
	 {
	   t1 = s*x+c*y;
	   t2 =-c*x+s*y;
	 }
       end = clock();
       time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);
       fprintf(pf,"%d %lf \n", i, time);
     }
   
   fclose(pf);
   
   return 0;
 }
