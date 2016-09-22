int doble(void)
 {
   clock_t begin, end;
   int i, k, length=100, nvector=100;
   double time, a[length], b[length], A[length][nvector], B[length][nvector], c[length], C=3.0;
   
   for(i=0;i<length;i++)
     {
       b[i] = 1.0*i;
       c[i] = 3.0;
     }

   for(k=0;k<nvector;k++)
     {
       for(i=0;i<length;i++)
	 {
	   B[i][k]=1.0*i;
	 }
     }

   
   begin = clock();
   for(i=0;i<length;i++)
     {
       a[i] = b[i]*C;
     }
   end = clock();
   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);   

   printf("El primer caso con double tarda: %lf\n",time);
   
   begin = clock();

   for(k=0;k<nvector;k++)
     {
       for(i=0;i<length;i++)
	 {
	   A[i][k] = B[i][k]*c[i];
	 }
     }

   end = clock();
   time = (double)((1.0*end - 1.0*begin) / CLOCKS_PER_SEC);   

   printf("El segundo caso con double tarda: %lf\n",time);
   
   return 0;
 }

