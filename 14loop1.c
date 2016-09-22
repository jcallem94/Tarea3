/*
Nombre:loop1
Autor:Julian Calle
Descripcion:Realiza la ejecucion de un loop y determina la duracion de este para comprar con el generado en loop2
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

 int main(int argc, char *argv[])
 {
   clock_t begin, end;
   int i, N=1000000, loop;
   double x[N],p,time;

   begin = clock();
   for(loop=0;loop<10;loop++)
     {
       for(i=0;i<N;i++)
	 {
	   p = 2.0*x[i];
	 }
     }
   end = clock();
   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);

   printf("tardo: %lf \n", time);
   
   return 0;
 }
