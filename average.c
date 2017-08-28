#include<stdio.h>
main()
{
int n,i,N,sum=0;
float average;
scanf("%d",&n);
printf("enter nbr of elemnts\n",n);
for (i=0;i<n;i++)
{
	scanf("%d",&N);
	printf("enter the value of N\n");
	sum=sum+N;
}
average=sum/n;
printf("the avg is %f\n",average);
}


