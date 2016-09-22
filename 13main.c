/*
Nombre:Main
Autor:Julian Calle
Descripcion:se verifica que tipo de variable requiere de mayor tiempo de computo a la hora de realizar el mismo procedimiento
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

#include "13Sec_oper_int.c"
#include "13Sec_oper_float.c"
#include "13Sec_oper_double.c"
#include "13Sec_oper_long_double.c"

 int main(int argc, char *argv[])
 {
   entero();
   printf("\n");
   Pfloat();
   printf("\n");
   doble();
   printf("\n");
   doblel();
   
   return 0;
 }
