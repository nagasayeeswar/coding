#include <stdio.h>
void main()
{
int a=5,b=6;
int *c, *d;
c=&a,d=&b;
printf("\na=%d, b=%d, c=%d, d=%d\n", a, b, *c, *d);
*c=10, *d=8;

printf("\na=%d, b=%d, c=%d, d=%d\n", a, b, *c, *d);
int Sum=*c+*d;
int Difference=*c-*d;
int Product=*c * *d;
float Division=*c / *d;


printf("\nSum=%d,\nDifference=%d,\nProduct=%d,\nDivision=%f",Sum, Difference ,Product,Division);



}
