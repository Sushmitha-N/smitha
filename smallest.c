#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("enter the three nbrs %d %d %d",a,b,c);
	if(a<b&&a<c)
	{
		printf("a is the smallest number",a);
	}
	if(b<a&&b<c)
	{
		printf("b is the smallest number",b);
	}
	else
	printf("c is the smallest number",c);
    return 0;
}
