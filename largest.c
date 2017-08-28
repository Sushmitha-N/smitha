#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("enter the three nbrs %d %d %d",a,b,c);
	if(a>b&&a>c)
	{
		printf("a is the largest number",a);
	}
	if(b>a&&b>c)
	{
		printf("b is the largest number",b);
	}
	else
	printf("c is the largest number",c);
    return 0;
}
