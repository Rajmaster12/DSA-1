// Make a Funtion to sum any two integer values// 

#include<stdio.h>
 int sum(int x,int y); /*Function declaration*/
 int main( )
 {
 int a,b,s;
 printf("Enter values for a and b:");
 scanf ("%d %d",&a,&b);
 s=sum (a, b); /*Function call*/
 printf ("Sum of %d and %d is %d\n",a,b,s);
 }
 int sum (int x,int y)  /*function definition*/
 {
 int s;
 s=x+y;
 return s;
 }
