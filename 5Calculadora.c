/*
Nombre:Calculadora
Autor:Julian Calle
Descripcion: calcula la suma, resta, multiplicación y división de dos operandos. Para cada operación (suma, resta, multiplicación o división) el programa recibe, en orden, el primer operando, el operador y el segundo operando (ej. 1 suma 2) y producir en pantalla el resultado de la operación.
Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include <string.h>

double suma(double a, double b)
{
  double c;
  c=a+b;
  return c;
}

double resta(double a, double b)
{
  double c;
  c=a-b;
  return c;
}

double multiplicacion(double a, double b)
{
  double c;
  c=a*b;
  return c;
}

double division(double a, double b)
{
  double c;
  c=a/b;
  return c;
}


 int main(int argc, char *argv[])
 {
   char oper[15], sum[5]="suma", rest[6]="resta", mult[15]="multiplicacion", div[9]="division" ;
   double oper1, oper2, result;
   printf("Ingrese en orden, el primer operando(a), el operador (suma, resta, multiplicacion y division) y el segundo operando(b) (a operador b) \n");
   scanf("%lf %s %lf", &oper1, oper, &oper2); 
   
   if(strcmp(oper,sum)==0)
     {
       result = suma(oper1, oper2);
       printf("%lf + %lf = %lf \n", oper1, oper2, result);
     }
   
   if(strcmp(oper,rest)==0)
     {
       result = resta(oper1, oper2);
       printf("%lf - %lf = %lf \n", oper1, oper2, result);
     }
   
   if(strcmp(oper,mult)==0)
     {
       result = multiplicacion(oper1, oper2);
       printf("%lf * %lf = %lf \n", oper1, oper2, result);
     }
   
   if(strcmp(oper,div)==0)
     {
       result = division(oper1, oper2);
       printf("%lf / %lf = %lf \n", oper1, oper2, result);
     }

   return 0;
 }
