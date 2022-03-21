#include <stdio.h>
int main ()
{
int n, i;
printf("Akash gaur\n");
printf("Enter an integer: ");
scanf("%d", &n);
for (i=1;i<=n;i++)
{
printf ("%d %d\n",i,i*i);
}
return 0;
}