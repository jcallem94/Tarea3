int Frac10(void)
 {

   int i, N=1000000, l=N/10-1;
   long int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x;

   clock_t begin, end;
   double time;

   FILE *pf;

   pf=fopen("datos.dat","a");
   
   x1 = 0;
   x2 = 0;
   x3 = 0;
   x4 = 0;
   x5 = 0;
   x6 = 0;
   x7 = 0;
   x8 = 0;
   x9 = 0;
   x10 = 0;
   
   begin = clock();
   for(i=0;i<=l;i++)
     {
       x1 += 10*i+9;
       x2 += 10*i+8;
       x3 += 10*i+7;
       x4 += 10*i+6;
       x5 += 10*i+5;
       x6 += 10*i+4;
       x7 += 10*i+3;
       x8 += 10*i+2;
       x9 += 10*i+1;
       x10 += 10*i;
     }

   x = x1+x2+x3+x4+x5+x6+x7+x8+x9+x10;
   end = clock();
   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);   

   printf("La suma de los primeros %d es %ld y tardo: %lf \n", N, x, time);
   fprintf(pf,"10.0 %lf\n",time);
   
   fclose(pf);
   
   return 0;
 }
