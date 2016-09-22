int Frac4(void)
 {

   int i, N=1000000, l=N/4-1;
   long int x1, x2, x3, x4, x;

   clock_t begin, end;
   double time, seno1, seno2, seno;

   FILE *pf;

   pf=fopen("datos.dat","a");
   
   x1 = 0;
   x2 = 0;
   x3 = 0;
   x4 = 0;
   
   begin = clock();
   for(i=0;i<=l;i++)
     {
       x1 += 4*i+3;
       x2 += 4*i+2;
       x3 += 4*i+1;
       x4 += 4*i;
     }
   x = x1+x2+x3+x4;
   end = clock();
   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);   

   printf("La suma de los primeros %d es %ld y tardo: %lf \n", N, x, time);
   fprintf(pf,"4.0 %lf\n",time);
   
   fclose(pf);
   
   return 0;
 }
