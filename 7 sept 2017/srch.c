#include <stdio.h>
#include <stdlib.h>
int readfile()
{
int k;
FILE *ptr;
     ptr=fopen("t.txt","r+");
     fscanf(ptr,"%d",&k); 
     return k;
   }
int main()
{
   int c, lowerbound, upperbound, middle, n, search, numarray[1000],num;
   for (c = 0; c < 1000; c++)
   {
   	readfile();
   	num=readfile();
   	numarray[c]=num;
   	printf("%d\n",numarray[c]);
   printf("Enter value to find\n");
   scanf("%d", &search);
   lowerbound = 1;
   upperbound = n - 1;
   middle = (lowerbound+upperbound)/2;
 
   while (lowerbound <= upperbound)
    {
      if (numarray[middle] < search)
         lowerbound = middle + 1;    
      else if (numarray[middle] == search)
	   {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         upperbound = middle - 1;
 
      middle = (lowerbound + upperbound)/2;
   }
   if (lowerbound > upperbound)
      printf("Not found! %d is not present in the list.\n", search);
 
   return 0;   
}
}
