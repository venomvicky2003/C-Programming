
/*Point out the errors
int main( )
{
int a, float b, int c ;
a = 25 ; b = 3.24 ; c = a + b * b – 35 ;
}*/


#include<stdio.h>
int main( )
{
int a,c; /*the declaration of variable was wrong*/
float b;
a = 25; 
b = 3.24; 
c = a+b*b;
c=c-35; /*while using variable we should use constant inside the opration*/
printf("%d", c);
}
