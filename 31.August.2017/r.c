#include<stdio.h>
#include<stdlib.h>
int randomfunc(int seed)
{
int c;
int n;
	n=rand()%100;
	printf("%d\n",n);

return n;
}
//avg function
int avgfunc(int tempr[n])
{
int size,sum;
sum=0;
while(size <15)
{
sum=sum+tempr[size];
avg=sum/size;
size++;
}
return avg;
}
//max function
int maxfunc(int tempr[n],int maximum,int c)
{
  printf("take the inputs\n", n);
  for (c = 0; c < 15; c++)
    scanf("%d", &tempr[c]);
  maximum = tempr[0];
  for (c = 1; c < 15; c++)
  {
    if (tempr[c] > maximum)
    {
       maximum  = tempr[c];
    }
  }
 
  printf("Maximum element is ",maximum);
  return maximum;
}
//minfunction
int minfunc(int tempr[n],int minimum,int c)
{
  printf("take the inputs\n", n);
  for (c = 0; c < 15; c++)
    scanf("%d", &tempr[c]);
  maximum = tempr[0];
  for (c = 1; c < 15; c++)
  {
    if (tempr[c] < minimum)
    {
       minimum  = tempr[c];
    }
  }
 
  printf("Minimum element is ",minimum);
  return minimum;
}
main()
{
	int tempr[15],n,minitemp,maxitemp,average,flag=1,size=0,i=0;
	while(flag==1)
	{
	if(size=0 && size<=4)	
	{
		while(i>=0 && i<=4)
		{
		tempr[i]=int randomfunc(i);
		i++;
		}
		minitemp=minfunc(tempr,minimum,c);
		maxitemp=maxfunc(int tempr,maximum,c);
		average=int avgfunc(int tempr);
		printf("the minimum,maximum, average,in first five min window are",minimum,maximum,average);
		size+=5;
	}
	if(size=5 && size<=9)	
	{
		while(i>=5 && i<=9)
		{
		tempr[i]=int randomfunc(i);
		i++;
		}
		
		minitemp=minfunc(tempr,minimum,c);
		maxitemp=maxfunc(tempr,maximum,c);
		average=int avgfunc(tempr);
		printf("the minimum,maximum, average,in first five min window are",minimum,maximum,average);
		size+=5;
	}
	if(size=10 && size<=14);	
	{
		while(i>=10 && i<=14)
		{
		tempr[i]=int randomfunc(i);
		i++;
		}
		minitemp=minfunc(tempr,minimum,c);
		maxitemp=maxfunc(int tempr,maximum,c);
		average=int avgfunc(tempr);
		printf("the minimum,maximum, average,in first five min window are",minimum,maximum,average);
		size+=5;
	}
	if(size=0 && size<=9)	//ten minutes window
	{
		while(i>=0 && i<=9)
		{
		tempr[i]=int randomfunc(i);
		i++;
		}
		minitemp=minfunc(tempr,miniimum,c);
		maxitemp=maxfunc(tempr,maximum,c);
		average=int avgfunc(int tempr);
		printf("the minimum,maximum, average,in first five min window are",minimum,maximum,average);
		size+=5;
	}
	if(size=0 && size<=14)	
	{
	while(i>=0 && i<=14)
		{
		tempr[i]=int randomfunc(i);
		i++;
		}
		
		minitemp=minfunc(tempr,miniimum,c);
		maxitemp=maxfunc(tempr,maximum,c);
		average=int avgfunc(tempr);
		printf("the minimum,maximum, average,in first five min window are",minimum,maximum,average);
		size+=5;
	}
	}
	
}
