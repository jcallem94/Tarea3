/*
  Nombre:Primos
  Autor:Julian Calle
  Descripcion:calcula los números primos menores que Xmax. El programa recibe Xmax y como resultado imprime en pantalla todos los números primos menores que Xmax.
  Modificaciones:
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double Primo(int n)
{
  int i,l,Resid;
  
  l=0;
  
  for(i=2;i<n;i++)
    {
      Resid=n%i;
      if(Resid==0)
	{
	  l+=1; 
	}
    }
  return l;
}

int main(int argc, char *argv[])
{
  int i, num, n;
  
  printf("Ingrese un numero: \n");
  scanf("%d",&num);
  
  for(i=1;i<num;i++)
    {
      n=Primo(i);
      if(n==0)
	{
	  printf("%d \n", i);
	}
    }
  
  return 0;  
}
