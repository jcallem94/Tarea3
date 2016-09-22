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
  fprintf(script,"set xlabel 'N(iteraciones)' \n"); 
  fprintf(script,"set ylabel 'time[s]' \n");
  fprintf(script,"set term png \n");
  fprintf(script,"set output 'grafica.png' \n");
  fprintf(script,"plot 'datos1.dat' u 1:2 w l title 'sin registro', 'datos2.dat' u 1:2 w l title 'con registro'  \n");
  fclose(script);

  system("gnuplot grafic.plt");
  system("rm ./*.plt");
  
  return 0;
 }
