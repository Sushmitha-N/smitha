#include <stdio.h>
#include<stdlib.h>
main() 
{
  int c, n;
  FILE *ptr;
  ptr=fopen("ra.txt","r+");
  srand(200);
  printf("random numbers\n");
  for (c = 0; c < 1000; c++) 
  {
    n = rand();
    fprintf(ptr,"%d\n",n);
  }
fclose(ptr);
}

