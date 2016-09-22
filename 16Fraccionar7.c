int Frac7(void)
 {

   int i, N=1000000, l=N/7;
   long int x1, x2, x3, x4, x5, x6, x7, x;

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
   
   begin = clock();
   for(i=1;i<=l;i++)
     {
       x1 += 7*i-6;
       x2 += 7*i-5;
       x3 += 7*i-4;
       x4 += 7*i-3;
       x5 += 7*i-2;
       x6 += 7*i-1;
       x7 += 7*i;
     }

   x = x1+x2+x3+x4+x5+x6+x7;
   end = clock();
   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);   

   printf("La suma de los primeros %d es %ld y tardo: %lf \n", N, x, time);
   fprintf(pf,"7.0 %lf\n",time);
   
   fclose(pf);
   
   return 0;
 }
