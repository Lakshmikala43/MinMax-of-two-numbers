#include<stdio.h>
void main()
{
int a=22,b=-8;
int min,max;
max=(a+b)+(abs(a-b)/2);
min=(a+b)-(abs(a-b)/2);
printf("max=%d",max);
printf("min=%d",min);
}