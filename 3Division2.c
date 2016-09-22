/*
Nombre:Division2
Autor:Julian Calle
Descripcion:El programa recibe el numero a dividir e imprime en pantalla el numero de veces que dicho numero es divisible (división entera) por dos.
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>


 int main(int argc, char *argv[])
 {
   int i, num, counter, val;

   printf("Ingrese un numero entero:\n");
   scanf("%d",&num);
   counter = 0;
   val = num;
   do
     {
       val=floor(val/2);
       counter+=1;
     }while(val!=1);

   printf("es divisible por dos %d veces\n", counter);

   return 0;
 }
