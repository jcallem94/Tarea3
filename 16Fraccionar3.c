int Frac3(void)
 {

   int i, N=1000000, l=N/3;
   long int x1, x2, x3, x;

   clock_t begin, end;
   double time, seno1, seno2, seno;

   FILE *pf;

   pf=fopen("datos.dat","a");
   
   x1 = 0;
   x2 = 0;
   x3 = 0;
   
   begin = clock();
   for(i=1;i<=l;i++)
     {
       x1 += 3*i-2;
       x2 += 3*i-1;
       x3 += 3*i;
     }
   x = x1+x2+x3;
   end = clock();
   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);   

   printf("La suma de los primeros %d es %ld y tardo: %lf \n", N, x, time);
   fprintf(pf,"3.0 %lf\n",time);
   
   fclose(pf);
   
   return 0;
 }
