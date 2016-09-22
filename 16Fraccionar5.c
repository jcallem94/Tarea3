int Frac5(void)
 {

   int i, N=1000000, l=N/5-1;
   long int x1, x2, x3, x4, x5, x;

   clock_t begin, end;
   double time, seno1, seno2, seno;

   FILE *pf;

   pf=fopen("datos.dat","a");
   
   x1 = 0;
   x2 = 0;
   x3 = 0;
   x4 = 0;
   x5 = 0;
   
   begin = clock();
   for(i=0;i<=l;i++)
     {
       x1 += 5*i+4;
       x2 += 5*i+3;
       x3 += 5*i+2;
       x4 += 5*i+1;
       x5 += 5*i;
     }
   x = x1+x2+x3+x4+x5;
   end = clock();
   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);   

   printf("La suma de los primeros %d es %ld y tardo: %lf \n", N, x, time);
   fprintf(pf,"5.0 %lf\n",time);
   
   fclose(pf);
   
   return 0;
 }
