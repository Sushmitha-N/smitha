#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <errno.h>
int readfile()
{
int k=0; // to hold random number
     FILE *ptr;
     ptr=fopen("ra.txt","r+"); //file t has the random numbers
     fscanf(ptr,"%d",&k); 
     return k;
    fclose(ptr);
   }
main()
{
   FILE *fptr;
   fptr=fopen("search.html","w");
   int c; //declares the range
   int lowerbound, upperbound, middle, n, search, numarray[1000],num; //n defines the last value,search is the nbr to be searched
   //numarray[1000] to store 1000 random nbrs  
   for (c = 0; c < 1000; c++)
   {
   	num=readfile();
   	numarray[c]=num;
   }
   printf("Enter value to find\n");
   scanf("%d", &search);
   if (fptr == NULL)
   {
        	fprintf(fptr,"<HTML><p>unable to open the file %d</p>\n",errno);
        	fprintf(fptr,"%s\n",strerror(errno));
        	fprintf(fptr,"</HTML>\n");
        	fclose(fptr);
        	exit(0);
   }
   else
   lowerbound = 0;
   upperbound = n - 1;
   middle = (lowerbound+upperbound)/2;
   while (lowerbound <= upperbound)
{
      if (numarray[middle] < search)
         lowerbound = middle + 1;   
      else if (numarray[middle] == search)
	   {
         printf("%d found at location %d.\n", search, middle+1);
         fprintf(fptr,"<html><H1><center>%d found at location %d</center></H1></html>",num,middle+1);
      }
      else
      upperbound = middle - 1;
      middle = (lowerbound + upperbound)/2;
  }
   if (lowerbound > upperbound)
      printf("Not found! %d is not present in the list.\n", search);
      fprintf(fptr,"%s","<html><H1><center>nbr is not present in the list</center></H1></html>"); 
      fclose(fptr);
}
