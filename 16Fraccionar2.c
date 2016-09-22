 int Frac2(void)
 {

   int i, N=1000000,l=N/2-1;
   long int x1, x2, x;
   
   clock_t begin, end;
   double time, seno1, seno2, seno;

   FILE *pf;

   pf=fopen("datos.dat","w");
   
   x1 = 0;
   x2 = 0;
   
   begin = clock();
   for(i=0;i<=l;i++)
     {
       x1 += 2*i+1;
       x2 += 2*i;
     }
   x = x1+x2;
   end = clock();
   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);   

   printf("La suma de los primeros %d es %ld y tardo: %lf \n", N, x, time);
   fprintf(pf,"2.0 %lf\n",time);
   
   fclose(pf);
   
   return 0;
 }
