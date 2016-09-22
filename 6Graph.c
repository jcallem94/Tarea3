/*
Nombre:
Autor:
Fecha:
Descripcion:
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

 int main(int argc, char *argv[])
 {
  
  FILE *script;
  script=fopen("grafic.plt","w");
  fprintf(script,"reset \n");
  fprintf(script,"set xlabel 'x' \n"); 
  fprintf(script,"set ylabel 'f(x)' \n");
  fprintf(script,"set term png \n");
  fprintf(script,"set output 'grafica.png' \n");
  fprintf(script,"plot 'datos1.dat' u 2:3 w l title 'primer programa', 'datos2.dat' u 2:1 w l title 'segundo programa'\n");
  fclose(script);

  system("gnuplot grafic.plt");
  system("rm ./*.plt");
  
  return 0;
 }
