#include<stdio.h>
#include<stdlib.h>
int randomfunc()
{
int c;
static int n;
for(c=1;c<=15;c++)
{
	n=rand()%100;
	printf("%d\n",n);
}
return 0;
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
  return 0;
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
  return 0;
}
main()
{
	int tempr[15],n,minitemp,maxitemp,average,flag=1,size=15;
	while(flag==1)
	{
	if(size=0 && size<=4)	
	{
		scanf("%d",&n);
		minitemp=minfunc(int tempr[n],miniimum,c);
		maxitemp=maxfunc(int tempr[n],maximum,c);
		average=int avgfunc(int tempr[n]);
		printf("the minimum,maximum, average,in first five min window are",minimum,maximum,average);
	}
	if(size=5 && size<=9)	
	{
		scanf("%d",&n);
		minitemp=minfunc(int tempr[n],miniimum,c);
		maxitemp=maxfunc(int tempr[n],maximum,c);
		average=int avgfunc(int tempr[n]);
		printf("the minimum,maximum, average,in first five min window are",minimum,maximum,average);
	}
	if(size=6 && size<=14);	
	{
		scanf("%d",&n);
		minitemp=minfunc(int tempr[n],miniimum,c);
		maxitemp=maxfunc(int tempr[n],maximum,c);
		average=int avgfunc(int tempr[n]);
		printf("the minimum,maximum, average,in first five min window are",minimum,maximum,average);
	}
	if(size=0 && size<=9)	//ten minutes window
	{
		scanf("%d",&n);
		minitemp=minfunc(int tempr[n],miniimum,c);
		maxitemp=maxfunc(int tempr[n],maximum,c);
		average=int avgfunc(int tempr[n]);
		printf("the minimum,maximum, average,in first five min window are",minimum,maximum,average);
	}
	if(size=0 && size<=14)	
	{
		scanf("%d",&n);
		minitemp=minfunc(int tempr[n],miniimum,c);
		maxitemp=maxfunc(int tempr[n],maximum,c);
		average=int avgfunc(int tempr[n]);
		printf("the minimum,maximum, average,in first five min window are",minimum,maximum,average);
	}
	}
	
}
