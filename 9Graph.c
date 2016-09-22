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
  fprintf(script,"set xlabel 'v[km/s]' \n"); 
  fprintf(script,"set ylabel 'M[kg]' \n");
  fprintf(script,"set term png \n");
  fprintf(script,"set output 'grafica.png' \n");
  fprintf(script,"plot 'datos.dat' u 1:3 w l title 'Masa relativista'\n");
  fclose(script);

  system("gnuplot grafic.plt");
  system("rm ./*.plt");
  
  return 0;
 }
