#include<stdio.h>
int main() 
{

    const char *s ="asdfhjkl";
    int n = 0;
    while (s[++n]);
    {
    printf ("%d\n", n);
    return 0;
}
}
