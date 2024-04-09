#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main()
{
   int i;
   double vt[N], *puntVt;
   puntVt = vt;
   srand(time(NULL));
   for(i = 0;i<N; i++)
   {
      *puntVt = 1+rand()%100;
      printf("%f ", *puntVt);
      puntVt++;
   }
   return 0;
}