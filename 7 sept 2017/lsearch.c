#include<stdio.h>

int linrsearch(int array[])
{
	int num;    		//Number to be searched
	int i;    		//Index of the array
	FILE *fptr; 		//File pointer
	
	fptr=fopen("lr.html","w");
	if(fptr == NULL)
   	{
        	fprintf(fptr,"<HTML><H>unable to open the file %d</H>\n",errno);
        	fprintf(fptr,"%s\n",strerror(errno));
        	fprintf(fptr,"</HTML>\n");
        	fclose(fptr);
        	exit(0);
    	}
	
	printf("Enter the number to be searched:");
	scanf("%d",&num);
	for(i=0;i<1000;i++)
	{
		if(array[i]==num)
		{
			fprintf(fptr,"%s","<H1>Number Found!</H1>");
			break;
		}
		else if(i==999)
		{
			fprintf(fptr,"%s","<H2><center>Number not found</H2>");
		}
	}
}

main()
{
	FILE *ptr;   	 
	int x;       	 //Value read from file
	int i=0;	 //Index of the array
	int v;
	int numArray[1000];	 
	int flag=1;
	
	ptr=fopen("num.txt","r");
	if (ptr == NULL)
   	{
     	    printf("Unable to too open the file\n");
            exit(1);
  	}
	while(flag==1)
	{
	    v=fscanf(ptr,"%d",&x);
	    if(v==EOF)
	    {
		 flag=0;
	    }
	    else
	    {
	    	numArray[i]=x;
		i++;
	    }
	}
  
	linrsearch(numArray);
}
