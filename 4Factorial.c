/*
Nombre:Factorial
Autor:Julian Calle
Descripcion:Calcula el factorial de un numero dado.
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int factorial(int n)
{
  if(n!=1)
    {
      return(n * factorial(n-1));
    }
  else return 1;
}

 int main(int argc, char *argv[])
 {
   int n;
   long int fact;
   
   printf("Ingrese el numero para el cual quiere el factorial: \n");
   scanf("%d",&n);

   fact = factorial(n);

   printf("%d ! = %ld \n", n, fact);

   return 0;
 }
