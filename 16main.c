/*
Nombre:Main
Autor:Julian Calle
Descripcion:Verifica como es la forma optima de fraccionar una suma de tal manera que disminuya en mayor proporcion el tiempo de computo
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

#include "./16Fraccionar2.c"
#include "./16Fraccionar3.c"
#include "./16Fraccionar4.c"
#include "./16Fraccionar5.c"
#include "./16Fraccionar7.c"
#include "./16Fraccionar10.c"

 int main(int argc, char *argv[])
 {

   Frac2();
   Frac3();
   Frac4();
   Frac5();
   Frac7();
   Frac10();
   
   return 0;
 }
