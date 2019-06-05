#include <stdio.h>
void main()
{
int a=5,b=6;
int *c;
c=&a;
printf("\na=%d, b=%d, c=%d\n", a, b, *c);
*c=10;

printf("\na=%d, b=%d, c=%d\n", a, b, *c);




}
